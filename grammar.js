/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 * @see {@link https://www.freedesktop.org/software/systemd/man/latest/udev.html|manual}
 * @see {@link https://en.wikipedia.org/wiki/Escape_sequences_in_C#Table_of_escape_sequences|C escapes}
 */

const O = optional, I = token.immediate;

/** @param {string} name */
const key = name => field('key', name);

module.exports = grammar({
  name: 'udev',

  extras: $ => [
    /[ \t]/,
    $.linebreak
  ],

  rules: {
    rules: $ => repeat(
      choice(
        seq($.rule, /\n/),
        seq($.comment, /\n/),
        /\n/,
      )
    ),

    rule: $ => seq(
      repeat(seq($.match, ',')),
      $.assignment,
      repeat(seq(',', choice($.assignment, $.match)))
    ),

    match: $ => choice(
      seq(key('ACTION'), $.match_op, $.value),
      seq(key('DEVPATH'), $.match_op, $.value),
      seq(key('KERNEL'), $.match_op, $.value),
      seq(key('KERNELS'), $.match_op, $.value),
      seq(key('NAME'), $.match_op, $._sub_value),
      seq(key('SYMLINK'), $.match_op, $._sub_value),
      seq(key('SUBSYSTEM'), $.match_op, $.value),
      seq(key('SUBSYSTEMS'), $.match_op, $.value),
      seq(key('DRIVER'), $.match_op, $.value),
      seq(key('DRIVERS'), $.match_op, $.value),
      seq(key('ATTR'), I('{'), $.attribute, '}', $.match_op, $.value),
      seq(key('ATTRS'), I('{'), $.attribute, '}', $.match_op, $.value),
      seq(key('SYSCTL'), I('{'), $.kernel_param, '}', $.match_op, $.value),
      seq(key('ENV'), I('{'), $.env_var, '}', $.match_op, $.value),
      seq(key('CONST'), I('{'), $.system_const, '}', $.match_op, $.value),
      seq(key('TAG'), $.match_op, $.value),
      seq(key('TAGS'), $.match_op, $.value),
      seq(key('TEST'), O(seq(I('{'), $.octal, '}')), $.match_op, $.value),
      seq(key('PROGRAM'), choice($.match_op, $.assignment_op), $._sub_value),
      seq(key('RESULT'), $.match_op, $.value),
    ),

    assignment: $ => choice(
      seq(key('NAME'), $.assignment_op, $._sub_value),
      seq(key('SYMLINK'), $.assignment_op, $._sub_value),
      seq(key('OWNER'), $.assignment_op, $._sub_value),
      seq(key('GROUP'), $.assignment_op, $._sub_value),
      seq(key('MODE'), $.assignment_op, $._sub_value),
      seq(key('SECLABEL'), I('{'), $.seclabel, '}', $.assignment_op, $._sub_value),
      seq(key('ATTR'), I('{'), $.attribute, '}', $.assignment_op, $.value),
      seq(key('SYSCTL'), I('{'), $.kernel_param, '}', $.assignment_op, $.value),
      seq(key('ENV'), I('{'), $.env_var, '}', $.assignment_op, $.value),
      seq(key('TAG'), $.assignment_op, $.value),
      seq(key('RUN'), O(seq(I('{'), $.run_type, '}')), $.assignment_op, $._sub_value),
      seq(key('LABEL'), $.assignment_op, $.value),
      seq(key('GOTO'), $.assignment_op, $.value),
      seq(key('IMPORT'), I('{'), $.import_type, '}', choice($.assignment_op, $.match_op), $.value),
      seq(key('OPTIONS'), $.assignment_op, $.value), // TODO: parse value
    ),

    system_const: _ => token(choice('arch', 'virt', 'cvm')),

    run_type: _ => token(choice('program', 'builtin')),

    import_type: _ => token(choice('program', 'builtin', 'file', 'db', 'cmdline', 'parent')),

    attribute: $ => repeat1(choice(
      /[\w/.]/,
      $.pattern,
      $.fmt_sub
    )),

    env_var: _ => /[\w.]+/,

    kernel_param: _ => /[\w.]+/,

    seclabel: _ => /[a-zA-Z]+/,

    octal: _ => /0?[0-7]{3}/,

    number: _ => /\d+/,

    match_op: _ => token(choice('==', '!=')),

    assignment_op: _ => token(choice('=', '-=', '+=', ':=')),

    value: $ => choice(
      seq('"', O($._content), I('"')),
      seq('e', I('"'), O($._c_content), I('"')),
    ),

    _sub_value: $ => alias(choice(
      seq('"', O($._sub_content), I('"')),
      seq('e', I('"'), O($._sub_c_content), I('"')),
    ), $.value),

    _content: $ => repeat1(
      choice(
        /[^"]/,
        '\\"',
        $.pattern
      )
    ),

    _sub_content: $ => repeat1(
      choice(
        /[^"]/,
        '\\"',
        $.pattern,
        $.fmt_sub,
        $.var_sub
      )
    ),

    _c_content: $ => repeat1(
      choice(
        /[^"]/,
        $.pattern,
        $.c_escape
      )
    ),

    _sub_c_content: $ => repeat1(
      choice(
        /[^"]/,
        $.pattern,
        $.c_escape,
        $.fmt_sub,
        $.var_sub
      )
    ),

    pattern: _ => choice(
      '*', '?', '|',
      /\[!?[^\[\]"]+\]/, // TODO: escaped?
    ),

    c_escape: _ => choice(
      /\\[abefnrtv\\'?]/,
      /\\\d{1,3}/,
      /\\x[0-9A-Fa-f]{2}/,
      /\\u[0-9A-Fa-f]{4}/,
      /\\U[0-9A-Fa-f]{8}/
    ),

    fmt_sub: $ => choice(
      '%k',
      '%n',
      '%p',
      '%b',
      seq(
        '%s',
        I('{'),
        $.attribute,
        '}'
      ),
      seq(
        '%E', I('{'),
        $.env_var,
        '}'
      ),
      '%M',
      '%m',
      seq(
        '%c',
        optional(seq(
          I('{'),
          $.number,
          optional('+'),
          I('}')
        ))
      ),
      '%P',
      '%r',
      '%S',
      '%N',
      '%%'
    ),

    var_sub: $ => choice(
      '$kernel', // %k
      '$number', // %n
      '$devpath', // %p
      '$id', // %b
      '$driver',
      seq(
        '$attr',  // %s
        I('{'),
        $.attribute,
        '}'
      ),
      seq(
        '$env', I('{'), // %E
        $.env_var,
        '}'
      ),
      '$major', // %M
      '$minor', // %m
      seq(
        '$result', // %c
        optional(seq(
          I('{'),
          $.number,
          optional('+'),
          '}'
        ))
      ),
      '$parent',  // %P
      '$name',
      '$links',
      '$root', // %r
      '$sys',  // %S
      '$devnode', // %N
      '$$' // %%
    ),

    linebreak: _ => token(prec(1, seq('\\', /\n/))),

    comment: _ => /#.*/,
  }
});

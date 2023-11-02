#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 159
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  aux_sym_rules_token1 = 1,
  anon_sym_COMMA = 2,
  anon_sym_ACTION = 3,
  anon_sym_DEVPATH = 4,
  anon_sym_KERNEL = 5,
  anon_sym_KERNELS = 6,
  anon_sym_NAME = 7,
  anon_sym_SYMLINK = 8,
  anon_sym_SUBSYSTEM = 9,
  anon_sym_SUBSYSTEMS = 10,
  anon_sym_DRIVER = 11,
  anon_sym_DRIVERS = 12,
  anon_sym_ATTR = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_ATTRS = 16,
  anon_sym_SYSCTL = 17,
  anon_sym_ENV = 18,
  anon_sym_CONST = 19,
  anon_sym_TAG = 20,
  anon_sym_TAGS = 21,
  anon_sym_TEST = 22,
  anon_sym_PROGRAM = 23,
  anon_sym_RESULT = 24,
  anon_sym_OWNER = 25,
  anon_sym_GROUP = 26,
  anon_sym_MODE = 27,
  anon_sym_SECLABEL = 28,
  anon_sym_RUN = 29,
  anon_sym_LABEL = 30,
  anon_sym_GOTO = 31,
  anon_sym_IMPORT = 32,
  anon_sym_OPTIONS = 33,
  sym_system_const = 34,
  sym_run_type = 35,
  sym_import_type = 36,
  aux_sym_attribute_token1 = 37,
  aux_sym_env_var_token1 = 38,
  sym_seclabel = 39,
  sym_octal = 40,
  sym_number = 41,
  sym_match_op = 42,
  sym_assignment_op = 43,
  anon_sym_DQUOTE = 44,
  anon_sym_DQUOTE2 = 45,
  anon_sym_e = 46,
  aux_sym__content_token1 = 47,
  anon_sym_BSLASH_DQUOTE = 48,
  anon_sym_STAR = 49,
  anon_sym_QMARK = 50,
  anon_sym_PIPE = 51,
  aux_sym_pattern_token1 = 52,
  aux_sym_c_escape_token1 = 53,
  aux_sym_c_escape_token2 = 54,
  aux_sym_c_escape_token3 = 55,
  aux_sym_c_escape_token4 = 56,
  aux_sym_c_escape_token5 = 57,
  anon_sym_PERCENTk = 58,
  anon_sym_PERCENTn = 59,
  anon_sym_PERCENTp = 60,
  anon_sym_PERCENTb = 61,
  anon_sym_PERCENTs = 62,
  anon_sym_PERCENTE = 63,
  anon_sym_PERCENTM = 64,
  anon_sym_PERCENTm = 65,
  anon_sym_PERCENTc = 66,
  anon_sym_PLUS = 67,
  anon_sym_RBRACE2 = 68,
  anon_sym_PERCENTP = 69,
  anon_sym_PERCENTr = 70,
  anon_sym_PERCENTS = 71,
  anon_sym_PERCENTN = 72,
  anon_sym_PERCENT_PERCENT = 73,
  anon_sym_DOLLARkernel = 74,
  anon_sym_DOLLARnumber = 75,
  anon_sym_DOLLARdevpath = 76,
  anon_sym_DOLLARid = 77,
  anon_sym_DOLLARdriver = 78,
  anon_sym_DOLLARattr = 79,
  anon_sym_DOLLARenv = 80,
  anon_sym_DOLLARmajor = 81,
  anon_sym_DOLLARminor = 82,
  anon_sym_DOLLARresult = 83,
  anon_sym_DOLLARparent = 84,
  anon_sym_DOLLARname = 85,
  anon_sym_DOLLARlinks = 86,
  anon_sym_DOLLARroot = 87,
  anon_sym_DOLLARsys = 88,
  anon_sym_DOLLARdevnode = 89,
  anon_sym_DOLLAR_DOLLAR = 90,
  sym_linebreak = 91,
  sym_comment = 92,
  sym_rules = 93,
  sym_rule = 94,
  sym_match = 95,
  sym_assignment = 96,
  sym_attribute = 97,
  sym_env_var = 98,
  sym_kernel_param = 99,
  sym_value = 100,
  sym__sub_value = 101,
  aux_sym__content = 102,
  aux_sym__sub_content = 103,
  aux_sym__c_content = 104,
  aux_sym__sub_c_content = 105,
  sym_pattern = 106,
  sym_c_escape = 107,
  sym_fmt_sub = 108,
  sym_var_sub = 109,
  aux_sym_rules_repeat1 = 110,
  aux_sym_rule_repeat1 = 111,
  aux_sym_rule_repeat2 = 112,
  aux_sym_attribute_repeat1 = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_rules_token1] = "rules_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_ACTION] = "ACTION",
  [anon_sym_DEVPATH] = "DEVPATH",
  [anon_sym_KERNEL] = "KERNEL",
  [anon_sym_KERNELS] = "KERNELS",
  [anon_sym_NAME] = "NAME",
  [anon_sym_SYMLINK] = "SYMLINK",
  [anon_sym_SUBSYSTEM] = "SUBSYSTEM",
  [anon_sym_SUBSYSTEMS] = "SUBSYSTEMS",
  [anon_sym_DRIVER] = "DRIVER",
  [anon_sym_DRIVERS] = "DRIVERS",
  [anon_sym_ATTR] = "ATTR",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_ATTRS] = "ATTRS",
  [anon_sym_SYSCTL] = "SYSCTL",
  [anon_sym_ENV] = "ENV",
  [anon_sym_CONST] = "CONST",
  [anon_sym_TAG] = "TAG",
  [anon_sym_TAGS] = "TAGS",
  [anon_sym_TEST] = "TEST",
  [anon_sym_PROGRAM] = "PROGRAM",
  [anon_sym_RESULT] = "RESULT",
  [anon_sym_OWNER] = "OWNER",
  [anon_sym_GROUP] = "GROUP",
  [anon_sym_MODE] = "MODE",
  [anon_sym_SECLABEL] = "SECLABEL",
  [anon_sym_RUN] = "RUN",
  [anon_sym_LABEL] = "LABEL",
  [anon_sym_GOTO] = "GOTO",
  [anon_sym_IMPORT] = "IMPORT",
  [anon_sym_OPTIONS] = "OPTIONS",
  [sym_system_const] = "system_const",
  [sym_run_type] = "run_type",
  [sym_import_type] = "import_type",
  [aux_sym_attribute_token1] = "attribute_token1",
  [aux_sym_env_var_token1] = "env_var_token1",
  [sym_seclabel] = "seclabel",
  [sym_octal] = "octal",
  [sym_number] = "number",
  [sym_match_op] = "match_op",
  [sym_assignment_op] = "assignment_op",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_e] = "e",
  [aux_sym__content_token1] = "_content_token1",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
  [anon_sym_PIPE] = "|",
  [aux_sym_pattern_token1] = "pattern_token1",
  [aux_sym_c_escape_token1] = "c_escape_token1",
  [aux_sym_c_escape_token2] = "c_escape_token2",
  [aux_sym_c_escape_token3] = "c_escape_token3",
  [aux_sym_c_escape_token4] = "c_escape_token4",
  [aux_sym_c_escape_token5] = "c_escape_token5",
  [anon_sym_PERCENTk] = "%k",
  [anon_sym_PERCENTn] = "%n",
  [anon_sym_PERCENTp] = "%p",
  [anon_sym_PERCENTb] = "%b",
  [anon_sym_PERCENTs] = "%s",
  [anon_sym_PERCENTE] = "%E",
  [anon_sym_PERCENTM] = "%M",
  [anon_sym_PERCENTm] = "%m",
  [anon_sym_PERCENTc] = "%c",
  [anon_sym_PLUS] = "+",
  [anon_sym_RBRACE2] = "}",
  [anon_sym_PERCENTP] = "%P",
  [anon_sym_PERCENTr] = "%r",
  [anon_sym_PERCENTS] = "%S",
  [anon_sym_PERCENTN] = "%N",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [anon_sym_DOLLARkernel] = "$kernel",
  [anon_sym_DOLLARnumber] = "$number",
  [anon_sym_DOLLARdevpath] = "$devpath",
  [anon_sym_DOLLARid] = "$id",
  [anon_sym_DOLLARdriver] = "$driver",
  [anon_sym_DOLLARattr] = "$attr",
  [anon_sym_DOLLARenv] = "$env",
  [anon_sym_DOLLARmajor] = "$major",
  [anon_sym_DOLLARminor] = "$minor",
  [anon_sym_DOLLARresult] = "$result",
  [anon_sym_DOLLARparent] = "$parent",
  [anon_sym_DOLLARname] = "$name",
  [anon_sym_DOLLARlinks] = "$links",
  [anon_sym_DOLLARroot] = "$root",
  [anon_sym_DOLLARsys] = "$sys",
  [anon_sym_DOLLARdevnode] = "$devnode",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [sym_linebreak] = "linebreak",
  [sym_comment] = "comment",
  [sym_rules] = "rules",
  [sym_rule] = "rule",
  [sym_match] = "match",
  [sym_assignment] = "assignment",
  [sym_attribute] = "attribute",
  [sym_env_var] = "env_var",
  [sym_kernel_param] = "kernel_param",
  [sym_value] = "value",
  [sym__sub_value] = "_sub_value",
  [aux_sym__content] = "_content",
  [aux_sym__sub_content] = "_sub_content",
  [aux_sym__c_content] = "_c_content",
  [aux_sym__sub_c_content] = "_sub_c_content",
  [sym_pattern] = "pattern",
  [sym_c_escape] = "c_escape",
  [sym_fmt_sub] = "fmt_sub",
  [sym_var_sub] = "var_sub",
  [aux_sym_rules_repeat1] = "rules_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_rule_repeat2] = "rule_repeat2",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_rules_token1] = aux_sym_rules_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ACTION] = anon_sym_ACTION,
  [anon_sym_DEVPATH] = anon_sym_DEVPATH,
  [anon_sym_KERNEL] = anon_sym_KERNEL,
  [anon_sym_KERNELS] = anon_sym_KERNELS,
  [anon_sym_NAME] = anon_sym_NAME,
  [anon_sym_SYMLINK] = anon_sym_SYMLINK,
  [anon_sym_SUBSYSTEM] = anon_sym_SUBSYSTEM,
  [anon_sym_SUBSYSTEMS] = anon_sym_SUBSYSTEMS,
  [anon_sym_DRIVER] = anon_sym_DRIVER,
  [anon_sym_DRIVERS] = anon_sym_DRIVERS,
  [anon_sym_ATTR] = anon_sym_ATTR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_ATTRS] = anon_sym_ATTRS,
  [anon_sym_SYSCTL] = anon_sym_SYSCTL,
  [anon_sym_ENV] = anon_sym_ENV,
  [anon_sym_CONST] = anon_sym_CONST,
  [anon_sym_TAG] = anon_sym_TAG,
  [anon_sym_TAGS] = anon_sym_TAGS,
  [anon_sym_TEST] = anon_sym_TEST,
  [anon_sym_PROGRAM] = anon_sym_PROGRAM,
  [anon_sym_RESULT] = anon_sym_RESULT,
  [anon_sym_OWNER] = anon_sym_OWNER,
  [anon_sym_GROUP] = anon_sym_GROUP,
  [anon_sym_MODE] = anon_sym_MODE,
  [anon_sym_SECLABEL] = anon_sym_SECLABEL,
  [anon_sym_RUN] = anon_sym_RUN,
  [anon_sym_LABEL] = anon_sym_LABEL,
  [anon_sym_GOTO] = anon_sym_GOTO,
  [anon_sym_IMPORT] = anon_sym_IMPORT,
  [anon_sym_OPTIONS] = anon_sym_OPTIONS,
  [sym_system_const] = sym_system_const,
  [sym_run_type] = sym_run_type,
  [sym_import_type] = sym_import_type,
  [aux_sym_attribute_token1] = aux_sym_attribute_token1,
  [aux_sym_env_var_token1] = aux_sym_env_var_token1,
  [sym_seclabel] = sym_seclabel,
  [sym_octal] = sym_octal,
  [sym_number] = sym_number,
  [sym_match_op] = sym_match_op,
  [sym_assignment_op] = sym_assignment_op,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_e] = anon_sym_e,
  [aux_sym__content_token1] = aux_sym__content_token1,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_pattern_token1] = aux_sym_pattern_token1,
  [aux_sym_c_escape_token1] = aux_sym_c_escape_token1,
  [aux_sym_c_escape_token2] = aux_sym_c_escape_token2,
  [aux_sym_c_escape_token3] = aux_sym_c_escape_token3,
  [aux_sym_c_escape_token4] = aux_sym_c_escape_token4,
  [aux_sym_c_escape_token5] = aux_sym_c_escape_token5,
  [anon_sym_PERCENTk] = anon_sym_PERCENTk,
  [anon_sym_PERCENTn] = anon_sym_PERCENTn,
  [anon_sym_PERCENTp] = anon_sym_PERCENTp,
  [anon_sym_PERCENTb] = anon_sym_PERCENTb,
  [anon_sym_PERCENTs] = anon_sym_PERCENTs,
  [anon_sym_PERCENTE] = anon_sym_PERCENTE,
  [anon_sym_PERCENTM] = anon_sym_PERCENTM,
  [anon_sym_PERCENTm] = anon_sym_PERCENTm,
  [anon_sym_PERCENTc] = anon_sym_PERCENTc,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_RBRACE2] = anon_sym_RBRACE,
  [anon_sym_PERCENTP] = anon_sym_PERCENTP,
  [anon_sym_PERCENTr] = anon_sym_PERCENTr,
  [anon_sym_PERCENTS] = anon_sym_PERCENTS,
  [anon_sym_PERCENTN] = anon_sym_PERCENTN,
  [anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT,
  [anon_sym_DOLLARkernel] = anon_sym_DOLLARkernel,
  [anon_sym_DOLLARnumber] = anon_sym_DOLLARnumber,
  [anon_sym_DOLLARdevpath] = anon_sym_DOLLARdevpath,
  [anon_sym_DOLLARid] = anon_sym_DOLLARid,
  [anon_sym_DOLLARdriver] = anon_sym_DOLLARdriver,
  [anon_sym_DOLLARattr] = anon_sym_DOLLARattr,
  [anon_sym_DOLLARenv] = anon_sym_DOLLARenv,
  [anon_sym_DOLLARmajor] = anon_sym_DOLLARmajor,
  [anon_sym_DOLLARminor] = anon_sym_DOLLARminor,
  [anon_sym_DOLLARresult] = anon_sym_DOLLARresult,
  [anon_sym_DOLLARparent] = anon_sym_DOLLARparent,
  [anon_sym_DOLLARname] = anon_sym_DOLLARname,
  [anon_sym_DOLLARlinks] = anon_sym_DOLLARlinks,
  [anon_sym_DOLLARroot] = anon_sym_DOLLARroot,
  [anon_sym_DOLLARsys] = anon_sym_DOLLARsys,
  [anon_sym_DOLLARdevnode] = anon_sym_DOLLARdevnode,
  [anon_sym_DOLLAR_DOLLAR] = anon_sym_DOLLAR_DOLLAR,
  [sym_linebreak] = sym_linebreak,
  [sym_comment] = sym_comment,
  [sym_rules] = sym_rules,
  [sym_rule] = sym_rule,
  [sym_match] = sym_match,
  [sym_assignment] = sym_assignment,
  [sym_attribute] = sym_attribute,
  [sym_env_var] = sym_env_var,
  [sym_kernel_param] = sym_kernel_param,
  [sym_value] = sym_value,
  [sym__sub_value] = sym__sub_value,
  [aux_sym__content] = aux_sym__content,
  [aux_sym__sub_content] = aux_sym__sub_content,
  [aux_sym__c_content] = aux_sym__c_content,
  [aux_sym__sub_c_content] = aux_sym__sub_c_content,
  [sym_pattern] = sym_pattern,
  [sym_c_escape] = sym_c_escape,
  [sym_fmt_sub] = sym_fmt_sub,
  [sym_var_sub] = sym_var_sub,
  [aux_sym_rules_repeat1] = aux_sym_rules_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
  [aux_sym_rule_repeat2] = aux_sym_rule_repeat2,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_rules_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEVPATH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KERNEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KERNELS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAME] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYMLINK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUBSYSTEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUBSYSTEMS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DRIVER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DRIVERS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATTR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATTRS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYSCTL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAGS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROGRAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RESULT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OWNER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GROUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MODE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SECLABEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RUN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LABEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GOTO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IMPORT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIONS] = {
    .visible = true,
    .named = false,
  },
  [sym_system_const] = {
    .visible = true,
    .named = true,
  },
  [sym_run_type] = {
    .visible = true,
    .named = true,
  },
  [sym_import_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_attribute_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_env_var_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_seclabel] = {
    .visible = true,
    .named = true,
  },
  [sym_octal] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_match_op] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_op] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pattern_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_escape_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_escape_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_escape_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_c_escape_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENTk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARkernel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARnumber] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARdevpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARdriver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARattr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARenv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARmajor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARminor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARresult] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARparent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARlinks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARroot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARsys] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARdevnode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_linebreak] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_rules] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_env_var] = {
    .visible = true,
    .named = true,
  },
  [sym_kernel_param] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__sub_value] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__content] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__sub_content] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__c_content] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__sub_c_content] = {
    .visible = false,
    .named = false,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_c_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_fmt_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_var_sub] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_rules_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = sym_value,
    [1] = sym_value,
  },
  [3] = {
    [0] = sym_value,
    [1] = sym_value,
    [2] = sym_value,
  },
  [4] = {
    [0] = sym_value,
    [1] = sym_value,
    [2] = sym_value,
    [3] = sym_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__sub_content, 2,
    aux_sym__sub_content,
    sym_value,
  aux_sym__sub_c_content, 2,
    aux_sym__sub_c_content,
    sym_value,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 5,
  [20] = 6,
  [21] = 18,
  [22] = 12,
  [23] = 7,
  [24] = 8,
  [25] = 15,
  [26] = 17,
  [27] = 13,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 39,
  [40] = 36,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 39,
  [45] = 6,
  [46] = 18,
  [47] = 17,
  [48] = 12,
  [49] = 15,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 12,
  [54] = 11,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 12,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 74,
  [77] = 77,
  [78] = 72,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 74,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 75,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 72,
  [101] = 79,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 108,
  [136] = 136,
  [137] = 106,
  [138] = 138,
  [139] = 111,
  [140] = 115,
  [141] = 108,
  [142] = 142,
  [143] = 111,
  [144] = 144,
  [145] = 145,
  [146] = 126,
  [147] = 147,
  [148] = 148,
  [149] = 118,
  [150] = 150,
  [151] = 151,
  [152] = 126,
  [153] = 109,
  [154] = 105,
  [155] = 134,
  [156] = 127,
  [157] = 109,
  [158] = 105,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(238);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '+') ADVANCE(319);
      if (lookahead == ',') ADVANCE(240);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '=') ADVANCE(283);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '|') ADVANCE(300);
      if (lookahead == '}') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(235)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(343);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(343);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == 'U') ADVANCE(234);
      if (lookahead == 'u') ADVANCE(229);
      if (lookahead == 'x') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '\'' ||
          lookahead == '?' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(302);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '=') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '+') ADVANCE(17);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '=') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(116);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '$') ADVANCE(291);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '|') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '$') ADVANCE(291);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == '|') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '$') ADVANCE(291);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(288);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '|') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '$') ADVANCE(291);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(288);
      if (lookahead == '|') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '+') ADVANCE(318);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '{') ADVANCE(252);
      if (lookahead == '|') ADVANCE(300);
      if (lookahead == '}') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == '|') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(288);
      if (lookahead == '|') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(131);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '+') ADVANCE(318);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '|') ADVANCE(300);
      if (lookahead == '}') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(325);
      if (lookahead == 'E') ADVANCE(314);
      if (lookahead == 'M') ADVANCE(315);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == 'P') ADVANCE(321);
      if (lookahead == 'S') ADVANCE(323);
      if (lookahead == 'b') ADVANCE(312);
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(281);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(282);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(91);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(103);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(106);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == 'R') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'U') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(25);
      if (lookahead == 'Y') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(265);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(245);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'G') ADVANCE(258);
      END_STATE();
    case 44:
      if (lookahead == 'G') ADVANCE(88);
      END_STATE();
    case 45:
      if (lookahead == 'H') ADVANCE(242);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(112);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'K') ADVANCE(246);
      END_STATE();
    case 51:
      if (lookahead == 'L') ADVANCE(268);
      END_STATE();
    case 52:
      if (lookahead == 'L') ADVANCE(243);
      END_STATE();
    case 53:
      if (lookahead == 'L') ADVANCE(255);
      END_STATE();
    case 54:
      if (lookahead == 'L') ADVANCE(266);
      END_STATE();
    case 55:
      if (lookahead == 'L') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'L') ADVANCE(101);
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(23);
      END_STATE();
    case 58:
      if (lookahead == 'M') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'M') ADVANCE(261);
      END_STATE();
    case 60:
      if (lookahead == 'M') ADVANCE(247);
      END_STATE();
    case 61:
      if (lookahead == 'M') ADVANCE(55);
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 'M') ADVANCE(35);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(267);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(241);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(50);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(110);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 69:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 70:
      if (lookahead == 'N') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 72:
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 73:
      if (lookahead == 'O') ADVANCE(269);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(70);
      END_STATE();
    case 75:
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 76:
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead == 'R') ADVANCE(72);
      END_STATE();
    case 77:
      if (lookahead == 'O') ADVANCE(90);
      END_STATE();
    case 78:
      if (lookahead == 'O') ADVANCE(64);
      END_STATE();
    case 79:
      if (lookahead == 'O') ADVANCE(67);
      END_STATE();
    case 80:
      if (lookahead == 'P') ADVANCE(264);
      END_STATE();
    case 81:
      if (lookahead == 'P') ADVANCE(22);
      END_STATE();
    case 82:
      if (lookahead == 'P') ADVANCE(77);
      END_STATE();
    case 83:
      if (lookahead == 'P') ADVANCE(107);
      if (lookahead == 'W') ADVANCE(68);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(251);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(263);
      END_STATE();
    case 86:
      if (lookahead == 'R') ADVANCE(249);
      END_STATE();
    case 87:
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 90:
      if (lookahead == 'R') ADVANCE(100);
      END_STATE();
    case 91:
      if (lookahead == 'S') ADVANCE(113);
      END_STATE();
    case 92:
      if (lookahead == 'S') ADVANCE(271);
      END_STATE();
    case 93:
      if (lookahead == 'S') ADVANCE(109);
      END_STATE();
    case 94:
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 95:
      if (lookahead == 'S') ADVANCE(98);
      END_STATE();
    case 96:
      if (lookahead == 'S') ADVANCE(105);
      END_STATE();
    case 97:
      if (lookahead == 'T') ADVANCE(260);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(257);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(270);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(262);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 108:
      if (lookahead == 'U') ADVANCE(80);
      END_STATE();
    case 109:
      if (lookahead == 'U') ADVANCE(56);
      END_STATE();
    case 110:
      if (lookahead == 'V') ADVANCE(256);
      END_STATE();
    case 111:
      if (lookahead == 'V') ADVANCE(81);
      END_STATE();
    case 112:
      if (lookahead == 'V') ADVANCE(41);
      END_STATE();
    case 113:
      if (lookahead == 'Y') ADVANCE(96);
      END_STATE();
    case 114:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'p') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(114)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 115:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(115)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 116:
      if (lookahead == ']') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[') ADVANCE(116);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(274);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(140);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(329);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 142:
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 143:
      if (lookahead == 'h') ADVANCE(328);
      END_STATE();
    case 144:
      if (lookahead == 'h') ADVANCE(272);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 154:
      if (lookahead == 'j') ADVANCE(181);
      END_STATE();
    case 155:
      if (lookahead == 'k') ADVANCE(199);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(274);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(272);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(128);
      if (lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(338);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 213:
      if (lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 214:
      if (lookahead == 'v') ADVANCE(332);
      END_STATE();
    case 215:
      if (lookahead == 'v') ADVANCE(139);
      END_STATE();
    case 216:
      if (lookahead == 'y') ADVANCE(198);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(279);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(278);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(217);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(218);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 235:
      if (eof) ADVANCE(238);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '+') ADVANCE(319);
      if (lookahead == ',') ADVANCE(240);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '=') ADVANCE(283);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == '|') ADVANCE(300);
      if (lookahead == '}') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(235)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 236:
      if (eof) ADVANCE(238);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '+') ADVANCE(318);
      if (lookahead == '0') ADVANCE(219);
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'D') ADVANCE(31);
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead == 'G') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(58);
      if (lookahead == 'K') ADVANCE(36);
      if (lookahead == 'L') ADVANCE(18);
      if (lookahead == 'M') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(83);
      if (lookahead == 'P') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'b') ADVANCE(211);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(150);
      if (lookahead == '}') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(237)
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(220);
      END_STATE();
    case 237:
      if (eof) ADVANCE(238);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '+') ADVANCE(318);
      if (lookahead == '0') ADVANCE(219);
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'D') ADVANCE(31);
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead == 'G') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(58);
      if (lookahead == 'K') ADVANCE(36);
      if (lookahead == 'L') ADVANCE(18);
      if (lookahead == 'M') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(83);
      if (lookahead == 'P') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(32);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'b') ADVANCE(211);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(237)
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(220);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_rules_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_ACTION);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DEVPATH);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_KERNEL);
      if (lookahead == 'S') ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_KERNELS);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_NAME);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_SYMLINK);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SUBSYSTEM);
      if (lookahead == 'S') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_SUBSYSTEMS);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DRIVER);
      if (lookahead == 'S') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DRIVERS);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_ATTR);
      if (lookahead == 'S') ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_ATTRS);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_SYSCTL);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_ENV);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_CONST);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_TAG);
      if (lookahead == 'S') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_TAGS);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_TEST);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_PROGRAM);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_RESULT);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_OWNER);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_GROUP);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_MODE);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_SECLABEL);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LABEL);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_GOTO);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_IMPORT);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_system_const);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_run_type);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_import_type);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_env_var_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_seclabel);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_octal);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_octal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_match_op);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_assignment_op);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_assignment_op);
      if (lookahead == '=') ADVANCE(281);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__content_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == '\n') ADVANCE(343);
      if (lookahead == '"') ADVANCE(297);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == '\n') ADVANCE(343);
      if (lookahead == 'U') ADVANCE(234);
      if (lookahead == 'u') ADVANCE(229);
      if (lookahead == 'x') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (lookahead == '\'' ||
          lookahead == '?' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(302);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == '!') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(116);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(131);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == '$') ADVANCE(291);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == '|') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(287);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == '$') ADVANCE(291);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(288);
      if (lookahead == '|') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(287);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == '%') ADVANCE(325);
      if (lookahead == 'E') ADVANCE(314);
      if (lookahead == 'M') ADVANCE(315);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == 'P') ADVANCE(321);
      if (lookahead == 'S') ADVANCE(323);
      if (lookahead == 'b') ADVANCE(312);
      if (lookahead == 'c') ADVANCE(317);
      if (lookahead == 'k') ADVANCE(309);
      if (lookahead == 'm') ADVANCE(316);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == '|') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(287);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '?') ADVANCE(299);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(288);
      if (lookahead == '|') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(287);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_pattern_token1);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_c_escape_token1);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_c_escape_token2);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_c_escape_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_c_escape_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_c_escape_token3);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_c_escape_token4);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_c_escape_token5);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_PERCENTk);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_PERCENTn);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_PERCENTp);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_PERCENTb);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_PERCENTs);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_PERCENTE);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_PERCENTM);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_PERCENTm);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_PERCENTc);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(282);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_PERCENTP);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_PERCENTr);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_PERCENTS);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_PERCENTN);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_DOLLARkernel);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DOLLARnumber);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DOLLARdevpath);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DOLLARid);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DOLLARdriver);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DOLLARattr);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_DOLLARenv);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DOLLARmajor);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DOLLARminor);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DOLLARresult);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DOLLARparent);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DOLLARname);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DOLLARlinks);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_DOLLARroot);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_DOLLARsys);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DOLLARdevnode);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_linebreak);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(344);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 236},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 236},
  [30] = {.lex_state = 236},
  [31] = {.lex_state = 236},
  [32] = {.lex_state = 236},
  [33] = {.lex_state = 236},
  [34] = {.lex_state = 236},
  [35] = {.lex_state = 236},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 236},
  [60] = {.lex_state = 236},
  [61] = {.lex_state = 236},
  [62] = {.lex_state = 236},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 236},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 236},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 236},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 236},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 236},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 236},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 236},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 236},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 114},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 114},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 236},
  [139] = {.lex_state = 236},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 236},
  [144] = {.lex_state = 236},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 114},
  [147] = {.lex_state = 114},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 114},
  [150] = {.lex_state = 115},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 114},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_rules_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_attribute_token1] = ACTIONS(1),
    [sym_match_op] = ACTIONS(1),
    [sym_assignment_op] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym_pattern_token1] = ACTIONS(1),
    [aux_sym_c_escape_token1] = ACTIONS(1),
    [aux_sym_c_escape_token2] = ACTIONS(1),
    [aux_sym_c_escape_token3] = ACTIONS(1),
    [aux_sym_c_escape_token4] = ACTIONS(1),
    [aux_sym_c_escape_token5] = ACTIONS(1),
    [anon_sym_PERCENTk] = ACTIONS(1),
    [anon_sym_PERCENTn] = ACTIONS(1),
    [anon_sym_PERCENTp] = ACTIONS(1),
    [anon_sym_PERCENTb] = ACTIONS(1),
    [anon_sym_PERCENTs] = ACTIONS(1),
    [anon_sym_PERCENTE] = ACTIONS(1),
    [anon_sym_PERCENTM] = ACTIONS(1),
    [anon_sym_PERCENTm] = ACTIONS(1),
    [anon_sym_PERCENTc] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_RBRACE2] = ACTIONS(1),
    [anon_sym_PERCENTP] = ACTIONS(1),
    [anon_sym_PERCENTr] = ACTIONS(1),
    [anon_sym_PERCENTS] = ACTIONS(1),
    [anon_sym_PERCENTN] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_DOLLARkernel] = ACTIONS(1),
    [anon_sym_DOLLARnumber] = ACTIONS(1),
    [anon_sym_DOLLARdevpath] = ACTIONS(1),
    [anon_sym_DOLLARid] = ACTIONS(1),
    [anon_sym_DOLLARdriver] = ACTIONS(1),
    [anon_sym_DOLLARattr] = ACTIONS(1),
    [anon_sym_DOLLARenv] = ACTIONS(1),
    [anon_sym_DOLLARmajor] = ACTIONS(1),
    [anon_sym_DOLLARminor] = ACTIONS(1),
    [anon_sym_DOLLARresult] = ACTIONS(1),
    [anon_sym_DOLLARparent] = ACTIONS(1),
    [anon_sym_DOLLARname] = ACTIONS(1),
    [anon_sym_DOLLARlinks] = ACTIONS(1),
    [anon_sym_DOLLARroot] = ACTIONS(1),
    [anon_sym_DOLLARsys] = ACTIONS(1),
    [anon_sym_DOLLARdevnode] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [sym_linebreak] = ACTIONS(3),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_rules] = STATE(117),
    [sym_rule] = STATE(119),
    [sym_match] = STATE(114),
    [sym_assignment] = STATE(68),
    [aux_sym_rules_repeat1] = STATE(29),
    [aux_sym_rule_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_rules_token1] = ACTIONS(7),
    [anon_sym_ACTION] = ACTIONS(9),
    [anon_sym_DEVPATH] = ACTIONS(9),
    [anon_sym_KERNEL] = ACTIONS(11),
    [anon_sym_KERNELS] = ACTIONS(9),
    [anon_sym_NAME] = ACTIONS(13),
    [anon_sym_SYMLINK] = ACTIONS(13),
    [anon_sym_SUBSYSTEM] = ACTIONS(11),
    [anon_sym_SUBSYSTEMS] = ACTIONS(9),
    [anon_sym_DRIVER] = ACTIONS(11),
    [anon_sym_DRIVERS] = ACTIONS(9),
    [anon_sym_ATTR] = ACTIONS(15),
    [anon_sym_ATTRS] = ACTIONS(17),
    [anon_sym_SYSCTL] = ACTIONS(19),
    [anon_sym_ENV] = ACTIONS(21),
    [anon_sym_CONST] = ACTIONS(23),
    [anon_sym_TAG] = ACTIONS(25),
    [anon_sym_TAGS] = ACTIONS(9),
    [anon_sym_TEST] = ACTIONS(27),
    [anon_sym_PROGRAM] = ACTIONS(29),
    [anon_sym_RESULT] = ACTIONS(9),
    [anon_sym_OWNER] = ACTIONS(31),
    [anon_sym_GROUP] = ACTIONS(31),
    [anon_sym_MODE] = ACTIONS(31),
    [anon_sym_SECLABEL] = ACTIONS(33),
    [anon_sym_RUN] = ACTIONS(35),
    [anon_sym_LABEL] = ACTIONS(37),
    [anon_sym_GOTO] = ACTIONS(37),
    [anon_sym_IMPORT] = ACTIONS(39),
    [anon_sym_OPTIONS] = ACTIONS(37),
    [sym_linebreak] = ACTIONS(3),
    [sym_comment] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(43), 1,
      anon_sym_DQUOTE2,
    ACTIONS(45), 1,
      aux_sym__content_token1,
    ACTIONS(53), 1,
      anon_sym_PERCENTs,
    ACTIONS(55), 1,
      anon_sym_PERCENTE,
    ACTIONS(57), 1,
      anon_sym_PERCENTc,
    ACTIONS(61), 1,
      anon_sym_DOLLARattr,
    ACTIONS(63), 1,
      anon_sym_DOLLARenv,
    ACTIONS(65), 1,
      anon_sym_DOLLARresult,
    ACTIONS(67), 1,
      sym_linebreak,
    STATE(3), 1,
      aux_sym__sub_c_content,
    ACTIONS(47), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    STATE(9), 4,
      sym_pattern,
      sym_c_escape,
      sym_fmt_sub,
      sym_var_sub,
    ACTIONS(49), 5,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
    ACTIONS(51), 11,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(59), 14,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [79] = 15,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(69), 1,
      anon_sym_DQUOTE2,
    ACTIONS(71), 1,
      aux_sym__content_token1,
    ACTIONS(83), 1,
      anon_sym_PERCENTs,
    ACTIONS(86), 1,
      anon_sym_PERCENTE,
    ACTIONS(89), 1,
      anon_sym_PERCENTc,
    ACTIONS(95), 1,
      anon_sym_DOLLARattr,
    ACTIONS(98), 1,
      anon_sym_DOLLARenv,
    ACTIONS(101), 1,
      anon_sym_DOLLARresult,
    STATE(3), 1,
      aux_sym__sub_c_content,
    ACTIONS(74), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    STATE(9), 4,
      sym_pattern,
      sym_c_escape,
      sym_fmt_sub,
      sym_var_sub,
    ACTIONS(77), 5,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
    ACTIONS(80), 11,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(92), 14,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [158] = 15,
    ACTIONS(45), 1,
      aux_sym__content_token1,
    ACTIONS(53), 1,
      anon_sym_PERCENTs,
    ACTIONS(55), 1,
      anon_sym_PERCENTE,
    ACTIONS(57), 1,
      anon_sym_PERCENTc,
    ACTIONS(61), 1,
      anon_sym_DOLLARattr,
    ACTIONS(63), 1,
      anon_sym_DOLLARenv,
    ACTIONS(65), 1,
      anon_sym_DOLLARresult,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(104), 1,
      anon_sym_DQUOTE2,
    STATE(2), 1,
      aux_sym__sub_c_content,
    ACTIONS(47), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    STATE(9), 4,
      sym_pattern,
      sym_c_escape,
      sym_fmt_sub,
      sym_var_sub,
    ACTIONS(49), 5,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
    ACTIONS(51), 11,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(59), 14,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [237] = 4,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(106), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE2,
    ACTIONS(110), 41,
      aux_sym__content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [290] = 4,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_DQUOTE2,
    ACTIONS(116), 41,
      aux_sym__content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [343] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(118), 1,
      anon_sym_DQUOTE2,
    ACTIONS(120), 41,
      aux_sym__content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [393] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(122), 1,
      anon_sym_DQUOTE2,
    ACTIONS(124), 41,
      aux_sym__content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [443] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(126), 1,
      anon_sym_DQUOTE2,
    ACTIONS(128), 41,
      aux_sym__content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [493] = 14,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(104), 1,
      anon_sym_DQUOTE2,
    ACTIONS(136), 1,
      anon_sym_PERCENTs,
    ACTIONS(138), 1,
      anon_sym_PERCENTE,
    ACTIONS(140), 1,
      anon_sym_PERCENTc,
    ACTIONS(144), 1,
      anon_sym_DOLLARattr,
    ACTIONS(146), 1,
      anon_sym_DOLLARenv,
    ACTIONS(148), 1,
      anon_sym_DOLLARresult,
    STATE(16), 1,
      aux_sym__sub_content,
    ACTIONS(130), 2,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(28), 3,
      sym_pattern,
      sym_fmt_sub,
      sym_var_sub,
    ACTIONS(132), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(134), 11,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(142), 14,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [565] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(150), 1,
      anon_sym_DQUOTE2,
    ACTIONS(152), 41,
      aux_sym__content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [615] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(154), 1,
      anon_sym_DQUOTE2,
    ACTIONS(156), 41,
      aux_sym__content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [665] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(108), 1,
      anon_sym_DQUOTE2,
    ACTIONS(110), 41,
      aux_sym__content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [715] = 14,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(136), 1,
      anon_sym_PERCENTs,
    ACTIONS(138), 1,
      anon_sym_PERCENTE,
    ACTIONS(140), 1,
      anon_sym_PERCENTc,
    ACTIONS(144), 1,
      anon_sym_DOLLARattr,
    ACTIONS(146), 1,
      anon_sym_DOLLARenv,
    ACTIONS(148), 1,
      anon_sym_DOLLARresult,
    ACTIONS(158), 1,
      anon_sym_DQUOTE2,
    STATE(10), 1,
      aux_sym__sub_content,
    ACTIONS(130), 2,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(28), 3,
      sym_pattern,
      sym_fmt_sub,
      sym_var_sub,
    ACTIONS(132), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(134), 11,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(142), 14,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [787] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(114), 1,
      anon_sym_DQUOTE2,
    ACTIONS(116), 41,
      aux_sym__content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [837] = 14,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(160), 1,
      anon_sym_DQUOTE2,
    ACTIONS(171), 1,
      anon_sym_PERCENTs,
    ACTIONS(174), 1,
      anon_sym_PERCENTE,
    ACTIONS(177), 1,
      anon_sym_PERCENTc,
    ACTIONS(183), 1,
      anon_sym_DOLLARattr,
    ACTIONS(186), 1,
      anon_sym_DOLLARenv,
    ACTIONS(189), 1,
      anon_sym_DOLLARresult,
    STATE(16), 1,
      aux_sym__sub_content,
    ACTIONS(162), 2,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(28), 3,
      sym_pattern,
      sym_fmt_sub,
      sym_var_sub,
    ACTIONS(165), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(168), 11,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(180), 14,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [909] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(192), 1,
      anon_sym_DQUOTE2,
    ACTIONS(194), 41,
      aux_sym__content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [959] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(196), 1,
      anon_sym_DQUOTE2,
    ACTIONS(198), 41,
      aux_sym__content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [1009] = 4,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(108), 1,
      anon_sym_DQUOTE2,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 37,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [1058] = 4,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(114), 1,
      anon_sym_DQUOTE2,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 37,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [1107] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(196), 1,
      anon_sym_DQUOTE2,
    ACTIONS(198), 37,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [1153] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(154), 1,
      anon_sym_DQUOTE2,
    ACTIONS(156), 37,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [1199] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(118), 1,
      anon_sym_DQUOTE2,
    ACTIONS(120), 37,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [1245] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(122), 1,
      anon_sym_DQUOTE2,
    ACTIONS(124), 37,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [1291] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(114), 1,
      anon_sym_DQUOTE2,
    ACTIONS(116), 37,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [1337] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(192), 1,
      anon_sym_DQUOTE2,
    ACTIONS(194), 37,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [1383] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(108), 1,
      anon_sym_DQUOTE2,
    ACTIONS(110), 37,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [1429] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(204), 1,
      anon_sym_DQUOTE2,
    ACTIONS(206), 37,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLARkernel,
      anon_sym_DOLLARnumber,
      anon_sym_DOLLARdevpath,
      anon_sym_DOLLARid,
      anon_sym_DOLLARdriver,
      anon_sym_DOLLARattr,
      anon_sym_DOLLARenv,
      anon_sym_DOLLARmajor,
      anon_sym_DOLLARminor,
      anon_sym_DOLLARresult,
      anon_sym_DOLLARparent,
      anon_sym_DOLLARname,
      anon_sym_DOLLARlinks,
      anon_sym_DOLLARroot,
      anon_sym_DOLLARsys,
      anon_sym_DOLLARdevnode,
      anon_sym_DOLLAR_DOLLAR,
  [1475] = 25,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(15), 1,
      anon_sym_ATTR,
    ACTIONS(17), 1,
      anon_sym_ATTRS,
    ACTIONS(19), 1,
      anon_sym_SYSCTL,
    ACTIONS(21), 1,
      anon_sym_ENV,
    ACTIONS(23), 1,
      anon_sym_CONST,
    ACTIONS(25), 1,
      anon_sym_TAG,
    ACTIONS(27), 1,
      anon_sym_TEST,
    ACTIONS(29), 1,
      anon_sym_PROGRAM,
    ACTIONS(33), 1,
      anon_sym_SECLABEL,
    ACTIONS(35), 1,
      anon_sym_RUN,
    ACTIONS(39), 1,
      anon_sym_IMPORT,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 1,
      aux_sym_rules_token1,
    STATE(30), 1,
      aux_sym_rules_repeat1,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    STATE(68), 1,
      sym_assignment,
    STATE(114), 1,
      sym_match,
    STATE(119), 1,
      sym_rule,
    ACTIONS(13), 2,
      anon_sym_NAME,
      anon_sym_SYMLINK,
    ACTIONS(11), 3,
      anon_sym_KERNEL,
      anon_sym_SUBSYSTEM,
      anon_sym_DRIVER,
    ACTIONS(31), 3,
      anon_sym_OWNER,
      anon_sym_GROUP,
      anon_sym_MODE,
    ACTIONS(37), 3,
      anon_sym_LABEL,
      anon_sym_GOTO,
      anon_sym_OPTIONS,
    ACTIONS(9), 7,
      anon_sym_ACTION,
      anon_sym_DEVPATH,
      anon_sym_KERNELS,
      anon_sym_SUBSYSTEMS,
      anon_sym_DRIVERS,
      anon_sym_TAGS,
      anon_sym_RESULT,
  [1564] = 25,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      aux_sym_rules_token1,
    ACTIONS(226), 1,
      anon_sym_ATTR,
    ACTIONS(229), 1,
      anon_sym_ATTRS,
    ACTIONS(232), 1,
      anon_sym_SYSCTL,
    ACTIONS(235), 1,
      anon_sym_ENV,
    ACTIONS(238), 1,
      anon_sym_CONST,
    ACTIONS(241), 1,
      anon_sym_TAG,
    ACTIONS(244), 1,
      anon_sym_TEST,
    ACTIONS(247), 1,
      anon_sym_PROGRAM,
    ACTIONS(253), 1,
      anon_sym_SECLABEL,
    ACTIONS(256), 1,
      anon_sym_RUN,
    ACTIONS(262), 1,
      anon_sym_IMPORT,
    ACTIONS(265), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_rules_repeat1,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    STATE(68), 1,
      sym_assignment,
    STATE(114), 1,
      sym_match,
    STATE(119), 1,
      sym_rule,
    ACTIONS(223), 2,
      anon_sym_NAME,
      anon_sym_SYMLINK,
    ACTIONS(220), 3,
      anon_sym_KERNEL,
      anon_sym_SUBSYSTEM,
      anon_sym_DRIVER,
    ACTIONS(250), 3,
      anon_sym_OWNER,
      anon_sym_GROUP,
      anon_sym_MODE,
    ACTIONS(259), 3,
      anon_sym_LABEL,
      anon_sym_GOTO,
      anon_sym_OPTIONS,
    ACTIONS(217), 7,
      anon_sym_ACTION,
      anon_sym_DEVPATH,
      anon_sym_KERNELS,
      anon_sym_SUBSYSTEMS,
      anon_sym_DRIVERS,
      anon_sym_TAGS,
      anon_sym_RESULT,
  [1653] = 20,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(15), 1,
      anon_sym_ATTR,
    ACTIONS(17), 1,
      anon_sym_ATTRS,
    ACTIONS(19), 1,
      anon_sym_SYSCTL,
    ACTIONS(21), 1,
      anon_sym_ENV,
    ACTIONS(23), 1,
      anon_sym_CONST,
    ACTIONS(25), 1,
      anon_sym_TAG,
    ACTIONS(27), 1,
      anon_sym_TEST,
    ACTIONS(29), 1,
      anon_sym_PROGRAM,
    ACTIONS(33), 1,
      anon_sym_SECLABEL,
    ACTIONS(35), 1,
      anon_sym_RUN,
    ACTIONS(39), 1,
      anon_sym_IMPORT,
    STATE(34), 1,
      aux_sym_rule_repeat1,
    STATE(70), 1,
      sym_assignment,
    STATE(114), 1,
      sym_match,
    ACTIONS(13), 2,
      anon_sym_NAME,
      anon_sym_SYMLINK,
    ACTIONS(11), 3,
      anon_sym_KERNEL,
      anon_sym_SUBSYSTEM,
      anon_sym_DRIVER,
    ACTIONS(31), 3,
      anon_sym_OWNER,
      anon_sym_GROUP,
      anon_sym_MODE,
    ACTIONS(37), 3,
      anon_sym_LABEL,
      anon_sym_GOTO,
      anon_sym_OPTIONS,
    ACTIONS(9), 7,
      anon_sym_ACTION,
      anon_sym_DEVPATH,
      anon_sym_KERNELS,
      anon_sym_SUBSYSTEMS,
      anon_sym_DRIVERS,
      anon_sym_TAGS,
      anon_sym_RESULT,
  [1727] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(268), 5,
      anon_sym_KERNEL,
      anon_sym_SUBSYSTEM,
      anon_sym_DRIVER,
      anon_sym_ATTR,
      anon_sym_TAG,
    ACTIONS(212), 27,
      ts_builtin_sym_end,
      aux_sym_rules_token1,
      anon_sym_ACTION,
      anon_sym_DEVPATH,
      anon_sym_KERNELS,
      anon_sym_NAME,
      anon_sym_SYMLINK,
      anon_sym_SUBSYSTEMS,
      anon_sym_DRIVERS,
      anon_sym_ATTRS,
      anon_sym_SYSCTL,
      anon_sym_ENV,
      anon_sym_CONST,
      anon_sym_TAGS,
      anon_sym_TEST,
      anon_sym_PROGRAM,
      anon_sym_RESULT,
      anon_sym_OWNER,
      anon_sym_GROUP,
      anon_sym_MODE,
      anon_sym_SECLABEL,
      anon_sym_RUN,
      anon_sym_LABEL,
      anon_sym_GOTO,
      anon_sym_IMPORT,
      anon_sym_OPTIONS,
      sym_comment,
  [1767] = 18,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(15), 1,
      anon_sym_ATTR,
    ACTIONS(17), 1,
      anon_sym_ATTRS,
    ACTIONS(19), 1,
      anon_sym_SYSCTL,
    ACTIONS(21), 1,
      anon_sym_ENV,
    ACTIONS(23), 1,
      anon_sym_CONST,
    ACTIONS(25), 1,
      anon_sym_TAG,
    ACTIONS(27), 1,
      anon_sym_TEST,
    ACTIONS(29), 1,
      anon_sym_PROGRAM,
    ACTIONS(33), 1,
      anon_sym_SECLABEL,
    ACTIONS(35), 1,
      anon_sym_RUN,
    ACTIONS(39), 1,
      anon_sym_IMPORT,
    ACTIONS(13), 2,
      anon_sym_NAME,
      anon_sym_SYMLINK,
    STATE(73), 2,
      sym_match,
      sym_assignment,
    ACTIONS(11), 3,
      anon_sym_KERNEL,
      anon_sym_SUBSYSTEM,
      anon_sym_DRIVER,
    ACTIONS(31), 3,
      anon_sym_OWNER,
      anon_sym_GROUP,
      anon_sym_MODE,
    ACTIONS(37), 3,
      anon_sym_LABEL,
      anon_sym_GOTO,
      anon_sym_OPTIONS,
    ACTIONS(9), 7,
      anon_sym_ACTION,
      anon_sym_DEVPATH,
      anon_sym_KERNELS,
      anon_sym_SUBSYSTEMS,
      anon_sym_DRIVERS,
      anon_sym_TAGS,
      anon_sym_RESULT,
  [1836] = 14,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(279), 1,
      anon_sym_ATTR,
    ACTIONS(282), 1,
      anon_sym_ATTRS,
    ACTIONS(285), 1,
      anon_sym_SYSCTL,
    ACTIONS(288), 1,
      anon_sym_ENV,
    ACTIONS(291), 1,
      anon_sym_CONST,
    ACTIONS(294), 1,
      anon_sym_TEST,
    ACTIONS(297), 1,
      anon_sym_PROGRAM,
    STATE(34), 1,
      aux_sym_rule_repeat1,
    STATE(114), 1,
      sym_match,
    ACTIONS(276), 2,
      anon_sym_NAME,
      anon_sym_SYMLINK,
    ACTIONS(273), 4,
      anon_sym_KERNEL,
      anon_sym_SUBSYSTEM,
      anon_sym_DRIVER,
      anon_sym_TAG,
    ACTIONS(270), 7,
      anon_sym_ACTION,
      anon_sym_DEVPATH,
      anon_sym_KERNELS,
      anon_sym_SUBSYSTEMS,
      anon_sym_DRIVERS,
      anon_sym_TAGS,
      anon_sym_RESULT,
    ACTIONS(300), 9,
      anon_sym_OWNER,
      anon_sym_GROUP,
      anon_sym_MODE,
      anon_sym_SECLABEL,
      anon_sym_RUN,
      anon_sym_LABEL,
      anon_sym_GOTO,
      anon_sym_IMPORT,
      anon_sym_OPTIONS,
  [1897] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(302), 5,
      anon_sym_KERNEL,
      anon_sym_SUBSYSTEM,
      anon_sym_DRIVER,
      anon_sym_ATTR,
      anon_sym_TAG,
    ACTIONS(300), 24,
      anon_sym_ACTION,
      anon_sym_DEVPATH,
      anon_sym_KERNELS,
      anon_sym_NAME,
      anon_sym_SYMLINK,
      anon_sym_SUBSYSTEMS,
      anon_sym_DRIVERS,
      anon_sym_ATTRS,
      anon_sym_SYSCTL,
      anon_sym_ENV,
      anon_sym_CONST,
      anon_sym_TAGS,
      anon_sym_TEST,
      anon_sym_PROGRAM,
      anon_sym_RESULT,
      anon_sym_OWNER,
      anon_sym_GROUP,
      anon_sym_MODE,
      anon_sym_SECLABEL,
      anon_sym_RUN,
      anon_sym_LABEL,
      anon_sym_GOTO,
      anon_sym_IMPORT,
      anon_sym_OPTIONS,
  [1934] = 9,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(304), 1,
      aux_sym_attribute_token1,
    ACTIONS(310), 1,
      anon_sym_PERCENTs,
    ACTIONS(312), 1,
      anon_sym_PERCENTE,
    ACTIONS(314), 1,
      anon_sym_PERCENTc,
    STATE(108), 1,
      sym_attribute,
    STATE(37), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(306), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(308), 11,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
  [1977] = 9,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(310), 1,
      anon_sym_PERCENTs,
    ACTIONS(312), 1,
      anon_sym_PERCENTE,
    ACTIONS(314), 1,
      anon_sym_PERCENTc,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 1,
      aux_sym_attribute_token1,
    STATE(42), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(306), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(308), 11,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
  [2020] = 9,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(304), 1,
      aux_sym_attribute_token1,
    ACTIONS(310), 1,
      anon_sym_PERCENTs,
    ACTIONS(312), 1,
      anon_sym_PERCENTE,
    ACTIONS(314), 1,
      anon_sym_PERCENTc,
    STATE(141), 1,
      sym_attribute,
    STATE(37), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(306), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(308), 11,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
  [2063] = 9,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(304), 1,
      aux_sym_attribute_token1,
    ACTIONS(310), 1,
      anon_sym_PERCENTs,
    ACTIONS(312), 1,
      anon_sym_PERCENTE,
    ACTIONS(314), 1,
      anon_sym_PERCENTc,
    STATE(137), 1,
      sym_attribute,
    STATE(37), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(306), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(308), 11,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
  [2106] = 9,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(304), 1,
      aux_sym_attribute_token1,
    ACTIONS(310), 1,
      anon_sym_PERCENTs,
    ACTIONS(312), 1,
      anon_sym_PERCENTE,
    ACTIONS(314), 1,
      anon_sym_PERCENTc,
    STATE(135), 1,
      sym_attribute,
    STATE(37), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(306), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(308), 11,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
  [2149] = 9,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(304), 1,
      aux_sym_attribute_token1,
    ACTIONS(310), 1,
      anon_sym_PERCENTs,
    ACTIONS(312), 1,
      anon_sym_PERCENTE,
    ACTIONS(314), 1,
      anon_sym_PERCENTc,
    STATE(129), 1,
      sym_attribute,
    STATE(37), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(306), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(308), 11,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
  [2192] = 9,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    ACTIONS(322), 1,
      aux_sym_attribute_token1,
    ACTIONS(331), 1,
      anon_sym_PERCENTs,
    ACTIONS(334), 1,
      anon_sym_PERCENTE,
    ACTIONS(337), 1,
      anon_sym_PERCENTc,
    STATE(42), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(325), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(328), 11,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
  [2235] = 9,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(304), 1,
      aux_sym_attribute_token1,
    ACTIONS(310), 1,
      anon_sym_PERCENTs,
    ACTIONS(312), 1,
      anon_sym_PERCENTE,
    ACTIONS(314), 1,
      anon_sym_PERCENTc,
    STATE(151), 1,
      sym_attribute,
    STATE(37), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(306), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(308), 11,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
  [2278] = 9,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(304), 1,
      aux_sym_attribute_token1,
    ACTIONS(310), 1,
      anon_sym_PERCENTs,
    ACTIONS(312), 1,
      anon_sym_PERCENTE,
    ACTIONS(314), 1,
      anon_sym_PERCENTc,
    STATE(106), 1,
      sym_attribute,
    STATE(37), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(306), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(308), 11,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
  [2321] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(340), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 20,
      anon_sym_RBRACE,
      aux_sym_attribute_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
  [2350] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(196), 20,
      anon_sym_RBRACE,
      aux_sym_attribute_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
  [2376] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(192), 20,
      anon_sym_RBRACE,
      aux_sym_attribute_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
  [2402] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(154), 20,
      anon_sym_RBRACE,
      aux_sym_attribute_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
  [2428] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(114), 20,
      anon_sym_RBRACE,
      aux_sym_attribute_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      anon_sym_PERCENTk,
      anon_sym_PERCENTn,
      anon_sym_PERCENTp,
      anon_sym_PERCENTb,
      anon_sym_PERCENTs,
      anon_sym_PERCENTE,
      anon_sym_PERCENTM,
      anon_sym_PERCENTm,
      anon_sym_PERCENTc,
      anon_sym_PERCENTP,
      anon_sym_PERCENTr,
      anon_sym_PERCENTS,
      anon_sym_PERCENTN,
      anon_sym_PERCENT_PERCENT,
  [2454] = 6,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(342), 1,
      anon_sym_DQUOTE2,
    ACTIONS(344), 1,
      aux_sym__content_token1,
    STATE(51), 3,
      aux_sym__c_content,
      sym_pattern,
      sym_c_escape,
    ACTIONS(346), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(348), 5,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
  [2482] = 6,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(350), 1,
      anon_sym_DQUOTE2,
    ACTIONS(352), 1,
      aux_sym__content_token1,
    STATE(52), 3,
      aux_sym__c_content,
      sym_pattern,
      sym_c_escape,
    ACTIONS(346), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(348), 5,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
  [2510] = 6,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(354), 1,
      anon_sym_DQUOTE2,
    ACTIONS(356), 1,
      aux_sym__content_token1,
    STATE(52), 3,
      aux_sym__c_content,
      sym_pattern,
      sym_c_escape,
    ACTIONS(359), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(362), 5,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
  [2538] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(154), 1,
      anon_sym_DQUOTE2,
    ACTIONS(156), 10,
      aux_sym__content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
  [2557] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(150), 1,
      anon_sym_DQUOTE2,
    ACTIONS(152), 10,
      aux_sym__content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
  [2576] = 5,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(365), 1,
      anon_sym_DQUOTE2,
    ACTIONS(367), 2,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(55), 2,
      aux_sym__content,
      sym_pattern,
    ACTIONS(370), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
  [2597] = 5,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(342), 1,
      anon_sym_DQUOTE2,
    ACTIONS(373), 2,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(55), 2,
      aux_sym__content,
      sym_pattern,
    ACTIONS(375), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
  [2618] = 5,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(377), 1,
      anon_sym_DQUOTE2,
    ACTIONS(379), 2,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(56), 2,
      aux_sym__content,
      sym_pattern,
    ACTIONS(375), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
  [2639] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(154), 1,
      anon_sym_DQUOTE2,
    ACTIONS(156), 6,
      aux_sym__content_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
  [2654] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      anon_sym_e,
    STATE(97), 1,
      sym_value,
  [2667] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      anon_sym_e,
    STATE(94), 1,
      sym_value,
  [2680] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(387), 1,
      anon_sym_e,
    STATE(94), 1,
      sym__sub_value,
  [2693] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(387), 1,
      anon_sym_e,
    STATE(98), 1,
      sym__sub_value,
  [2706] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(389), 1,
      aux_sym_rules_token1,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_rule_repeat2,
  [2719] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      anon_sym_e,
    STATE(96), 1,
      sym_value,
  [2732] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(393), 1,
      aux_sym_rules_token1,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_rule_repeat2,
  [2745] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      aux_sym_rules_token1,
    STATE(65), 1,
      aux_sym_rule_repeat2,
  [2758] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(387), 1,
      anon_sym_e,
    STATE(96), 1,
      sym__sub_value,
  [2771] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      aux_sym_rules_token1,
    STATE(63), 1,
      aux_sym_rule_repeat2,
  [2784] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      anon_sym_e,
    STATE(98), 1,
      sym_value,
  [2797] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(389), 1,
      aux_sym_rules_token1,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_rule_repeat2,
  [2810] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(402), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [2818] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(404), 1,
      anon_sym_PLUS,
    ACTIONS(406), 1,
      anon_sym_RBRACE2,
  [2828] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(393), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [2836] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(408), 1,
      aux_sym_env_var_token1,
    STATE(141), 1,
      sym_env_var,
  [2846] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(408), 1,
      aux_sym_env_var_token1,
    STATE(137), 1,
      sym_env_var,
  [2856] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(408), 1,
      aux_sym_env_var_token1,
    STATE(135), 1,
      sym_env_var,
  [2866] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(410), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [2874] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(412), 1,
      anon_sym_PLUS,
    ACTIONS(414), 1,
      anon_sym_RBRACE2,
  [2884] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    ACTIONS(418), 1,
      anon_sym_PLUS,
  [2894] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(420), 1,
      sym_match_op,
    ACTIONS(422), 1,
      sym_assignment_op,
  [2904] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(424), 1,
      sym_match_op,
    ACTIONS(426), 1,
      sym_assignment_op,
  [2914] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(408), 1,
      aux_sym_env_var_token1,
    STATE(151), 1,
      sym_env_var,
  [2924] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(428), 1,
      aux_sym_env_var_token1,
    STATE(151), 1,
      sym_kernel_param,
  [2934] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(408), 1,
      aux_sym_env_var_token1,
    STATE(108), 1,
      sym_env_var,
  [2944] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(424), 1,
      sym_match_op,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
  [2954] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(432), 1,
      sym_match_op,
    ACTIONS(434), 1,
      sym_assignment_op,
  [2964] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(420), 1,
      sym_match_op,
    ACTIONS(436), 1,
      sym_assignment_op,
  [2974] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    ACTIONS(440), 1,
      sym_assignment_op,
  [2984] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(434), 1,
      sym_assignment_op,
    ACTIONS(442), 1,
      sym_match_op,
  [2994] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(428), 1,
      aux_sym_env_var_token1,
    STATE(129), 1,
      sym_kernel_param,
  [3004] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(408), 1,
      aux_sym_env_var_token1,
    STATE(129), 1,
      sym_env_var,
  [3014] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(444), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3022] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(408), 1,
      aux_sym_env_var_token1,
    STATE(106), 1,
      sym_env_var,
  [3032] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(446), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3040] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(448), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3048] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(450), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3056] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(452), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3064] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(454), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3072] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(456), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3080] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(458), 1,
      anon_sym_PLUS,
    ACTIONS(460), 1,
      anon_sym_RBRACE2,
  [3090] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    ACTIONS(464), 1,
      anon_sym_PLUS,
  [3100] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(466), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3108] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
  [3115] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
  [3122] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
  [3129] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
  [3136] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
  [3143] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
  [3150] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
  [3157] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
  [3164] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(480), 1,
      anon_sym_RBRACE2,
  [3171] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
  [3178] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(484), 1,
      sym_octal,
  [3185] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(486), 1,
      anon_sym_COMMA,
  [3192] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
  [3199] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(490), 1,
      anon_sym_DQUOTE2,
  [3206] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
  [3213] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(494), 1,
      sym_number,
  [3220] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(496), 1,
      aux_sym_rules_token1,
  [3227] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
  [3234] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(500), 1,
      sym_assignment_op,
  [3241] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(502), 1,
      sym_assignment_op,
  [3248] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
  [3255] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(440), 1,
      sym_assignment_op,
  [3262] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(432), 1,
      sym_match_op,
  [3269] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(506), 1,
      sym_number,
  [3276] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
  [3283] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(510), 1,
      anon_sym_LBRACE,
  [3290] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
  [3297] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
  [3304] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(420), 1,
      sym_match_op,
  [3311] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
  [3318] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(518), 1,
      anon_sym_DQUOTE2,
  [3325] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
  [3332] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
  [3339] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
  [3346] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
  [3353] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(484), 1,
      sym_system_const,
  [3360] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(524), 1,
      anon_sym_RBRACE2,
  [3367] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
  [3374] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
  [3381] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(424), 1,
      sym_match_op,
  [3388] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(528), 1,
      anon_sym_RBRACE2,
  [3395] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(530), 1,
      sym_import_type,
  [3402] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
  [3409] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(534), 1,
      sym_number,
  [3416] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(536), 1,
      sym_run_type,
  [3423] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
  [3430] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(540), 1,
      sym_number,
  [3437] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(536), 1,
      sym_seclabel,
  [3444] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
  [3451] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(544), 1,
      sym_number,
  [3458] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
  [3465] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(548), 1,
      anon_sym_LBRACE,
  [3472] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
  [3479] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
  [3486] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
  [3493] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 158,
  [SMALL_STATE(5)] = 237,
  [SMALL_STATE(6)] = 290,
  [SMALL_STATE(7)] = 343,
  [SMALL_STATE(8)] = 393,
  [SMALL_STATE(9)] = 443,
  [SMALL_STATE(10)] = 493,
  [SMALL_STATE(11)] = 565,
  [SMALL_STATE(12)] = 615,
  [SMALL_STATE(13)] = 665,
  [SMALL_STATE(14)] = 715,
  [SMALL_STATE(15)] = 787,
  [SMALL_STATE(16)] = 837,
  [SMALL_STATE(17)] = 909,
  [SMALL_STATE(18)] = 959,
  [SMALL_STATE(19)] = 1009,
  [SMALL_STATE(20)] = 1058,
  [SMALL_STATE(21)] = 1107,
  [SMALL_STATE(22)] = 1153,
  [SMALL_STATE(23)] = 1199,
  [SMALL_STATE(24)] = 1245,
  [SMALL_STATE(25)] = 1291,
  [SMALL_STATE(26)] = 1337,
  [SMALL_STATE(27)] = 1383,
  [SMALL_STATE(28)] = 1429,
  [SMALL_STATE(29)] = 1475,
  [SMALL_STATE(30)] = 1564,
  [SMALL_STATE(31)] = 1653,
  [SMALL_STATE(32)] = 1727,
  [SMALL_STATE(33)] = 1767,
  [SMALL_STATE(34)] = 1836,
  [SMALL_STATE(35)] = 1897,
  [SMALL_STATE(36)] = 1934,
  [SMALL_STATE(37)] = 1977,
  [SMALL_STATE(38)] = 2020,
  [SMALL_STATE(39)] = 2063,
  [SMALL_STATE(40)] = 2106,
  [SMALL_STATE(41)] = 2149,
  [SMALL_STATE(42)] = 2192,
  [SMALL_STATE(43)] = 2235,
  [SMALL_STATE(44)] = 2278,
  [SMALL_STATE(45)] = 2321,
  [SMALL_STATE(46)] = 2350,
  [SMALL_STATE(47)] = 2376,
  [SMALL_STATE(48)] = 2402,
  [SMALL_STATE(49)] = 2428,
  [SMALL_STATE(50)] = 2454,
  [SMALL_STATE(51)] = 2482,
  [SMALL_STATE(52)] = 2510,
  [SMALL_STATE(53)] = 2538,
  [SMALL_STATE(54)] = 2557,
  [SMALL_STATE(55)] = 2576,
  [SMALL_STATE(56)] = 2597,
  [SMALL_STATE(57)] = 2618,
  [SMALL_STATE(58)] = 2639,
  [SMALL_STATE(59)] = 2654,
  [SMALL_STATE(60)] = 2667,
  [SMALL_STATE(61)] = 2680,
  [SMALL_STATE(62)] = 2693,
  [SMALL_STATE(63)] = 2706,
  [SMALL_STATE(64)] = 2719,
  [SMALL_STATE(65)] = 2732,
  [SMALL_STATE(66)] = 2745,
  [SMALL_STATE(67)] = 2758,
  [SMALL_STATE(68)] = 2771,
  [SMALL_STATE(69)] = 2784,
  [SMALL_STATE(70)] = 2797,
  [SMALL_STATE(71)] = 2810,
  [SMALL_STATE(72)] = 2818,
  [SMALL_STATE(73)] = 2828,
  [SMALL_STATE(74)] = 2836,
  [SMALL_STATE(75)] = 2846,
  [SMALL_STATE(76)] = 2856,
  [SMALL_STATE(77)] = 2866,
  [SMALL_STATE(78)] = 2874,
  [SMALL_STATE(79)] = 2884,
  [SMALL_STATE(80)] = 2894,
  [SMALL_STATE(81)] = 2904,
  [SMALL_STATE(82)] = 2914,
  [SMALL_STATE(83)] = 2924,
  [SMALL_STATE(84)] = 2934,
  [SMALL_STATE(85)] = 2944,
  [SMALL_STATE(86)] = 2954,
  [SMALL_STATE(87)] = 2964,
  [SMALL_STATE(88)] = 2974,
  [SMALL_STATE(89)] = 2984,
  [SMALL_STATE(90)] = 2994,
  [SMALL_STATE(91)] = 3004,
  [SMALL_STATE(92)] = 3014,
  [SMALL_STATE(93)] = 3022,
  [SMALL_STATE(94)] = 3032,
  [SMALL_STATE(95)] = 3040,
  [SMALL_STATE(96)] = 3048,
  [SMALL_STATE(97)] = 3056,
  [SMALL_STATE(98)] = 3064,
  [SMALL_STATE(99)] = 3072,
  [SMALL_STATE(100)] = 3080,
  [SMALL_STATE(101)] = 3090,
  [SMALL_STATE(102)] = 3100,
  [SMALL_STATE(103)] = 3108,
  [SMALL_STATE(104)] = 3115,
  [SMALL_STATE(105)] = 3122,
  [SMALL_STATE(106)] = 3129,
  [SMALL_STATE(107)] = 3136,
  [SMALL_STATE(108)] = 3143,
  [SMALL_STATE(109)] = 3150,
  [SMALL_STATE(110)] = 3157,
  [SMALL_STATE(111)] = 3164,
  [SMALL_STATE(112)] = 3171,
  [SMALL_STATE(113)] = 3178,
  [SMALL_STATE(114)] = 3185,
  [SMALL_STATE(115)] = 3192,
  [SMALL_STATE(116)] = 3199,
  [SMALL_STATE(117)] = 3206,
  [SMALL_STATE(118)] = 3213,
  [SMALL_STATE(119)] = 3220,
  [SMALL_STATE(120)] = 3227,
  [SMALL_STATE(121)] = 3234,
  [SMALL_STATE(122)] = 3241,
  [SMALL_STATE(123)] = 3248,
  [SMALL_STATE(124)] = 3255,
  [SMALL_STATE(125)] = 3262,
  [SMALL_STATE(126)] = 3269,
  [SMALL_STATE(127)] = 3276,
  [SMALL_STATE(128)] = 3283,
  [SMALL_STATE(129)] = 3290,
  [SMALL_STATE(130)] = 3297,
  [SMALL_STATE(131)] = 3304,
  [SMALL_STATE(132)] = 3311,
  [SMALL_STATE(133)] = 3318,
  [SMALL_STATE(134)] = 3325,
  [SMALL_STATE(135)] = 3332,
  [SMALL_STATE(136)] = 3339,
  [SMALL_STATE(137)] = 3346,
  [SMALL_STATE(138)] = 3353,
  [SMALL_STATE(139)] = 3360,
  [SMALL_STATE(140)] = 3367,
  [SMALL_STATE(141)] = 3374,
  [SMALL_STATE(142)] = 3381,
  [SMALL_STATE(143)] = 3388,
  [SMALL_STATE(144)] = 3395,
  [SMALL_STATE(145)] = 3402,
  [SMALL_STATE(146)] = 3409,
  [SMALL_STATE(147)] = 3416,
  [SMALL_STATE(148)] = 3423,
  [SMALL_STATE(149)] = 3430,
  [SMALL_STATE(150)] = 3437,
  [SMALL_STATE(151)] = 3444,
  [SMALL_STATE(152)] = 3451,
  [SMALL_STATE(153)] = 3458,
  [SMALL_STATE(154)] = 3465,
  [SMALL_STATE(155)] = 3472,
  [SMALL_STATE(156)] = 3479,
  [SMALL_STATE(157)] = 3486,
  [SMALL_STATE(158)] = 3493,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sub_c_content, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2), SHIFT_REPEAT(9),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2), SHIFT_REPEAT(12),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2), SHIFT_REPEAT(11),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2), SHIFT_REPEAT(15),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2), SHIFT_REPEAT(157),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2), SHIFT_REPEAT(158),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2), SHIFT_REPEAT(6),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2), SHIFT_REPEAT(13),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2), SHIFT_REPEAT(155),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2), SHIFT_REPEAT(156),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2), SHIFT_REPEAT(5),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_sub, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_sub, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fmt_sub, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fmt_sub, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_sub, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_sub, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_sub, 5),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_sub, 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sub_c_content, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_escape, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_escape, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sub_content, 2),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2), SHIFT_REPEAT(28),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2), SHIFT_REPEAT(22),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2), SHIFT_REPEAT(25),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2), SHIFT_REPEAT(153),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2), SHIFT_REPEAT(154),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2), SHIFT_REPEAT(20),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2), SHIFT_REPEAT(27),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2), SHIFT_REPEAT(134),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2), SHIFT_REPEAT(127),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2), SHIFT_REPEAT(19),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fmt_sub, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fmt_sub, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fmt_sub, 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fmt_sub, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sub_content, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__sub_content, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(30),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(142),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(142),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(80),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(132),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(103),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(148),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(130),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(128),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(81),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(85),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(87),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(124),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(123),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(88),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(121),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(120),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(119),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(142),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(142),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(131),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(103),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(103),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(104),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(145),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(128),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(85),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(87),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(42),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(48),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(49),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(109),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(105),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(45),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__c_content, 2),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__c_content, 2), SHIFT_REPEAT(52),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__c_content, 2), SHIFT_REPEAT(53),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__c_content, 2), SHIFT_REPEAT(54),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content, 2),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content, 2), SHIFT_REPEAT(55),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content, 2), SHIFT_REPEAT(58),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat2, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat2, 2), SHIFT_REPEAT(33),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sub_value, 2, .production_id = 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3, .production_id = 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sub_value, 3, .production_id = 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, .production_id = 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 6, .production_id = 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sub_value, 4, .production_id = 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kernel_param, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [492] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_udev(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

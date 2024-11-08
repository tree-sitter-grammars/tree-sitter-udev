#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
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
#define STATE_COUNT 167
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
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
  aux_sym_content_token1 = 47,
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
  sym_content = 102,
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
  aux_sym_content_repeat1 = 114,
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
  [aux_sym_content_token1] = "content_token1",
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
  [sym__sub_value] = "value",
  [sym_content] = "content",
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
  [aux_sym_content_repeat1] = "content_repeat1",
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
  [aux_sym_content_token1] = aux_sym_content_token1,
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
  [sym__sub_value] = sym_value,
  [sym_content] = sym_content,
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
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
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
  [aux_sym_content_token1] = {
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
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
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
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
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
    [1] = sym_content,
  },
  [3] = {
    [2] = sym_content,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__sub_content, 2,
    aux_sym__sub_content,
    sym_content,
  aux_sym__c_content, 2,
    aux_sym__c_content,
    sym_content,
  aux_sym__sub_c_content, 2,
    aux_sym__sub_c_content,
    sym_content,
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
  [19] = 6,
  [20] = 5,
  [21] = 21,
  [22] = 12,
  [23] = 14,
  [24] = 15,
  [25] = 16,
  [26] = 18,
  [27] = 17,
  [28] = 11,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 36,
  [43] = 38,
  [44] = 36,
  [45] = 5,
  [46] = 17,
  [47] = 16,
  [48] = 18,
  [49] = 15,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 13,
  [54] = 54,
  [55] = 18,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 18,
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
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 75,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 85,
  [99] = 90,
  [100] = 85,
  [101] = 101,
  [102] = 75,
  [103] = 103,
  [104] = 82,
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
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 112,
  [145] = 145,
  [146] = 117,
  [147] = 122,
  [148] = 142,
  [149] = 149,
  [150] = 117,
  [151] = 151,
  [152] = 142,
  [153] = 110,
  [154] = 154,
  [155] = 155,
  [156] = 139,
  [157] = 157,
  [158] = 158,
  [159] = 110,
  [160] = 107,
  [161] = 123,
  [162] = 135,
  [163] = 158,
  [164] = 107,
  [165] = 123,
  [166] = 166,
};

static TSCharacterRange aux_sym_c_escape_token1_character_set_1[] = {
  {'\'', '\''}, {'?', '?'}, {'\\', '\\'}, {'a', 'b'}, {'e', 'f'}, {'n', 'n'}, {'r', 'r'}, {'t', 't'},
  {'v', 'v'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(239);
      ADVANCE_MAP(
        '\n', 240,
        '!', 17,
        '"', 286,
        '#', 345,
        '$', 11,
        '%', 13,
        '*', 299,
        '+', 320,
        ',', 241,
        '-', 18,
        ':', 18,
        '=', 284,
        '?', 300,
        '[', 3,
        '\\', 2,
        'e', 287,
        '{', 253,
        '|', 301,
        '}', 321,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(236);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(344);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(344);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == 'U') ADVANCE(235);
      if (lookahead == 'u') ADVANCE(230);
      if (lookahead == 'x') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (set_contains(aux_sym_c_escape_token1_character_set_1, 9, lookahead)) ADVANCE(303);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(116);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 286,
        '$', 292,
        '%', 295,
        '*', 299,
        '?', 300,
        '[', 291,
        '\\', 290,
        '{', 253,
        '|', 301,
        '\t', 293,
        ' ', 293,
      );
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 286,
        '$', 292,
        '%', 295,
        '*', 299,
        '?', 300,
        '[', 291,
        '\\', 290,
        '|', 301,
        '\t', 293,
        ' ', 293,
      );
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 286,
        '$', 292,
        '%', 295,
        '*', 299,
        '?', 300,
        '[', 291,
        '\\', 289,
        '{', 253,
        '|', 301,
        '\t', 294,
        ' ', 294,
      );
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '"', 286,
        '$', 292,
        '%', 295,
        '*', 299,
        '?', 300,
        '[', 291,
        '\\', 289,
        '|', 301,
        '\t', 294,
        ' ', 294,
      );
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 286,
        '%', 13,
        '*', 299,
        '+', 319,
        '?', 300,
        '[', 3,
        '\\', 1,
        '{', 253,
        '|', 301,
        '}', 254,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 286,
        '*', 299,
        '?', 300,
        '[', 291,
        '\\', 290,
        '|', 301,
        '\t', 296,
        ' ', 296,
      );
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 286,
        '*', 299,
        '?', 300,
        '[', 291,
        '\\', 289,
        '|', 301,
        '\t', 297,
        ' ', 297,
      );
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '$', 343,
        'a', 206,
        'd', 130,
        'e', 171,
        'i', 127,
        'k', 131,
        'l', 145,
        'm', 117,
        'n', 118,
        'p', 119,
        'r', 132,
        's', 217,
      );
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '%', 13,
        '*', 299,
        '+', 319,
        '?', 300,
        '[', 3,
        '\\', 1,
        '|', 301,
        '}', 254,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '%', 326,
        'E', 315,
        'M', 316,
        'N', 325,
        'P', 322,
        'S', 324,
        'b', 313,
        'c', 318,
        'k', 310,
        'm', 317,
        'n', 311,
        'p', 312,
        'r', 323,
        's', 314,
      );
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '}') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 15:
      if (lookahead == '+') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(282);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(283);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(100);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(92);
      END_STATE();
    case 27:
      if (lookahead == 'B') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(103);
      if (lookahead == 'T') ADVANCE(104);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == 'U') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(29);
      if (lookahead == 'U') ADVANCE(26);
      if (lookahead == 'Y') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(266);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(246);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'G') ADVANCE(259);
      END_STATE();
    case 45:
      if (lookahead == 'G') ADVANCE(89);
      END_STATE();
    case 46:
      if (lookahead == 'H') ADVANCE(243);
      END_STATE();
    case 47:
      if (lookahead == 'I') ADVANCE(113);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'K') ADVANCE(247);
      END_STATE();
    case 52:
      if (lookahead == 'L') ADVANCE(269);
      END_STATE();
    case 53:
      if (lookahead == 'L') ADVANCE(244);
      END_STATE();
    case 54:
      if (lookahead == 'L') ADVANCE(256);
      END_STATE();
    case 55:
      if (lookahead == 'L') ADVANCE(267);
      END_STATE();
    case 56:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(102);
      END_STATE();
    case 58:
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 59:
      if (lookahead == 'M') ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == 'M') ADVANCE(262);
      END_STATE();
    case 61:
      if (lookahead == 'M') ADVANCE(248);
      END_STATE();
    case 62:
      if (lookahead == 'M') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 63:
      if (lookahead == 'M') ADVANCE(36);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(268);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(242);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(111);
      END_STATE();
    case 68:
      if (lookahead == 'N') ADVANCE(93);
      END_STATE();
    case 69:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 70:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 71:
      if (lookahead == 'N') ADVANCE(96);
      END_STATE();
    case 72:
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 73:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 74:
      if (lookahead == 'O') ADVANCE(270);
      END_STATE();
    case 75:
      if (lookahead == 'O') ADVANCE(71);
      END_STATE();
    case 76:
      if (lookahead == 'O') ADVANCE(45);
      END_STATE();
    case 77:
      if (lookahead == 'O') ADVANCE(105);
      if (lookahead == 'R') ADVANCE(73);
      END_STATE();
    case 78:
      if (lookahead == 'O') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == 'O') ADVANCE(65);
      END_STATE();
    case 80:
      if (lookahead == 'O') ADVANCE(68);
      END_STATE();
    case 81:
      if (lookahead == 'P') ADVANCE(265);
      END_STATE();
    case 82:
      if (lookahead == 'P') ADVANCE(23);
      END_STATE();
    case 83:
      if (lookahead == 'P') ADVANCE(78);
      END_STATE();
    case 84:
      if (lookahead == 'P') ADVANCE(108);
      if (lookahead == 'W') ADVANCE(69);
      END_STATE();
    case 85:
      if (lookahead == 'R') ADVANCE(252);
      END_STATE();
    case 86:
      if (lookahead == 'R') ADVANCE(264);
      END_STATE();
    case 87:
      if (lookahead == 'R') ADVANCE(250);
      END_STATE();
    case 88:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 89:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 90:
      if (lookahead == 'R') ADVANCE(70);
      END_STATE();
    case 91:
      if (lookahead == 'R') ADVANCE(101);
      END_STATE();
    case 92:
      if (lookahead == 'S') ADVANCE(114);
      END_STATE();
    case 93:
      if (lookahead == 'S') ADVANCE(272);
      END_STATE();
    case 94:
      if (lookahead == 'S') ADVANCE(110);
      END_STATE();
    case 95:
      if (lookahead == 'S') ADVANCE(98);
      END_STATE();
    case 96:
      if (lookahead == 'S') ADVANCE(99);
      END_STATE();
    case 97:
      if (lookahead == 'S') ADVANCE(106);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(261);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(258);
      END_STATE();
    case 100:
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 101:
      if (lookahead == 'T') ADVANCE(271);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(263);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 109:
      if (lookahead == 'U') ADVANCE(81);
      END_STATE();
    case 110:
      if (lookahead == 'U') ADVANCE(57);
      END_STATE();
    case 111:
      if (lookahead == 'V') ADVANCE(257);
      END_STATE();
    case 112:
      if (lookahead == 'V') ADVANCE(82);
      END_STATE();
    case 113:
      if (lookahead == 'V') ADVANCE(42);
      END_STATE();
    case 114:
      if (lookahead == 'Y') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(115);
      END_STATE();
    case 116:
      if (lookahead == ']') ADVANCE(302);
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
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(275);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(140);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(330);
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
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 142:
      if (lookahead == 'g') ADVANCE(196);
      END_STATE();
    case 143:
      if (lookahead == 'h') ADVANCE(329);
      END_STATE();
    case 144:
      if (lookahead == 'h') ADVANCE(273);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(216);
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
      if (lookahead == 'i') ADVANCE(194);
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
      if (lookahead == 'l') ADVANCE(327);
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
      if (lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(274);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(275);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(275);
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
      if (lookahead == 'n') ADVANCE(205);
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
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(328);
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
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(275);
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
      if (lookahead == 'v') ADVANCE(333);
      END_STATE();
    case 215:
      if (lookahead == 'v') ADVANCE(163);
      END_STATE();
    case 216:
      if (lookahead == 'v') ADVANCE(138);
      END_STATE();
    case 217:
      if (lookahead == 'y') ADVANCE(198);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(280);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(279);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(218);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(219);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 236:
      if (eof) ADVANCE(239);
      ADVANCE_MAP(
        '\n', 240,
        '!', 17,
        '"', 285,
        '#', 345,
        '$', 11,
        '%', 13,
        '*', 299,
        '+', 320,
        ',', 241,
        '-', 18,
        ':', 18,
        '=', 284,
        '?', 300,
        '[', 3,
        '\\', 2,
        'e', 287,
        '|', 301,
        '}', 254,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(236);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      END_STATE();
    case 237:
      if (eof) ADVANCE(239);
      ADVANCE_MAP(
        '\n', 240,
        '!', 17,
        '"', 285,
        '#', 345,
        '+', 18,
        '-', 18,
        ':', 18,
        '=', 284,
        'A', 28,
        'C', 75,
        'D', 32,
        'E', 67,
        'G', 77,
        'I', 59,
        'K', 37,
        'L', 19,
        'M', 72,
        'N', 21,
        'O', 84,
        'P', 88,
        'R', 33,
        'S', 34,
        'T', 20,
        '\\', 1,
        'a', 189,
        'b', 211,
        'c', 215,
        'e', 287,
        'p', 193,
        'v', 150,
        '{', 253,
        '}', 254,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 238:
      if (eof) ADVANCE(239);
      ADVANCE_MAP(
        '\n', 240,
        '!', 17,
        '"', 285,
        '#', 345,
        '+', 18,
        '-', 18,
        ':', 18,
        '=', 284,
        'A', 28,
        'C', 75,
        'D', 32,
        'E', 67,
        'G', 77,
        'I', 59,
        'K', 37,
        'L', 19,
        'M', 72,
        'N', 21,
        'O', 84,
        'P', 88,
        'R', 33,
        'S', 34,
        'T', 20,
        '\\', 1,
        'a', 189,
        'b', 211,
        'c', 215,
        'e', 287,
        'p', 193,
        'v', 150,
        '}', 254,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_rules_token1);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_ACTION);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DEVPATH);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_KERNEL);
      if (lookahead == 'S') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_KERNELS);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_NAME);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SYMLINK);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_SUBSYSTEM);
      if (lookahead == 'S') ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SUBSYSTEMS);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DRIVER);
      if (lookahead == 'S') ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DRIVERS);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_ATTR);
      if (lookahead == 'S') ADVANCE(255);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_ATTRS);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SYSCTL);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_ENV);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_CONST);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_TAG);
      if (lookahead == 'S') ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_TAGS);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_TEST);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_PROGRAM);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_RESULT);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_OWNER);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_GROUP);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_MODE);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_SECLABEL);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_RUN);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LABEL);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_GOTO);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_IMPORT);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_system_const);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_run_type);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_import_type);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_env_var_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_seclabel);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_octal);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_octal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_match_op);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_assignment_op);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_assignment_op);
      if (lookahead == '=') ADVANCE(282);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_content_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\n') ADVANCE(344);
      if (lookahead == '"') ADVANCE(298);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\n') ADVANCE(344);
      if (lookahead == 'U') ADVANCE(235);
      if (lookahead == 'u') ADVANCE(230);
      if (lookahead == 'x') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (set_contains(aux_sym_c_escape_token1_character_set_1, 9, lookahead)) ADVANCE(303);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '!') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(116);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_content_token1);
      ADVANCE_MAP(
        '$', 343,
        'a', 206,
        'd', 130,
        'e', 171,
        'i', 127,
        'k', 131,
        'l', 145,
        'm', 117,
        'n', 118,
        'p', 119,
        'r', 132,
        's', 217,
      );
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_content_token1);
      ADVANCE_MAP(
        '$', 292,
        '%', 295,
        '*', 299,
        '?', 300,
        '[', 291,
        '\\', 290,
        '|', 301,
        '\t', 293,
        ' ', 293,
      );
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(288);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_content_token1);
      ADVANCE_MAP(
        '$', 292,
        '%', 295,
        '*', 299,
        '?', 300,
        '[', 291,
        '\\', 289,
        '|', 301,
        '\t', 294,
        ' ', 294,
      );
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(288);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_content_token1);
      ADVANCE_MAP(
        '%', 326,
        'E', 315,
        'M', 316,
        'N', 325,
        'P', 322,
        'S', 324,
        'b', 313,
        'c', 318,
        'k', 310,
        'm', 317,
        'n', 311,
        'p', 312,
        'r', 323,
        's', 314,
      );
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead == '?') ADVANCE(300);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '\\') ADVANCE(290);
      if (lookahead == '|') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(288);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead == '?') ADVANCE(300);
      if (lookahead == '[') ADVANCE(291);
      if (lookahead == '\\') ADVANCE(289);
      if (lookahead == '|') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(288);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_pattern_token1);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_c_escape_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_c_escape_token2);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_c_escape_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_c_escape_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_c_escape_token3);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_c_escape_token4);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_c_escape_token5);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_PERCENTk);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_PERCENTn);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_PERCENTp);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_PERCENTb);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_PERCENTs);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_PERCENTE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_PERCENTM);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_PERCENTm);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_PERCENTc);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(283);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_PERCENTP);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_PERCENTr);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_PERCENTS);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_PERCENTN);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DOLLARkernel);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DOLLARnumber);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DOLLARdevpath);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DOLLARid);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DOLLARdriver);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_DOLLARattr);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DOLLARenv);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DOLLARmajor);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DOLLARminor);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DOLLARresult);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DOLLARparent);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DOLLARname);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_DOLLARlinks);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_DOLLARroot);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DOLLARsys);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DOLLARdevnode);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_linebreak);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(345);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 237},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 237},
  [30] = {.lex_state = 237},
  [31] = {.lex_state = 237},
  [32] = {.lex_state = 237},
  [33] = {.lex_state = 237},
  [34] = {.lex_state = 237},
  [35] = {.lex_state = 237},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 237},
  [64] = {.lex_state = 237},
  [65] = {.lex_state = 237},
  [66] = {.lex_state = 237},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 237},
  [69] = {.lex_state = 237},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 237},
  [72] = {.lex_state = 237},
  [73] = {.lex_state = 237},
  [74] = {.lex_state = 237},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 237},
  [77] = {.lex_state = 237},
  [78] = {.lex_state = 237},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 237},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 237},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 14},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 14},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 14},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 237},
  [110] = {.lex_state = 237},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 237},
  [113] = {.lex_state = 237},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 237},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 237},
  [122] = {.lex_state = 237},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 237},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 237},
  [128] = {.lex_state = 237},
  [129] = {.lex_state = 237},
  [130] = {.lex_state = 237},
  [131] = {.lex_state = 237},
  [132] = {.lex_state = 237},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 237},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 237},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 237},
  [145] = {.lex_state = 16},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 237},
  [148] = {.lex_state = 237},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 237},
  [153] = {.lex_state = 237},
  [154] = {.lex_state = 237},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 237},
  [157] = {.lex_state = 237},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 237},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 115},
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
    [sym_rules] = STATE(149),
    [sym_rule] = STATE(143),
    [sym_match] = STATE(151),
    [sym_assignment] = STATE(70),
    [aux_sym_rules_repeat1] = STATE(30),
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
      aux_sym_content_token1,
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
    STATE(8), 4,
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
    ACTIONS(45), 1,
      aux_sym_content_token1,
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
    ACTIONS(69), 1,
      anon_sym_DQUOTE2,
    STATE(4), 1,
      aux_sym__sub_c_content,
    ACTIONS(47), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    STATE(8), 4,
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
  [158] = 15,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(71), 1,
      anon_sym_DQUOTE2,
    ACTIONS(73), 1,
      aux_sym_content_token1,
    ACTIONS(85), 1,
      anon_sym_PERCENTs,
    ACTIONS(88), 1,
      anon_sym_PERCENTE,
    ACTIONS(91), 1,
      anon_sym_PERCENTc,
    ACTIONS(97), 1,
      anon_sym_DOLLARattr,
    ACTIONS(100), 1,
      anon_sym_DOLLARenv,
    ACTIONS(103), 1,
      anon_sym_DOLLARresult,
    STATE(4), 1,
      aux_sym__sub_c_content,
    ACTIONS(76), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    STATE(8), 4,
      sym_pattern,
      sym_c_escape,
      sym_fmt_sub,
      sym_var_sub,
    ACTIONS(79), 5,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
    ACTIONS(82), 11,
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
    ACTIONS(94), 14,
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
      aux_sym_content_token1,
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
      aux_sym_content_token1,
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
  [343] = 14,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(118), 1,
      anon_sym_DQUOTE2,
    ACTIONS(129), 1,
      anon_sym_PERCENTs,
    ACTIONS(132), 1,
      anon_sym_PERCENTE,
    ACTIONS(135), 1,
      anon_sym_PERCENTc,
    ACTIONS(141), 1,
      anon_sym_DOLLARattr,
    ACTIONS(144), 1,
      anon_sym_DOLLARenv,
    ACTIONS(147), 1,
      anon_sym_DOLLARresult,
    STATE(7), 1,
      aux_sym__sub_content,
    ACTIONS(120), 2,
      aux_sym_content_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(21), 3,
      sym_pattern,
      sym_fmt_sub,
      sym_var_sub,
    ACTIONS(123), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(126), 11,
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
    ACTIONS(138), 14,
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
  [415] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(150), 1,
      anon_sym_DQUOTE2,
    ACTIONS(152), 41,
      aux_sym_content_token1,
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
  [465] = 14,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(154), 1,
      anon_sym_DQUOTE2,
    ACTIONS(162), 1,
      anon_sym_PERCENTs,
    ACTIONS(164), 1,
      anon_sym_PERCENTE,
    ACTIONS(166), 1,
      anon_sym_PERCENTc,
    ACTIONS(170), 1,
      anon_sym_DOLLARattr,
    ACTIONS(172), 1,
      anon_sym_DOLLARenv,
    ACTIONS(174), 1,
      anon_sym_DOLLARresult,
    STATE(7), 1,
      aux_sym__sub_content,
    ACTIONS(156), 2,
      aux_sym_content_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(21), 3,
      sym_pattern,
      sym_fmt_sub,
      sym_var_sub,
    ACTIONS(158), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(160), 11,
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
    ACTIONS(168), 14,
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
  [537] = 14,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(162), 1,
      anon_sym_PERCENTs,
    ACTIONS(164), 1,
      anon_sym_PERCENTE,
    ACTIONS(166), 1,
      anon_sym_PERCENTc,
    ACTIONS(170), 1,
      anon_sym_DOLLARattr,
    ACTIONS(172), 1,
      anon_sym_DOLLARenv,
    ACTIONS(174), 1,
      anon_sym_DOLLARresult,
    ACTIONS(176), 1,
      anon_sym_DQUOTE2,
    STATE(9), 1,
      aux_sym__sub_content,
    ACTIONS(156), 2,
      aux_sym_content_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(21), 3,
      sym_pattern,
      sym_fmt_sub,
      sym_var_sub,
    ACTIONS(158), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(160), 11,
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
    ACTIONS(168), 14,
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
  [609] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(178), 1,
      anon_sym_DQUOTE2,
    ACTIONS(180), 41,
      aux_sym_content_token1,
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
  [659] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(114), 1,
      anon_sym_DQUOTE2,
    ACTIONS(116), 41,
      aux_sym_content_token1,
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
  [709] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(182), 1,
      anon_sym_DQUOTE2,
    ACTIONS(184), 41,
      aux_sym_content_token1,
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
  [759] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(186), 1,
      anon_sym_DQUOTE2,
    ACTIONS(188), 41,
      aux_sym_content_token1,
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
  [809] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(108), 1,
      anon_sym_DQUOTE2,
    ACTIONS(110), 41,
      aux_sym_content_token1,
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
  [859] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(190), 1,
      anon_sym_DQUOTE2,
    ACTIONS(192), 41,
      aux_sym_content_token1,
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
  [909] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(194), 1,
      anon_sym_DQUOTE2,
    ACTIONS(196), 41,
      aux_sym_content_token1,
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
    ACTIONS(198), 1,
      anon_sym_DQUOTE2,
    ACTIONS(200), 41,
      aux_sym_content_token1,
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
    ACTIONS(114), 1,
      anon_sym_DQUOTE2,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 37,
      aux_sym_content_token1,
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
    ACTIONS(108), 1,
      anon_sym_DQUOTE2,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 37,
      aux_sym_content_token1,
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
    ACTIONS(206), 1,
      anon_sym_DQUOTE2,
    ACTIONS(208), 37,
      aux_sym_content_token1,
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
    ACTIONS(114), 1,
      anon_sym_DQUOTE2,
    ACTIONS(116), 37,
      aux_sym_content_token1,
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
    ACTIONS(186), 1,
      anon_sym_DQUOTE2,
    ACTIONS(188), 37,
      aux_sym_content_token1,
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
    ACTIONS(108), 1,
      anon_sym_DQUOTE2,
    ACTIONS(110), 37,
      aux_sym_content_token1,
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
    ACTIONS(190), 1,
      anon_sym_DQUOTE2,
    ACTIONS(192), 37,
      aux_sym_content_token1,
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
    ACTIONS(198), 1,
      anon_sym_DQUOTE2,
    ACTIONS(200), 37,
      aux_sym_content_token1,
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
    ACTIONS(194), 1,
      anon_sym_DQUOTE2,
    ACTIONS(196), 37,
      aux_sym_content_token1,
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
    ACTIONS(178), 1,
      anon_sym_DQUOTE2,
    ACTIONS(180), 37,
      aux_sym_content_token1,
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
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      aux_sym_rules_token1,
    ACTIONS(224), 1,
      anon_sym_ATTR,
    ACTIONS(227), 1,
      anon_sym_ATTRS,
    ACTIONS(230), 1,
      anon_sym_SYSCTL,
    ACTIONS(233), 1,
      anon_sym_ENV,
    ACTIONS(236), 1,
      anon_sym_CONST,
    ACTIONS(239), 1,
      anon_sym_TAG,
    ACTIONS(242), 1,
      anon_sym_TEST,
    ACTIONS(245), 1,
      anon_sym_PROGRAM,
    ACTIONS(251), 1,
      anon_sym_SECLABEL,
    ACTIONS(254), 1,
      anon_sym_RUN,
    ACTIONS(260), 1,
      anon_sym_IMPORT,
    ACTIONS(263), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym_rules_repeat1,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    STATE(70), 1,
      sym_assignment,
    STATE(143), 1,
      sym_rule,
    STATE(151), 1,
      sym_match,
    ACTIONS(221), 2,
      anon_sym_NAME,
      anon_sym_SYMLINK,
    ACTIONS(218), 3,
      anon_sym_KERNEL,
      anon_sym_SUBSYSTEM,
      anon_sym_DRIVER,
    ACTIONS(248), 3,
      anon_sym_OWNER,
      anon_sym_GROUP,
      anon_sym_MODE,
    ACTIONS(257), 3,
      anon_sym_LABEL,
      anon_sym_GOTO,
      anon_sym_OPTIONS,
    ACTIONS(215), 7,
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
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 1,
      aux_sym_rules_token1,
    STATE(29), 1,
      aux_sym_rules_repeat1,
    STATE(31), 1,
      aux_sym_rule_repeat1,
    STATE(70), 1,
      sym_assignment,
    STATE(143), 1,
      sym_rule,
    STATE(151), 1,
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
    STATE(60), 1,
      sym_assignment,
    STATE(151), 1,
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
    ACTIONS(270), 5,
      anon_sym_KERNEL,
      anon_sym_SUBSYSTEM,
      anon_sym_DRIVER,
      anon_sym_ATTR,
      anon_sym_TAG,
    ACTIONS(210), 27,
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
    STATE(94), 2,
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
    ACTIONS(281), 1,
      anon_sym_ATTR,
    ACTIONS(284), 1,
      anon_sym_ATTRS,
    ACTIONS(287), 1,
      anon_sym_SYSCTL,
    ACTIONS(290), 1,
      anon_sym_ENV,
    ACTIONS(293), 1,
      anon_sym_CONST,
    ACTIONS(296), 1,
      anon_sym_TEST,
    ACTIONS(299), 1,
      anon_sym_PROGRAM,
    STATE(34), 1,
      aux_sym_rule_repeat1,
    STATE(151), 1,
      sym_match,
    ACTIONS(278), 2,
      anon_sym_NAME,
      anon_sym_SYMLINK,
    ACTIONS(275), 4,
      anon_sym_KERNEL,
      anon_sym_SUBSYSTEM,
      anon_sym_DRIVER,
      anon_sym_TAG,
    ACTIONS(272), 7,
      anon_sym_ACTION,
      anon_sym_DEVPATH,
      anon_sym_KERNELS,
      anon_sym_SUBSYSTEMS,
      anon_sym_DRIVERS,
      anon_sym_TAGS,
      anon_sym_RESULT,
    ACTIONS(302), 9,
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
    ACTIONS(304), 5,
      anon_sym_KERNEL,
      anon_sym_SUBSYSTEM,
      anon_sym_DRIVER,
      anon_sym_ATTR,
      anon_sym_TAG,
    ACTIONS(302), 24,
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
    ACTIONS(306), 1,
      aux_sym_attribute_token1,
    ACTIONS(312), 1,
      anon_sym_PERCENTs,
    ACTIONS(314), 1,
      anon_sym_PERCENTE,
    ACTIONS(316), 1,
      anon_sym_PERCENTc,
    STATE(152), 1,
      sym_attribute,
    STATE(40), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(308), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(310), 11,
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
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(320), 1,
      aux_sym_attribute_token1,
    ACTIONS(329), 1,
      anon_sym_PERCENTs,
    ACTIONS(332), 1,
      anon_sym_PERCENTE,
    ACTIONS(335), 1,
      anon_sym_PERCENTc,
    STATE(37), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(323), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(326), 11,
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
    ACTIONS(306), 1,
      aux_sym_attribute_token1,
    ACTIONS(312), 1,
      anon_sym_PERCENTs,
    ACTIONS(314), 1,
      anon_sym_PERCENTE,
    ACTIONS(316), 1,
      anon_sym_PERCENTc,
    STATE(112), 1,
      sym_attribute,
    STATE(40), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(308), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(310), 11,
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
    ACTIONS(306), 1,
      aux_sym_attribute_token1,
    ACTIONS(312), 1,
      anon_sym_PERCENTs,
    ACTIONS(314), 1,
      anon_sym_PERCENTE,
    ACTIONS(316), 1,
      anon_sym_PERCENTc,
    STATE(127), 1,
      sym_attribute,
    STATE(40), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(308), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(310), 11,
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
    ACTIONS(312), 1,
      anon_sym_PERCENTs,
    ACTIONS(314), 1,
      anon_sym_PERCENTE,
    ACTIONS(316), 1,
      anon_sym_PERCENTc,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    ACTIONS(340), 1,
      aux_sym_attribute_token1,
    STATE(37), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(308), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(310), 11,
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
    ACTIONS(306), 1,
      aux_sym_attribute_token1,
    ACTIONS(312), 1,
      anon_sym_PERCENTs,
    ACTIONS(314), 1,
      anon_sym_PERCENTE,
    ACTIONS(316), 1,
      anon_sym_PERCENTc,
    STATE(125), 1,
      sym_attribute,
    STATE(40), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(308), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(310), 11,
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
    ACTIONS(306), 1,
      aux_sym_attribute_token1,
    ACTIONS(312), 1,
      anon_sym_PERCENTs,
    ACTIONS(314), 1,
      anon_sym_PERCENTE,
    ACTIONS(316), 1,
      anon_sym_PERCENTc,
    STATE(142), 1,
      sym_attribute,
    STATE(40), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(308), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(310), 11,
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
    ACTIONS(306), 1,
      aux_sym_attribute_token1,
    ACTIONS(312), 1,
      anon_sym_PERCENTs,
    ACTIONS(314), 1,
      anon_sym_PERCENTE,
    ACTIONS(316), 1,
      anon_sym_PERCENTc,
    STATE(144), 1,
      sym_attribute,
    STATE(40), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(308), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(310), 11,
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
    ACTIONS(306), 1,
      aux_sym_attribute_token1,
    ACTIONS(312), 1,
      anon_sym_PERCENTs,
    ACTIONS(314), 1,
      anon_sym_PERCENTE,
    ACTIONS(316), 1,
      anon_sym_PERCENTc,
    STATE(148), 1,
      sym_attribute,
    STATE(40), 3,
      sym_pattern,
      sym_fmt_sub,
      aux_sym_attribute_repeat1,
    ACTIONS(308), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(310), 11,
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
    ACTIONS(342), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 20,
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
    ACTIONS(194), 20,
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
    ACTIONS(190), 20,
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
    ACTIONS(198), 20,
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
    ACTIONS(108), 20,
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
  [2454] = 7,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(344), 1,
      anon_sym_DQUOTE2,
    ACTIONS(346), 1,
      aux_sym_content_token1,
    STATE(51), 1,
      aux_sym__c_content,
    STATE(54), 2,
      sym_pattern,
      sym_c_escape,
    ACTIONS(348), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(350), 5,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
  [2484] = 7,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(352), 1,
      anon_sym_DQUOTE2,
    ACTIONS(354), 1,
      aux_sym_content_token1,
    STATE(51), 1,
      aux_sym__c_content,
    STATE(54), 2,
      sym_pattern,
      sym_c_escape,
    ACTIONS(357), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(360), 5,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
  [2514] = 7,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(346), 1,
      aux_sym_content_token1,
    ACTIONS(363), 1,
      anon_sym_DQUOTE2,
    STATE(50), 1,
      aux_sym__c_content,
    STATE(54), 2,
      sym_pattern,
      sym_c_escape,
    ACTIONS(348), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
    ACTIONS(350), 5,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
  [2544] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(182), 1,
      anon_sym_DQUOTE2,
    ACTIONS(184), 10,
      aux_sym_content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
  [2563] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(365), 1,
      anon_sym_DQUOTE2,
    ACTIONS(367), 10,
      aux_sym_content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
  [2582] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(198), 1,
      anon_sym_DQUOTE2,
    ACTIONS(200), 10,
      aux_sym_content_token1,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
      aux_sym_c_escape_token1,
      aux_sym_c_escape_token2,
      aux_sym_c_escape_token3,
      aux_sym_c_escape_token4,
      aux_sym_c_escape_token5,
  [2601] = 6,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(369), 1,
      anon_sym_DQUOTE2,
    STATE(140), 1,
      sym_content,
    ACTIONS(371), 2,
      aux_sym_content_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(58), 2,
      sym_pattern,
      aux_sym_content_repeat1,
    ACTIONS(373), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
  [2625] = 5,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(375), 1,
      anon_sym_DQUOTE2,
    ACTIONS(377), 2,
      aux_sym_content_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(57), 2,
      sym_pattern,
      aux_sym_content_repeat1,
    ACTIONS(380), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
  [2646] = 5,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(383), 1,
      anon_sym_DQUOTE2,
    ACTIONS(385), 2,
      aux_sym_content_token1,
      anon_sym_BSLASH_DQUOTE,
    STATE(57), 2,
      sym_pattern,
      aux_sym_content_repeat1,
    ACTIONS(373), 4,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
  [2667] = 3,
    ACTIONS(67), 1,
      sym_linebreak,
    ACTIONS(198), 1,
      anon_sym_DQUOTE2,
    ACTIONS(200), 6,
      aux_sym_content_token1,
      anon_sym_BSLASH_DQUOTE,
      anon_sym_STAR,
      anon_sym_QMARK,
      anon_sym_PIPE,
      aux_sym_pattern_token1,
  [2682] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(387), 1,
      aux_sym_rules_token1,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_rule_repeat2,
  [2695] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(391), 1,
      aux_sym_rules_token1,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_rule_repeat2,
  [2708] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      aux_sym_rules_token1,
    STATE(61), 1,
      aux_sym_rule_repeat2,
  [2721] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    ACTIONS(400), 1,
      anon_sym_e,
    STATE(93), 1,
      sym__sub_value,
  [2734] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_e,
    STATE(92), 1,
      sym_value,
  [2747] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    ACTIONS(400), 1,
      anon_sym_e,
    STATE(86), 1,
      sym__sub_value,
  [2760] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    ACTIONS(400), 1,
      anon_sym_e,
    STATE(106), 1,
      sym__sub_value,
  [2773] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(387), 1,
      aux_sym_rules_token1,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_rule_repeat2,
  [2786] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_e,
    STATE(86), 1,
      sym_value,
  [2799] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_e,
    STATE(93), 1,
      sym_value,
  [2812] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      aux_sym_rules_token1,
    STATE(67), 1,
      aux_sym_rule_repeat2,
  [2825] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    ACTIONS(400), 1,
      anon_sym_e,
    STATE(92), 1,
      sym__sub_value,
  [2838] = 4,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_e,
    STATE(106), 1,
      sym_value,
  [2851] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(408), 1,
      anon_sym_LBRACE,
    ACTIONS(410), 1,
      sym_assignment_op,
  [2861] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(412), 1,
      sym_match_op,
    ACTIONS(414), 1,
      sym_assignment_op,
  [2871] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(416), 1,
      aux_sym_env_var_token1,
    STATE(152), 1,
      sym_env_var,
  [2881] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(418), 1,
      sym_match_op,
    ACTIONS(420), 1,
      sym_assignment_op,
  [2891] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(422), 1,
      sym_match_op,
    ACTIONS(424), 1,
      sym_assignment_op,
  [2901] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(420), 1,
      sym_assignment_op,
    ACTIONS(426), 1,
      sym_match_op,
  [2911] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(428), 1,
      aux_sym_env_var_token1,
    STATE(127), 1,
      sym_kernel_param,
  [2921] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(416), 1,
      aux_sym_env_var_token1,
    STATE(109), 1,
      sym_env_var,
  [2931] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(430), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [2939] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(416), 1,
      aux_sym_env_var_token1,
    STATE(112), 1,
      sym_env_var,
  [2949] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(432), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [2957] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(434), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [2965] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(436), 1,
      anon_sym_PLUS,
    ACTIONS(438), 1,
      anon_sym_RBRACE2,
  [2975] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(440), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [2983] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(412), 1,
      sym_match_op,
    ACTIONS(442), 1,
      sym_assignment_op,
  [2993] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(444), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3001] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(416), 1,
      aux_sym_env_var_token1,
    STATE(148), 1,
      sym_env_var,
  [3011] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    ACTIONS(448), 1,
      anon_sym_PLUS,
  [3021] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(450), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3029] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(452), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3037] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(454), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3045] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(391), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3053] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(456), 1,
      sym_match_op,
    ACTIONS(458), 1,
      sym_assignment_op,
  [3063] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(460), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3071] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(456), 1,
      sym_match_op,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
  [3081] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(464), 1,
      anon_sym_PLUS,
    ACTIONS(466), 1,
      anon_sym_RBRACE2,
  [3091] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    ACTIONS(470), 1,
      anon_sym_PLUS,
  [3101] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(472), 1,
      anon_sym_PLUS,
    ACTIONS(474), 1,
      anon_sym_RBRACE2,
  [3111] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(428), 1,
      aux_sym_env_var_token1,
    STATE(125), 1,
      sym_kernel_param,
  [3121] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(416), 1,
      aux_sym_env_var_token1,
    STATE(142), 1,
      sym_env_var,
  [3131] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(476), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3139] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(416), 1,
      aux_sym_env_var_token1,
    STATE(144), 1,
      sym_env_var,
  [3149] = 3,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(416), 1,
      aux_sym_env_var_token1,
    STATE(130), 1,
      sym_env_var,
  [3159] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(478), 2,
      aux_sym_rules_token1,
      anon_sym_COMMA,
  [3167] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
  [3174] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(482), 1,
      anon_sym_DQUOTE2,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
  [3188] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(486), 1,
      sym_number,
  [3195] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(488), 1,
      sym_octal,
  [3202] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
  [3209] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(410), 1,
      sym_assignment_op,
  [3216] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
  [3223] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
  [3230] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
  [3237] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(496), 1,
      anon_sym_RBRACE2,
  [3244] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(456), 1,
      sym_match_op,
  [3251] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(498), 1,
      sym_assignment_op,
  [3258] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(422), 1,
      sym_match_op,
  [3265] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(488), 1,
      sym_system_const,
  [3272] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
  [3279] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(502), 1,
      anon_sym_LBRACE,
  [3286] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
  [3293] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
  [3300] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
  [3307] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
  [3314] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
  [3321] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
  [3335] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
  [3342] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
  [3349] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(522), 1,
      anon_sym_LBRACE,
  [3356] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
  [3363] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
  [3370] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(412), 1,
      sym_match_op,
  [3377] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
  [3384] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(530), 1,
      anon_sym_LBRACE,
  [3391] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(532), 1,
      sym_number,
  [3398] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(363), 1,
      anon_sym_DQUOTE2,
  [3405] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(418), 1,
      sym_match_op,
  [3412] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
  [3419] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(534), 1,
      aux_sym_rules_token1,
  [3426] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
  [3433] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(536), 1,
      sym_seclabel,
  [3440] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(538), 1,
      anon_sym_RBRACE2,
  [3447] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
  [3454] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
  [3461] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(542), 1,
      ts_builtin_sym_end,
  [3468] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(544), 1,
      anon_sym_RBRACE2,
  [3475] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(546), 1,
      anon_sym_COMMA,
  [3482] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
  [3489] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(548), 1,
      sym_number,
  [3496] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(550), 1,
      sym_assignment_op,
  [3503] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(552), 1,
      anon_sym_DQUOTE2,
  [3510] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(554), 1,
      sym_number,
  [3517] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(536), 1,
      sym_run_type,
  [3524] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
  [3531] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(558), 1,
      sym_number,
  [3538] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
  [3545] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(562), 1,
      anon_sym_LBRACE,
  [3552] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
  [3559] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
  [3566] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
  [3573] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
  [3580] = 2,
    ACTIONS(3), 1,
      sym_linebreak,
    ACTIONS(572), 1,
      sym_import_type,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 158,
  [SMALL_STATE(5)] = 237,
  [SMALL_STATE(6)] = 290,
  [SMALL_STATE(7)] = 343,
  [SMALL_STATE(8)] = 415,
  [SMALL_STATE(9)] = 465,
  [SMALL_STATE(10)] = 537,
  [SMALL_STATE(11)] = 609,
  [SMALL_STATE(12)] = 659,
  [SMALL_STATE(13)] = 709,
  [SMALL_STATE(14)] = 759,
  [SMALL_STATE(15)] = 809,
  [SMALL_STATE(16)] = 859,
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
  [SMALL_STATE(51)] = 2484,
  [SMALL_STATE(52)] = 2514,
  [SMALL_STATE(53)] = 2544,
  [SMALL_STATE(54)] = 2563,
  [SMALL_STATE(55)] = 2582,
  [SMALL_STATE(56)] = 2601,
  [SMALL_STATE(57)] = 2625,
  [SMALL_STATE(58)] = 2646,
  [SMALL_STATE(59)] = 2667,
  [SMALL_STATE(60)] = 2682,
  [SMALL_STATE(61)] = 2695,
  [SMALL_STATE(62)] = 2708,
  [SMALL_STATE(63)] = 2721,
  [SMALL_STATE(64)] = 2734,
  [SMALL_STATE(65)] = 2747,
  [SMALL_STATE(66)] = 2760,
  [SMALL_STATE(67)] = 2773,
  [SMALL_STATE(68)] = 2786,
  [SMALL_STATE(69)] = 2799,
  [SMALL_STATE(70)] = 2812,
  [SMALL_STATE(71)] = 2825,
  [SMALL_STATE(72)] = 2838,
  [SMALL_STATE(73)] = 2851,
  [SMALL_STATE(74)] = 2861,
  [SMALL_STATE(75)] = 2871,
  [SMALL_STATE(76)] = 2881,
  [SMALL_STATE(77)] = 2891,
  [SMALL_STATE(78)] = 2901,
  [SMALL_STATE(79)] = 2911,
  [SMALL_STATE(80)] = 2921,
  [SMALL_STATE(81)] = 2931,
  [SMALL_STATE(82)] = 2939,
  [SMALL_STATE(83)] = 2949,
  [SMALL_STATE(84)] = 2957,
  [SMALL_STATE(85)] = 2965,
  [SMALL_STATE(86)] = 2975,
  [SMALL_STATE(87)] = 2983,
  [SMALL_STATE(88)] = 2993,
  [SMALL_STATE(89)] = 3001,
  [SMALL_STATE(90)] = 3011,
  [SMALL_STATE(91)] = 3021,
  [SMALL_STATE(92)] = 3029,
  [SMALL_STATE(93)] = 3037,
  [SMALL_STATE(94)] = 3045,
  [SMALL_STATE(95)] = 3053,
  [SMALL_STATE(96)] = 3063,
  [SMALL_STATE(97)] = 3071,
  [SMALL_STATE(98)] = 3081,
  [SMALL_STATE(99)] = 3091,
  [SMALL_STATE(100)] = 3101,
  [SMALL_STATE(101)] = 3111,
  [SMALL_STATE(102)] = 3121,
  [SMALL_STATE(103)] = 3131,
  [SMALL_STATE(104)] = 3139,
  [SMALL_STATE(105)] = 3149,
  [SMALL_STATE(106)] = 3159,
  [SMALL_STATE(107)] = 3167,
  [SMALL_STATE(108)] = 3174,
  [SMALL_STATE(109)] = 3181,
  [SMALL_STATE(110)] = 3188,
  [SMALL_STATE(111)] = 3195,
  [SMALL_STATE(112)] = 3202,
  [SMALL_STATE(113)] = 3209,
  [SMALL_STATE(114)] = 3216,
  [SMALL_STATE(115)] = 3223,
  [SMALL_STATE(116)] = 3230,
  [SMALL_STATE(117)] = 3237,
  [SMALL_STATE(118)] = 3244,
  [SMALL_STATE(119)] = 3251,
  [SMALL_STATE(120)] = 3258,
  [SMALL_STATE(121)] = 3265,
  [SMALL_STATE(122)] = 3272,
  [SMALL_STATE(123)] = 3279,
  [SMALL_STATE(124)] = 3286,
  [SMALL_STATE(125)] = 3293,
  [SMALL_STATE(126)] = 3300,
  [SMALL_STATE(127)] = 3307,
  [SMALL_STATE(128)] = 3314,
  [SMALL_STATE(129)] = 3321,
  [SMALL_STATE(130)] = 3328,
  [SMALL_STATE(131)] = 3335,
  [SMALL_STATE(132)] = 3342,
  [SMALL_STATE(133)] = 3349,
  [SMALL_STATE(134)] = 3356,
  [SMALL_STATE(135)] = 3363,
  [SMALL_STATE(136)] = 3370,
  [SMALL_STATE(137)] = 3377,
  [SMALL_STATE(138)] = 3384,
  [SMALL_STATE(139)] = 3391,
  [SMALL_STATE(140)] = 3398,
  [SMALL_STATE(141)] = 3405,
  [SMALL_STATE(142)] = 3412,
  [SMALL_STATE(143)] = 3419,
  [SMALL_STATE(144)] = 3426,
  [SMALL_STATE(145)] = 3433,
  [SMALL_STATE(146)] = 3440,
  [SMALL_STATE(147)] = 3447,
  [SMALL_STATE(148)] = 3454,
  [SMALL_STATE(149)] = 3461,
  [SMALL_STATE(150)] = 3468,
  [SMALL_STATE(151)] = 3475,
  [SMALL_STATE(152)] = 3482,
  [SMALL_STATE(153)] = 3489,
  [SMALL_STATE(154)] = 3496,
  [SMALL_STATE(155)] = 3503,
  [SMALL_STATE(156)] = 3510,
  [SMALL_STATE(157)] = 3517,
  [SMALL_STATE(158)] = 3524,
  [SMALL_STATE(159)] = 3531,
  [SMALL_STATE(160)] = 3538,
  [SMALL_STATE(161)] = 3545,
  [SMALL_STATE(162)] = 3552,
  [SMALL_STATE(163)] = 3559,
  [SMALL_STATE(164)] = 3566,
  [SMALL_STATE(165)] = 3573,
  [SMALL_STATE(166)] = 3580,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sub_c_content, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2, 0, 0), SHIFT_REPEAT(8),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2, 0, 0), SHIFT_REPEAT(18),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2, 0, 0), SHIFT_REPEAT(13),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2, 0, 0), SHIFT_REPEAT(15),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2, 0, 0), SHIFT_REPEAT(164),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2, 0, 0), SHIFT_REPEAT(165),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2, 0, 0), SHIFT_REPEAT(5),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2, 0, 0), SHIFT_REPEAT(12),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2, 0, 0), SHIFT_REPEAT(162),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2, 0, 0), SHIFT_REPEAT(163),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 2, 0, 0), SHIFT_REPEAT(6),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fmt_sub, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fmt_sub, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_sub, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_sub, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sub_content, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2, 0, 0), SHIFT_REPEAT(21),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2, 0, 0), SHIFT_REPEAT(26),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2, 0, 0), SHIFT_REPEAT(24),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2, 0, 0), SHIFT_REPEAT(160),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2, 0, 0), SHIFT_REPEAT(161),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2, 0, 0), SHIFT_REPEAT(20),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2, 0, 0), SHIFT_REPEAT(22),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2, 0, 0), SHIFT_REPEAT(135),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2, 0, 0), SHIFT_REPEAT(158),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__sub_content, 2, 0, 0), SHIFT_REPEAT(19),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sub_c_content, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__sub_c_content, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_sub, 5, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_sub, 5, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_c_escape, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_c_escape, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_sub, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_sub, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fmt_sub, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fmt_sub, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fmt_sub, 5, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fmt_sub, 5, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sub_content, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__sub_content, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rules_repeat1, 2, 0, 0),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_repeat1, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__c_content, 2, 0, 0),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__c_content, 2, 0, 0), SHIFT_REPEAT(54),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__c_content, 2, 0, 0), SHIFT_REPEAT(55),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__c_content, 2, 0, 0), SHIFT_REPEAT(53),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__c_content, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__c_content, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat2, 2, 0, 0),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sub_value, 3, 0, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sub_value, 3, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3, 0, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4, 0, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sub_value, 4, 0, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 6, 0, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6, 0, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sub_value, 2, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kernel_param, 1, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var, 1, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [542] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_udev(void) {
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

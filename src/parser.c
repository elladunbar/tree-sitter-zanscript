#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DEFINE = 1,
  anon_sym_define = 2,
  anon_sym_Define = 3,
  anon_sym_INCLUDE = 4,
  anon_sym_include = 5,
  anon_sym_Include = 6,
  anon_sym_ACTION = 7,
  anon_sym_action = 8,
  anon_sym_Action = 9,
  anon_sym_COMPLETE = 10,
  anon_sym_complete = 11,
  anon_sym_Complete = 12,
  anon_sym_IF = 13,
  anon_sym_if = 14,
  anon_sym_If = 15,
  anon_sym_ELSE = 16,
  anon_sym_else = 17,
  anon_sym_Else = 18,
  anon_sym_ENDIF = 19,
  anon_sym_endif = 20,
  anon_sym_Endif = 21,
  anon_sym_EndIf = 22,
  anon_sym_WHILE = 23,
  anon_sym_while = 24,
  anon_sym_While = 25,
  anon_sym_ENDWHILE = 26,
  anon_sym_endwhile = 27,
  anon_sym_Endwhile = 28,
  anon_sym_LT = 29,
  anon_sym_GT = 30,
  anon_sym_EQ = 31,
  anon_sym_LPAREN = 32,
  anon_sym_COMMA = 33,
  anon_sym_RPAREN = 34,
  anon_sym_PLUS = 35,
  anon_sym_DASH = 36,
  anon_sym_STAR = 37,
  anon_sym_SLASH = 38,
  anon_sym_POUND = 39,
  aux_sym_comment_token1 = 40,
  sym_variable = 41,
  sym_match = 42,
  sym_identifier = 43,
  sym_number = 44,
  sym_string = 45,
  sym_translation_unit = 46,
  sym__top_level_item = 47,
  sym__directive = 48,
  sym_define = 49,
  sym_include = 50,
  sym__command = 51,
  sym_action = 52,
  sym__control = 53,
  sym_branch = 54,
  sym_loop = 55,
  sym_comparison = 56,
  sym_block = 57,
  sym__statement = 58,
  sym_function = 59,
  sym__argument = 60,
  sym_assignment = 61,
  sym__expression = 62,
  sym_comment = 63,
  aux_sym_translation_unit_repeat1 = 64,
  aux_sym_block_repeat1 = 65,
  aux_sym_function_repeat1 = 66,
  aux_sym__expression_repeat1 = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DEFINE] = "DEFINE",
  [anon_sym_define] = "define",
  [anon_sym_Define] = "Define",
  [anon_sym_INCLUDE] = "INCLUDE",
  [anon_sym_include] = "include",
  [anon_sym_Include] = "Include",
  [anon_sym_ACTION] = "ACTION",
  [anon_sym_action] = "action",
  [anon_sym_Action] = "Action",
  [anon_sym_COMPLETE] = "COMPLETE",
  [anon_sym_complete] = "complete",
  [anon_sym_Complete] = "Complete",
  [anon_sym_IF] = "IF",
  [anon_sym_if] = "if",
  [anon_sym_If] = "If",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_else] = "else",
  [anon_sym_Else] = "Else",
  [anon_sym_ENDIF] = "ENDIF",
  [anon_sym_endif] = "endif",
  [anon_sym_Endif] = "Endif",
  [anon_sym_EndIf] = "EndIf",
  [anon_sym_WHILE] = "WHILE",
  [anon_sym_while] = "while",
  [anon_sym_While] = "While",
  [anon_sym_ENDWHILE] = "ENDWHILE",
  [anon_sym_endwhile] = "endwhile",
  [anon_sym_Endwhile] = "Endwhile",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_variable] = "variable",
  [sym_match] = "match",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_translation_unit] = "translation_unit",
  [sym__top_level_item] = "_top_level_item",
  [sym__directive] = "_directive",
  [sym_define] = "define",
  [sym_include] = "include",
  [sym__command] = "_command",
  [sym_action] = "action",
  [sym__control] = "_control",
  [sym_branch] = "branch",
  [sym_loop] = "loop",
  [sym_comparison] = "comparison",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_function] = "function",
  [sym__argument] = "_argument",
  [sym_assignment] = "assignment",
  [sym__expression] = "_expression",
  [sym_comment] = "comment",
  [aux_sym_translation_unit_repeat1] = "translation_unit_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym__expression_repeat1] = "_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DEFINE] = anon_sym_DEFINE,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_Define] = anon_sym_Define,
  [anon_sym_INCLUDE] = anon_sym_INCLUDE,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_Include] = anon_sym_Include,
  [anon_sym_ACTION] = anon_sym_ACTION,
  [anon_sym_action] = anon_sym_action,
  [anon_sym_Action] = anon_sym_Action,
  [anon_sym_COMPLETE] = anon_sym_COMPLETE,
  [anon_sym_complete] = anon_sym_complete,
  [anon_sym_Complete] = anon_sym_Complete,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_If] = anon_sym_If,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_Else] = anon_sym_Else,
  [anon_sym_ENDIF] = anon_sym_ENDIF,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_Endif] = anon_sym_Endif,
  [anon_sym_EndIf] = anon_sym_EndIf,
  [anon_sym_WHILE] = anon_sym_WHILE,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_While] = anon_sym_While,
  [anon_sym_ENDWHILE] = anon_sym_ENDWHILE,
  [anon_sym_endwhile] = anon_sym_endwhile,
  [anon_sym_Endwhile] = anon_sym_Endwhile,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_variable] = sym_variable,
  [sym_match] = sym_match,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_translation_unit] = sym_translation_unit,
  [sym__top_level_item] = sym__top_level_item,
  [sym__directive] = sym__directive,
  [sym_define] = sym_define,
  [sym_include] = sym_include,
  [sym__command] = sym__command,
  [sym_action] = sym_action,
  [sym__control] = sym__control,
  [sym_branch] = sym_branch,
  [sym_loop] = sym_loop,
  [sym_comparison] = sym_comparison,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_function] = sym_function,
  [sym__argument] = sym__argument,
  [sym_assignment] = sym_assignment,
  [sym__expression] = sym__expression,
  [sym_comment] = sym_comment,
  [aux_sym_translation_unit_repeat1] = aux_sym_translation_unit_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym__expression_repeat1] = aux_sym__expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DEFINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INCLUDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMPLETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Complete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_If] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENDIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EndIf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_While] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENDWHILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endwhile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Endwhile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_translation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_item] = {
    .visible = false,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym__command] = {
    .visible = false,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym__control] = {
    .visible = false,
    .named = true,
  },
  [sym_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_translation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 4,
  [8] = 5,
  [9] = 5,
  [10] = 4,
  [11] = 4,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 12,
  [17] = 14,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 19,
  [24] = 21,
  [25] = 22,
  [26] = 26,
  [27] = 19,
  [28] = 18,
  [29] = 18,
  [30] = 19,
  [31] = 21,
  [32] = 22,
  [33] = 26,
  [34] = 19,
  [35] = 22,
  [36] = 22,
  [37] = 21,
  [38] = 21,
  [39] = 18,
  [40] = 14,
  [41] = 12,
  [42] = 13,
  [43] = 14,
  [44] = 13,
  [45] = 14,
  [46] = 12,
  [47] = 13,
  [48] = 26,
  [49] = 12,
  [50] = 26,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 52,
  [61] = 51,
  [62] = 56,
  [63] = 63,
  [64] = 64,
  [65] = 53,
  [66] = 64,
  [67] = 58,
  [68] = 57,
  [69] = 26,
  [70] = 63,
  [71] = 54,
  [72] = 54,
  [73] = 52,
  [74] = 56,
  [75] = 53,
  [76] = 64,
  [77] = 57,
  [78] = 58,
  [79] = 51,
  [80] = 63,
  [81] = 63,
  [82] = 51,
  [83] = 57,
  [84] = 58,
  [85] = 53,
  [86] = 64,
  [87] = 56,
  [88] = 54,
  [89] = 52,
  [90] = 54,
  [91] = 52,
  [92] = 57,
  [93] = 56,
  [94] = 64,
  [95] = 51,
  [96] = 63,
  [97] = 53,
  [98] = 58,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 100,
  [104] = 104,
  [105] = 101,
  [106] = 100,
  [107] = 104,
  [108] = 104,
  [109] = 100,
  [110] = 104,
  [111] = 101,
  [112] = 112,
  [113] = 101,
  [114] = 100,
  [115] = 104,
  [116] = 116,
  [117] = 117,
  [118] = 117,
  [119] = 117,
  [120] = 120,
  [121] = 116,
  [122] = 120,
  [123] = 120,
  [124] = 120,
  [125] = 116,
  [126] = 117,
  [127] = 120,
  [128] = 116,
  [129] = 117,
  [130] = 116,
  [131] = 131,
  [132] = 131,
  [133] = 131,
  [134] = 131,
  [135] = 135,
  [136] = 136,
  [137] = 131,
  [138] = 138,
  [139] = 138,
  [140] = 138,
  [141] = 138,
  [142] = 138,
  [143] = 143,
  [144] = 144,
  [145] = 144,
  [146] = 146,
  [147] = 144,
  [148] = 144,
  [149] = 146,
  [150] = 146,
  [151] = 146,
  [152] = 144,
  [153] = 146,
  [154] = 154,
  [155] = 155,
  [156] = 155,
  [157] = 154,
  [158] = 155,
  [159] = 154,
  [160] = 154,
  [161] = 155,
  [162] = 155,
  [163] = 154,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 167,
  [170] = 170,
  [171] = 164,
  [172] = 167,
  [173] = 170,
  [174] = 170,
  [175] = 165,
  [176] = 176,
  [177] = 167,
  [178] = 167,
  [179] = 170,
  [180] = 165,
  [181] = 164,
  [182] = 164,
  [183] = 165,
  [184] = 170,
  [185] = 185,
  [186] = 165,
  [187] = 187,
  [188] = 164,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      ADVANCE_MAP(
        '#', 115,
        '(', 108,
        ')', 110,
        '*', 113,
        '+', 111,
        ',', 109,
        '-', 112,
        '/', 114,
        '<', 105,
        '=', 107,
        '>', 106,
        '@', 61,
        'A', 120,
        'C', 159,
        'D', 126,
        'E', 148,
        'I', 134,
        'W', 138,
        'a', 168,
        'c', 233,
        'd', 192,
        'e', 219,
        'i', 193,
        'w', 200,
        '"', 58,
        '\'', 58,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 115,
        '*', 113,
        '+', 111,
        '-', 112,
        '/', 114,
        '@', 61,
        'A', 120,
        'C', 159,
        'I', 135,
        'W', 138,
        'a', 168,
        'c', 233,
        'i', 194,
        'w', 200,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 115,
        '*', 113,
        '+', 111,
        '-', 112,
        '/', 114,
        '@', 61,
        'A', 120,
        'E', 156,
        'I', 135,
        'W', 138,
        'a', 168,
        'e', 227,
        'i', 194,
        'w', 200,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '#', 115,
        '*', 113,
        '+', 111,
        '-', 112,
        '/', 114,
        '@', 61,
        'A', 120,
        'E', 149,
        'I', 135,
        'W', 138,
        'a', 168,
        'e', 220,
        'i', 194,
        'w', 200,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '#', 115,
        '*', 113,
        '+', 111,
        '-', 112,
        '/', 114,
        '@', 61,
        'A', 120,
        'E', 157,
        'I', 135,
        'W', 138,
        'a', 168,
        'e', 230,
        'i', 194,
        'w', 200,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '#', 115,
        '@', 61,
        'A', 120,
        'I', 135,
        'W', 138,
        'a', 168,
        'i', 194,
        'w', 200,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(22);
      if (lookahead == 'E') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 13:
      if (lookahead == 'F') ADVANCE(88);
      END_STATE();
    case 14:
      if (lookahead == 'H') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(13);
      if (lookahead == 'W') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'M') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'P') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'S') ADVANCE(9);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(92);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 58:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      ADVANCE_MAP(
        '#', 115,
        '*', 113,
        '+', 111,
        '-', 112,
        '/', 114,
        '@', 61,
        'A', 120,
        'D', 126,
        'I', 134,
        'W', 138,
        'a', 168,
        'd', 192,
        'i', 193,
        'w', 200,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_define);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Define);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_Include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_ACTION);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_action);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_Action);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMPLETE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMPLETE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_complete);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_complete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_Complete);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_Complete);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_IF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_If);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_Else);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ENDIF);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ENDIF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_endif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_Endif);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_Endif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_EndIf);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EndIf);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_WHILE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_While);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ENDWHILE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ENDWHILE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_endwhile);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_endwhile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_Endwhile);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_Endwhile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_match);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(163);
      if (lookahead == 'c') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(79);
      if (lookahead == 'N') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(146);
      if (lookahead == 'h') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'W') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'w') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(162);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(162);
      if (lookahead == 'N') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(124);
      if (lookahead == 'n') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'w') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 62},
  [2] = {.lex_state = 62},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 62},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 62},
  [17] = {.lex_state = 62},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 62},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 62},
  [53] = {.lex_state = 62},
  [54] = {.lex_state = 62},
  [55] = {.lex_state = 62},
  [56] = {.lex_state = 62},
  [57] = {.lex_state = 62},
  [58] = {.lex_state = 62},
  [59] = {.lex_state = 62},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 62},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 62},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 62},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 116},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 59},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 116},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 116},
  [182] = {.lex_state = 116},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 59},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 116},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DEFINE] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_Define] = ACTIONS(1),
    [anon_sym_INCLUDE] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_Include] = ACTIONS(1),
    [anon_sym_ACTION] = ACTIONS(1),
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_Action] = ACTIONS(1),
    [anon_sym_COMPLETE] = ACTIONS(1),
    [anon_sym_complete] = ACTIONS(1),
    [anon_sym_Complete] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_If] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_Else] = ACTIONS(1),
    [anon_sym_ENDIF] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_Endif] = ACTIONS(1),
    [anon_sym_EndIf] = ACTIONS(1),
    [anon_sym_WHILE] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_While] = ACTIONS(1),
    [anon_sym_ENDWHILE] = ACTIONS(1),
    [anon_sym_endwhile] = ACTIONS(1),
    [anon_sym_Endwhile] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_translation_unit] = STATE(168),
    [sym__top_level_item] = STATE(2),
    [sym__directive] = STATE(2),
    [sym_define] = STATE(2),
    [sym_include] = STATE(2),
    [sym__command] = STATE(2),
    [sym_action] = STATE(2),
    [sym__control] = STATE(2),
    [sym_branch] = STATE(2),
    [sym_loop] = STATE(2),
    [sym__statement] = STATE(2),
    [sym_function] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_comment] = STATE(2),
    [aux_sym_translation_unit_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DEFINE] = ACTIONS(5),
    [anon_sym_define] = ACTIONS(5),
    [anon_sym_Define] = ACTIONS(5),
    [anon_sym_INCLUDE] = ACTIONS(7),
    [anon_sym_include] = ACTIONS(7),
    [anon_sym_Include] = ACTIONS(7),
    [anon_sym_ACTION] = ACTIONS(9),
    [anon_sym_action] = ACTIONS(9),
    [anon_sym_Action] = ACTIONS(9),
    [anon_sym_IF] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_If] = ACTIONS(11),
    [anon_sym_WHILE] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_While] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [sym_variable] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_variable,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 3,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
    ACTIONS(7), 3,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
    ACTIONS(9), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(11), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(13), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(3), 14,
      sym__top_level_item,
      sym__directive,
      sym_define,
      sym_include,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_translation_unit_repeat1,
  [54] = 10,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_variable,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(25), 3,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
    ACTIONS(28), 3,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
    ACTIONS(31), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(34), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(37), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(3), 14,
      sym__top_level_item,
      sym__directive,
      sym_define,
      sym_include,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_translation_unit_repeat1,
  [108] = 8,
    ACTIONS(60), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      sym_variable,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(49), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(52), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(57), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    ACTIONS(55), 7,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
    STATE(4), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [154] = 8,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_variable,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(69), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(71), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(75), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    ACTIONS(73), 7,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
    STATE(4), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [200] = 8,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      sym_variable,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(83), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(85), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(87), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    ACTIONS(73), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
    STATE(7), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [243] = 8,
    ACTIONS(104), 1,
      anon_sym_POUND,
    ACTIONS(107), 1,
      sym_variable,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(95), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(98), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(101), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    ACTIONS(55), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
    STATE(7), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [286] = 8,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      sym_variable,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(73), 3,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
    ACTIONS(113), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(115), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(117), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(11), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [328] = 8,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_variable,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(73), 3,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
    ACTIONS(125), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(127), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(129), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(10), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [370] = 8,
    ACTIONS(146), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      sym_variable,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(55), 3,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
    ACTIONS(137), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(140), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(143), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(10), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [412] = 8,
    ACTIONS(164), 1,
      anon_sym_POUND,
    ACTIONS(167), 1,
      sym_variable,
    ACTIONS(170), 1,
      sym_identifier,
    ACTIONS(55), 3,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
    ACTIONS(155), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(158), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(161), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(11), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [454] = 4,
    STATE(15), 1,
      aux_sym__expression_repeat1,
    ACTIONS(177), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(175), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(173), 17,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [487] = 4,
    STATE(13), 1,
      aux_sym__expression_repeat1,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(183), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(181), 16,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [520] = 4,
    STATE(12), 1,
      aux_sym__expression_repeat1,
    ACTIONS(188), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(175), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(186), 17,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [553] = 4,
    STATE(15), 1,
      aux_sym__expression_repeat1,
    ACTIONS(179), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(190), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(181), 17,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [586] = 4,
    STATE(13), 1,
      aux_sym__expression_repeat1,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(193), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(173), 16,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [619] = 4,
    STATE(16), 1,
      aux_sym__expression_repeat1,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(193), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(186), 16,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [652] = 8,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      sym_variable,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(139), 1,
      sym_block,
    ACTIONS(83), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(85), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(87), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(6), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [692] = 8,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      sym_variable,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(151), 1,
      sym_block,
    ACTIONS(113), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(115), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(117), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(8), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [732] = 8,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      sym_variable,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(138), 1,
      sym_block,
    ACTIONS(83), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(85), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(87), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(6), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [772] = 8,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_variable,
    ACTIONS(135), 1,
      sym_identifier,
    STATE(147), 1,
      sym_block,
    ACTIONS(125), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(127), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(129), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(9), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [812] = 8,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_variable,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(115), 1,
      sym_block,
    ACTIONS(69), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(71), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(75), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(5), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [852] = 8,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      sym_variable,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(146), 1,
      sym_block,
    ACTIONS(113), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(115), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(117), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(8), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [892] = 8,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_variable,
    ACTIONS(135), 1,
      sym_identifier,
    STATE(152), 1,
      sym_block,
    ACTIONS(125), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(127), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(129), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(9), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [932] = 8,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_variable,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(104), 1,
      sym_block,
    ACTIONS(69), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(71), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(75), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(5), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [972] = 2,
    ACTIONS(179), 7,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(181), 16,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1000] = 8,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      sym_variable,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(150), 1,
      sym_block,
    ACTIONS(113), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(115), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(117), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(8), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [1040] = 8,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      sym_variable,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(142), 1,
      sym_block,
    ACTIONS(83), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(85), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(87), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(6), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [1080] = 8,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      sym_variable,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(140), 1,
      sym_block,
    ACTIONS(83), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(85), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(87), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(6), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [1120] = 8,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      sym_variable,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(149), 1,
      sym_block,
    ACTIONS(113), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(115), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(117), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(8), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [1160] = 8,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_variable,
    ACTIONS(135), 1,
      sym_identifier,
    STATE(144), 1,
      sym_block,
    ACTIONS(125), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(127), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(129), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(9), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [1200] = 8,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_variable,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(108), 1,
      sym_block,
    ACTIONS(69), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(71), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(75), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(5), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [1240] = 2,
    ACTIONS(179), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(181), 17,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1268] = 8,
    ACTIONS(119), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      sym_variable,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(153), 1,
      sym_block,
    ACTIONS(113), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(115), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(117), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(8), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [1308] = 8,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_variable,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(110), 1,
      sym_block,
    ACTIONS(69), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(71), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(75), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(5), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [1348] = 8,
    ACTIONS(77), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      sym_variable,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(107), 1,
      sym_block,
    ACTIONS(69), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(71), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(75), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(5), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [1388] = 8,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_variable,
    ACTIONS(135), 1,
      sym_identifier,
    STATE(148), 1,
      sym_block,
    ACTIONS(125), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(127), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(129), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(9), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [1428] = 8,
    ACTIONS(131), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      sym_variable,
    ACTIONS(135), 1,
      sym_identifier,
    STATE(145), 1,
      sym_block,
    ACTIONS(125), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(127), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(129), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(9), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [1468] = 8,
    ACTIONS(89), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      sym_variable,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(141), 1,
      sym_block,
    ACTIONS(83), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(85), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(87), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(6), 10,
      sym__command,
      sym_action,
      sym__control,
      sym_branch,
      sym_loop,
      sym__statement,
      sym_function,
      sym_assignment,
      sym_comment,
      aux_sym_block_repeat1,
  [1508] = 4,
    STATE(41), 1,
      aux_sym__expression_repeat1,
    ACTIONS(188), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(195), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(186), 14,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1538] = 4,
    STATE(42), 1,
      aux_sym__expression_repeat1,
    ACTIONS(177), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(195), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(173), 14,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1568] = 4,
    STATE(42), 1,
      aux_sym__expression_repeat1,
    ACTIONS(179), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(197), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(181), 14,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1598] = 4,
    STATE(49), 1,
      aux_sym__expression_repeat1,
    ACTIONS(188), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(200), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(186), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1627] = 4,
    STATE(44), 1,
      aux_sym__expression_repeat1,
    ACTIONS(179), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(202), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(181), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1656] = 4,
    STATE(46), 1,
      aux_sym__expression_repeat1,
    ACTIONS(188), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(205), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(186), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [1685] = 4,
    STATE(47), 1,
      aux_sym__expression_repeat1,
    ACTIONS(177), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(205), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(173), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [1714] = 4,
    STATE(47), 1,
      aux_sym__expression_repeat1,
    ACTIONS(179), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(207), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(181), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [1743] = 2,
    ACTIONS(179), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(181), 14,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1768] = 4,
    STATE(44), 1,
      aux_sym__expression_repeat1,
    ACTIONS(177), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(200), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(173), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1797] = 2,
    ACTIONS(179), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(181), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [1821] = 2,
    ACTIONS(212), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(210), 17,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1845] = 2,
    ACTIONS(214), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(216), 16,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1869] = 2,
    ACTIONS(218), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(220), 16,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1893] = 2,
    ACTIONS(222), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(224), 16,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1917] = 2,
    ACTIONS(226), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(228), 16,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1941] = 2,
    ACTIONS(230), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(232), 16,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1965] = 2,
    ACTIONS(234), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(236), 16,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [1989] = 2,
    ACTIONS(238), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(240), 16,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2013] = 2,
    ACTIONS(242), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(244), 16,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2037] = 2,
    ACTIONS(214), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(216), 17,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2061] = 2,
    ACTIONS(212), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(210), 16,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2085] = 2,
    ACTIONS(230), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(232), 17,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2109] = 2,
    ACTIONS(246), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(248), 16,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2133] = 2,
    ACTIONS(252), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(250), 17,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2157] = 2,
    ACTIONS(218), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(220), 17,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2181] = 2,
    ACTIONS(252), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(250), 16,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2205] = 2,
    ACTIONS(238), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(240), 17,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2229] = 2,
    ACTIONS(234), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(236), 17,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2253] = 2,
    ACTIONS(179), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(181), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2277] = 2,
    ACTIONS(246), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(248), 17,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2301] = 2,
    ACTIONS(222), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(224), 17,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2325] = 2,
    ACTIONS(222), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(224), 14,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2346] = 2,
    ACTIONS(214), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(216), 14,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2367] = 2,
    ACTIONS(230), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(232), 14,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2388] = 2,
    ACTIONS(218), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(220), 14,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2409] = 2,
    ACTIONS(252), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(250), 14,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2430] = 2,
    ACTIONS(234), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(236), 14,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2451] = 2,
    ACTIONS(238), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(240), 14,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2472] = 2,
    ACTIONS(212), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(210), 14,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2493] = 2,
    ACTIONS(246), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(248), 14,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2514] = 2,
    ACTIONS(246), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(248), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2534] = 2,
    ACTIONS(212), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(210), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2554] = 2,
    ACTIONS(234), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(236), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2574] = 2,
    ACTIONS(238), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(240), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [2594] = 2,
    ACTIONS(218), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(220), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [2614] = 2,
    ACTIONS(252), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(250), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [2634] = 2,
    ACTIONS(230), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(232), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [2654] = 2,
    ACTIONS(222), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(224), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2674] = 2,
    ACTIONS(214), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(216), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [2694] = 2,
    ACTIONS(222), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(224), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [2714] = 2,
    ACTIONS(214), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(216), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2734] = 2,
    ACTIONS(234), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(236), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [2754] = 2,
    ACTIONS(230), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(232), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2774] = 2,
    ACTIONS(252), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(250), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2794] = 2,
    ACTIONS(212), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(210), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [2814] = 2,
    ACTIONS(246), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(248), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [2834] = 2,
    ACTIONS(218), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(220), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2854] = 2,
    ACTIONS(238), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(240), 13,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2874] = 2,
    ACTIONS(256), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(254), 10,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
      sym_identifier,
  [2891] = 4,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_function_repeat1,
    STATE(154), 1,
      sym__argument,
    ACTIONS(260), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [2907] = 4,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_function_repeat1,
    STATE(161), 1,
      sym__argument,
    ACTIONS(264), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [2923] = 4,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_function_repeat1,
    STATE(156), 1,
      sym__argument,
    ACTIONS(268), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [2939] = 4,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_function_repeat1,
    STATE(160), 1,
      sym__argument,
    ACTIONS(272), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [2955] = 2,
    ACTIONS(274), 3,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
    ACTIONS(276), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
  [2967] = 4,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_function_repeat1,
    STATE(158), 1,
      sym__argument,
    ACTIONS(280), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [2983] = 4,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_function_repeat1,
    STATE(157), 1,
      sym__argument,
    ACTIONS(284), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [2999] = 2,
    ACTIONS(286), 3,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
    ACTIONS(288), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
  [3011] = 2,
    ACTIONS(290), 3,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
    ACTIONS(292), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
  [3023] = 4,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_function_repeat1,
    STATE(159), 1,
      sym__argument,
    ACTIONS(296), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3039] = 2,
    ACTIONS(298), 3,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
    ACTIONS(300), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
  [3051] = 4,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_function_repeat1,
    STATE(155), 1,
      sym__argument,
    ACTIONS(304), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3067] = 4,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_function_repeat1,
    STATE(187), 1,
      sym__argument,
    ACTIONS(308), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3083] = 4,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_function_repeat1,
    STATE(162), 1,
      sym__argument,
    ACTIONS(313), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3099] = 4,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_function_repeat1,
    STATE(163), 1,
      sym__argument,
    ACTIONS(317), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3115] = 2,
    ACTIONS(319), 3,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
    ACTIONS(321), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
  [3127] = 3,
    STATE(45), 1,
      sym__argument,
    STATE(85), 1,
      sym__expression,
    ACTIONS(323), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3140] = 3,
    STATE(35), 1,
      sym_comparison,
    STATE(143), 1,
      sym__argument,
    ACTIONS(325), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3153] = 3,
    STATE(32), 1,
      sym_comparison,
    STATE(143), 1,
      sym__argument,
    ACTIONS(325), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3166] = 3,
    STATE(22), 1,
      sym_comparison,
    STATE(143), 1,
      sym__argument,
    ACTIONS(325), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3179] = 3,
    STATE(24), 1,
      sym_comparison,
    STATE(143), 1,
      sym__argument,
    ACTIONS(325), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3192] = 3,
    STATE(14), 1,
      sym__argument,
    STATE(65), 1,
      sym__expression,
    ACTIONS(327), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3205] = 3,
    STATE(37), 1,
      sym_comparison,
    STATE(143), 1,
      sym__argument,
    ACTIONS(325), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3218] = 3,
    STATE(21), 1,
      sym_comparison,
    STATE(143), 1,
      sym__argument,
    ACTIONS(325), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3231] = 3,
    STATE(31), 1,
      sym_comparison,
    STATE(143), 1,
      sym__argument,
    ACTIONS(325), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3244] = 3,
    STATE(17), 1,
      sym__argument,
    STATE(53), 1,
      sym__expression,
    ACTIONS(329), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3257] = 3,
    STATE(25), 1,
      sym_comparison,
    STATE(143), 1,
      sym__argument,
    ACTIONS(325), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3270] = 3,
    STATE(38), 1,
      sym_comparison,
    STATE(143), 1,
      sym__argument,
    ACTIONS(325), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3283] = 3,
    STATE(43), 1,
      sym__argument,
    STATE(97), 1,
      sym__expression,
    ACTIONS(331), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3296] = 3,
    STATE(36), 1,
      sym_comparison,
    STATE(143), 1,
      sym__argument,
    ACTIONS(325), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3309] = 3,
    STATE(40), 1,
      sym__argument,
    STATE(75), 1,
      sym__expression,
    ACTIONS(333), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3322] = 2,
    STATE(50), 1,
      sym__argument,
    ACTIONS(335), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3332] = 2,
    STATE(48), 1,
      sym__argument,
    ACTIONS(337), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3342] = 2,
    STATE(69), 1,
      sym__argument,
    ACTIONS(339), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3352] = 2,
    STATE(33), 1,
      sym__argument,
    ACTIONS(341), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3362] = 2,
    STATE(99), 1,
      sym__argument,
    ACTIONS(343), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3372] = 1,
    ACTIONS(306), 5,
      anon_sym_RPAREN,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3380] = 2,
    STATE(26), 1,
      sym__argument,
    ACTIONS(345), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [3390] = 1,
    ACTIONS(347), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
  [3397] = 1,
    ACTIONS(349), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
  [3404] = 1,
    ACTIONS(351), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
  [3411] = 1,
    ACTIONS(353), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
  [3418] = 1,
    ACTIONS(355), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
  [3425] = 1,
    ACTIONS(357), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
  [3431] = 1,
    ACTIONS(359), 3,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
  [3437] = 1,
    ACTIONS(361), 3,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
  [3443] = 1,
    ACTIONS(363), 3,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
  [3449] = 1,
    ACTIONS(365), 3,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
  [3455] = 1,
    ACTIONS(367), 3,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
  [3461] = 1,
    ACTIONS(369), 3,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
  [3467] = 1,
    ACTIONS(371), 3,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
  [3473] = 1,
    ACTIONS(373), 3,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
  [3479] = 1,
    ACTIONS(375), 3,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
  [3485] = 1,
    ACTIONS(377), 3,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
  [3491] = 2,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
  [3498] = 2,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      anon_sym_COMMA,
  [3505] = 2,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      anon_sym_COMMA,
  [3512] = 2,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
  [3519] = 2,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      anon_sym_COMMA,
  [3526] = 2,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
  [3533] = 2,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
  [3540] = 2,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      anon_sym_COMMA,
  [3547] = 2,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      anon_sym_COMMA,
  [3554] = 2,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
  [3561] = 1,
    ACTIONS(391), 1,
      aux_sym_comment_token1,
  [3565] = 1,
    ACTIONS(393), 1,
      sym_identifier,
  [3569] = 1,
    ACTIONS(395), 1,
      sym_match,
  [3573] = 1,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
  [3577] = 1,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
  [3581] = 1,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
  [3585] = 1,
    ACTIONS(403), 1,
      anon_sym_EQ,
  [3589] = 1,
    ACTIONS(405), 1,
      aux_sym_comment_token1,
  [3593] = 1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
  [3597] = 1,
    ACTIONS(409), 1,
      anon_sym_EQ,
  [3601] = 1,
    ACTIONS(411), 1,
      anon_sym_EQ,
  [3605] = 1,
    ACTIONS(413), 1,
      sym_identifier,
  [3609] = 1,
    ACTIONS(415), 1,
      sym_identifier,
  [3613] = 1,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
  [3617] = 1,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
  [3621] = 1,
    ACTIONS(421), 1,
      anon_sym_EQ,
  [3625] = 1,
    ACTIONS(423), 1,
      sym_identifier,
  [3629] = 1,
    ACTIONS(425), 1,
      aux_sym_comment_token1,
  [3633] = 1,
    ACTIONS(427), 1,
      aux_sym_comment_token1,
  [3637] = 1,
    ACTIONS(429), 1,
      sym_identifier,
  [3641] = 1,
    ACTIONS(431), 1,
      anon_sym_EQ,
  [3645] = 1,
    ACTIONS(433), 1,
      sym_match,
  [3649] = 1,
    ACTIONS(435), 1,
      sym_identifier,
  [3653] = 1,
    ACTIONS(379), 1,
      anon_sym_COMMA,
  [3657] = 1,
    ACTIONS(437), 1,
      aux_sym_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 243,
  [SMALL_STATE(8)] = 286,
  [SMALL_STATE(9)] = 328,
  [SMALL_STATE(10)] = 370,
  [SMALL_STATE(11)] = 412,
  [SMALL_STATE(12)] = 454,
  [SMALL_STATE(13)] = 487,
  [SMALL_STATE(14)] = 520,
  [SMALL_STATE(15)] = 553,
  [SMALL_STATE(16)] = 586,
  [SMALL_STATE(17)] = 619,
  [SMALL_STATE(18)] = 652,
  [SMALL_STATE(19)] = 692,
  [SMALL_STATE(20)] = 732,
  [SMALL_STATE(21)] = 772,
  [SMALL_STATE(22)] = 812,
  [SMALL_STATE(23)] = 852,
  [SMALL_STATE(24)] = 892,
  [SMALL_STATE(25)] = 932,
  [SMALL_STATE(26)] = 972,
  [SMALL_STATE(27)] = 1000,
  [SMALL_STATE(28)] = 1040,
  [SMALL_STATE(29)] = 1080,
  [SMALL_STATE(30)] = 1120,
  [SMALL_STATE(31)] = 1160,
  [SMALL_STATE(32)] = 1200,
  [SMALL_STATE(33)] = 1240,
  [SMALL_STATE(34)] = 1268,
  [SMALL_STATE(35)] = 1308,
  [SMALL_STATE(36)] = 1348,
  [SMALL_STATE(37)] = 1388,
  [SMALL_STATE(38)] = 1428,
  [SMALL_STATE(39)] = 1468,
  [SMALL_STATE(40)] = 1508,
  [SMALL_STATE(41)] = 1538,
  [SMALL_STATE(42)] = 1568,
  [SMALL_STATE(43)] = 1598,
  [SMALL_STATE(44)] = 1627,
  [SMALL_STATE(45)] = 1656,
  [SMALL_STATE(46)] = 1685,
  [SMALL_STATE(47)] = 1714,
  [SMALL_STATE(48)] = 1743,
  [SMALL_STATE(49)] = 1768,
  [SMALL_STATE(50)] = 1797,
  [SMALL_STATE(51)] = 1821,
  [SMALL_STATE(52)] = 1845,
  [SMALL_STATE(53)] = 1869,
  [SMALL_STATE(54)] = 1893,
  [SMALL_STATE(55)] = 1917,
  [SMALL_STATE(56)] = 1941,
  [SMALL_STATE(57)] = 1965,
  [SMALL_STATE(58)] = 1989,
  [SMALL_STATE(59)] = 2013,
  [SMALL_STATE(60)] = 2037,
  [SMALL_STATE(61)] = 2061,
  [SMALL_STATE(62)] = 2085,
  [SMALL_STATE(63)] = 2109,
  [SMALL_STATE(64)] = 2133,
  [SMALL_STATE(65)] = 2157,
  [SMALL_STATE(66)] = 2181,
  [SMALL_STATE(67)] = 2205,
  [SMALL_STATE(68)] = 2229,
  [SMALL_STATE(69)] = 2253,
  [SMALL_STATE(70)] = 2277,
  [SMALL_STATE(71)] = 2301,
  [SMALL_STATE(72)] = 2325,
  [SMALL_STATE(73)] = 2346,
  [SMALL_STATE(74)] = 2367,
  [SMALL_STATE(75)] = 2388,
  [SMALL_STATE(76)] = 2409,
  [SMALL_STATE(77)] = 2430,
  [SMALL_STATE(78)] = 2451,
  [SMALL_STATE(79)] = 2472,
  [SMALL_STATE(80)] = 2493,
  [SMALL_STATE(81)] = 2514,
  [SMALL_STATE(82)] = 2534,
  [SMALL_STATE(83)] = 2554,
  [SMALL_STATE(84)] = 2574,
  [SMALL_STATE(85)] = 2594,
  [SMALL_STATE(86)] = 2614,
  [SMALL_STATE(87)] = 2634,
  [SMALL_STATE(88)] = 2654,
  [SMALL_STATE(89)] = 2674,
  [SMALL_STATE(90)] = 2694,
  [SMALL_STATE(91)] = 2714,
  [SMALL_STATE(92)] = 2734,
  [SMALL_STATE(93)] = 2754,
  [SMALL_STATE(94)] = 2774,
  [SMALL_STATE(95)] = 2794,
  [SMALL_STATE(96)] = 2814,
  [SMALL_STATE(97)] = 2834,
  [SMALL_STATE(98)] = 2854,
  [SMALL_STATE(99)] = 2874,
  [SMALL_STATE(100)] = 2891,
  [SMALL_STATE(101)] = 2907,
  [SMALL_STATE(102)] = 2923,
  [SMALL_STATE(103)] = 2939,
  [SMALL_STATE(104)] = 2955,
  [SMALL_STATE(105)] = 2967,
  [SMALL_STATE(106)] = 2983,
  [SMALL_STATE(107)] = 2999,
  [SMALL_STATE(108)] = 3011,
  [SMALL_STATE(109)] = 3023,
  [SMALL_STATE(110)] = 3039,
  [SMALL_STATE(111)] = 3051,
  [SMALL_STATE(112)] = 3067,
  [SMALL_STATE(113)] = 3083,
  [SMALL_STATE(114)] = 3099,
  [SMALL_STATE(115)] = 3115,
  [SMALL_STATE(116)] = 3127,
  [SMALL_STATE(117)] = 3140,
  [SMALL_STATE(118)] = 3153,
  [SMALL_STATE(119)] = 3166,
  [SMALL_STATE(120)] = 3179,
  [SMALL_STATE(121)] = 3192,
  [SMALL_STATE(122)] = 3205,
  [SMALL_STATE(123)] = 3218,
  [SMALL_STATE(124)] = 3231,
  [SMALL_STATE(125)] = 3244,
  [SMALL_STATE(126)] = 3257,
  [SMALL_STATE(127)] = 3270,
  [SMALL_STATE(128)] = 3283,
  [SMALL_STATE(129)] = 3296,
  [SMALL_STATE(130)] = 3309,
  [SMALL_STATE(131)] = 3322,
  [SMALL_STATE(132)] = 3332,
  [SMALL_STATE(133)] = 3342,
  [SMALL_STATE(134)] = 3352,
  [SMALL_STATE(135)] = 3362,
  [SMALL_STATE(136)] = 3372,
  [SMALL_STATE(137)] = 3380,
  [SMALL_STATE(138)] = 3390,
  [SMALL_STATE(139)] = 3397,
  [SMALL_STATE(140)] = 3404,
  [SMALL_STATE(141)] = 3411,
  [SMALL_STATE(142)] = 3418,
  [SMALL_STATE(143)] = 3425,
  [SMALL_STATE(144)] = 3431,
  [SMALL_STATE(145)] = 3437,
  [SMALL_STATE(146)] = 3443,
  [SMALL_STATE(147)] = 3449,
  [SMALL_STATE(148)] = 3455,
  [SMALL_STATE(149)] = 3461,
  [SMALL_STATE(150)] = 3467,
  [SMALL_STATE(151)] = 3473,
  [SMALL_STATE(152)] = 3479,
  [SMALL_STATE(153)] = 3485,
  [SMALL_STATE(154)] = 3491,
  [SMALL_STATE(155)] = 3498,
  [SMALL_STATE(156)] = 3505,
  [SMALL_STATE(157)] = 3512,
  [SMALL_STATE(158)] = 3519,
  [SMALL_STATE(159)] = 3526,
  [SMALL_STATE(160)] = 3533,
  [SMALL_STATE(161)] = 3540,
  [SMALL_STATE(162)] = 3547,
  [SMALL_STATE(163)] = 3554,
  [SMALL_STATE(164)] = 3561,
  [SMALL_STATE(165)] = 3565,
  [SMALL_STATE(166)] = 3569,
  [SMALL_STATE(167)] = 3573,
  [SMALL_STATE(168)] = 3577,
  [SMALL_STATE(169)] = 3581,
  [SMALL_STATE(170)] = 3585,
  [SMALL_STATE(171)] = 3589,
  [SMALL_STATE(172)] = 3593,
  [SMALL_STATE(173)] = 3597,
  [SMALL_STATE(174)] = 3601,
  [SMALL_STATE(175)] = 3605,
  [SMALL_STATE(176)] = 3609,
  [SMALL_STATE(177)] = 3613,
  [SMALL_STATE(178)] = 3617,
  [SMALL_STATE(179)] = 3621,
  [SMALL_STATE(180)] = 3625,
  [SMALL_STATE(181)] = 3629,
  [SMALL_STATE(182)] = 3633,
  [SMALL_STATE(183)] = 3637,
  [SMALL_STATE(184)] = 3641,
  [SMALL_STATE(185)] = 3645,
  [SMALL_STATE(186)] = 3649,
  [SMALL_STATE(187)] = 3653,
  [SMALL_STATE(188)] = 3657,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 4, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 4, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 4, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 6, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 6, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, 0, 0),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [399] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
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

TS_PUBLIC const TSLanguage *tree_sitter_zanscript(void) {
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

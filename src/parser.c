#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_DEFINE = 2,
  anon_sym_define = 3,
  anon_sym_Define = 4,
  anon_sym_INCLUDE = 5,
  anon_sym_include = 6,
  anon_sym_Include = 7,
  anon_sym_ACTION = 8,
  anon_sym_action = 9,
  anon_sym_Action = 10,
  anon_sym_COMPLETE = 11,
  anon_sym_complete = 12,
  anon_sym_Complete = 13,
  anon_sym_IF = 14,
  anon_sym_if = 15,
  anon_sym_If = 16,
  anon_sym_ELSE = 17,
  anon_sym_else = 18,
  anon_sym_Else = 19,
  anon_sym_ENDIF = 20,
  anon_sym_endif = 21,
  anon_sym_Endif = 22,
  anon_sym_EndIf = 23,
  anon_sym_WHILE = 24,
  anon_sym_while = 25,
  anon_sym_While = 26,
  anon_sym_ENDWHILE = 27,
  anon_sym_endwhile = 28,
  anon_sym_Endwhile = 29,
  anon_sym_LT = 30,
  anon_sym_GT = 31,
  anon_sym_EQ = 32,
  anon_sym_LPAREN = 33,
  anon_sym_COMMA = 34,
  anon_sym_RPAREN = 35,
  anon_sym_PLUS = 36,
  anon_sym_DASH = 37,
  anon_sym_STAR = 38,
  anon_sym_SLASH = 39,
  anon_sym_POUND = 40,
  aux_sym_comment_token1 = 41,
  sym_variable = 42,
  sym_match = 43,
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
  [sym_identifier] = "identifier",
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
  [sym_identifier] = sym_identifier,
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
  [sym_identifier] = {
    .visible = true,
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

enum ts_field_identifiers {
  field_find = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_find] = "find",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_find, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_name, 1},
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
  [19] = 8,
  [20] = 7,
  [21] = 6,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 22,
  [27] = 23,
  [28] = 24,
  [29] = 9,
  [30] = 25,
  [31] = 31,
  [32] = 17,
  [33] = 16,
  [34] = 18,
  [35] = 35,
  [36] = 15,
  [37] = 14,
  [38] = 13,
  [39] = 11,
  [40] = 10,
  [41] = 12,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 43,
  [47] = 47,
  [48] = 45,
  [49] = 47,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 58,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 67,
  [68] = 67,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 71,
  [76] = 76,
  [77] = 77,
  [78] = 72,
  [79] = 79,
  [80] = 80,
  [81] = 79,
  [82] = 82,
  [83] = 76,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      ADVANCE_MAP(
        '#', 16,
        '(', 9,
        ')', 11,
        '*', 14,
        '+', 12,
        ',', 10,
        '-', 13,
        '/', 15,
        '<', 6,
        '=', 8,
        '>', 7,
        '@', 4,
        '"', 1,
        '\'', 1,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_match);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'A', 1,
        'C', 2,
        'D', 3,
        'E', 4,
        'I', 5,
        'W', 6,
        'a', 7,
        'c', 8,
        'd', 9,
        'e', 10,
        'i', 11,
        'w', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'C') ADVANCE(13);
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'O') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'E') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'L') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'N') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'H') ADVANCE(27);
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'M') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'F') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'S') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(47);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_If);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(62);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'W') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'I') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'w') ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == 'L') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'L') ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'w') ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 'L') ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(87);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 65:
      if (lookahead == 'F') ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == 'H') ADVANCE(90);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_Else);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(92);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 71:
      if (lookahead == 'U') ADVANCE(94);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(105);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(107);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(109);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ENDIF);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(111);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EndIf);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_Endif);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 94:
      if (lookahead == 'D') ADVANCE(113);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_While);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_ACTION);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_Action);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DEFINE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_Define);
      END_STATE();
    case 111:
      if (lookahead == 'L') ADVANCE(122);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 120:
      if (lookahead == 'E') ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 122:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_INCLUDE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_Include);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COMPLETE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_Complete);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ENDWHILE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Endwhile);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_complete);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_endwhile);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 17},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 17},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_translation_unit] = STATE(73),
    [sym__top_level_item] = STATE(5),
    [sym__directive] = STATE(5),
    [sym_define] = STATE(5),
    [sym_include] = STATE(5),
    [sym__command] = STATE(5),
    [sym_action] = STATE(5),
    [sym__control] = STATE(5),
    [sym_branch] = STATE(5),
    [sym_loop] = STATE(5),
    [sym__statement] = STATE(5),
    [sym_function] = STATE(5),
    [sym_assignment] = STATE(5),
    [sym_comment] = STATE(5),
    [aux_sym_translation_unit_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_DEFINE] = ACTIONS(7),
    [anon_sym_define] = ACTIONS(7),
    [anon_sym_Define] = ACTIONS(7),
    [anon_sym_INCLUDE] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(9),
    [anon_sym_Include] = ACTIONS(9),
    [anon_sym_ACTION] = ACTIONS(11),
    [anon_sym_action] = ACTIONS(11),
    [anon_sym_Action] = ACTIONS(11),
    [anon_sym_IF] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_If] = ACTIONS(13),
    [anon_sym_WHILE] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_While] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_variable] = ACTIONS(19),
  },
  [2] = {
    [sym__command] = STATE(3),
    [sym_action] = STATE(3),
    [sym__control] = STATE(3),
    [sym_branch] = STATE(3),
    [sym_loop] = STATE(3),
    [sym__statement] = STATE(3),
    [sym_function] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_block_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_ACTION] = ACTIONS(23),
    [anon_sym_action] = ACTIONS(23),
    [anon_sym_Action] = ACTIONS(23),
    [anon_sym_COMPLETE] = ACTIONS(25),
    [anon_sym_complete] = ACTIONS(25),
    [anon_sym_Complete] = ACTIONS(25),
    [anon_sym_IF] = ACTIONS(27),
    [anon_sym_if] = ACTIONS(27),
    [anon_sym_If] = ACTIONS(27),
    [anon_sym_ELSE] = ACTIONS(25),
    [anon_sym_else] = ACTIONS(25),
    [anon_sym_Else] = ACTIONS(25),
    [anon_sym_ENDIF] = ACTIONS(25),
    [anon_sym_endif] = ACTIONS(25),
    [anon_sym_Endif] = ACTIONS(25),
    [anon_sym_EndIf] = ACTIONS(25),
    [anon_sym_WHILE] = ACTIONS(29),
    [anon_sym_while] = ACTIONS(29),
    [anon_sym_While] = ACTIONS(29),
    [anon_sym_ENDWHILE] = ACTIONS(25),
    [anon_sym_endwhile] = ACTIONS(25),
    [anon_sym_Endwhile] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(31),
    [sym_variable] = ACTIONS(33),
  },
  [3] = {
    [sym__command] = STATE(3),
    [sym_action] = STATE(3),
    [sym__control] = STATE(3),
    [sym_branch] = STATE(3),
    [sym_loop] = STATE(3),
    [sym__statement] = STATE(3),
    [sym_function] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_block_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_ACTION] = ACTIONS(38),
    [anon_sym_action] = ACTIONS(38),
    [anon_sym_Action] = ACTIONS(38),
    [anon_sym_COMPLETE] = ACTIONS(41),
    [anon_sym_complete] = ACTIONS(41),
    [anon_sym_Complete] = ACTIONS(41),
    [anon_sym_IF] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_If] = ACTIONS(43),
    [anon_sym_ELSE] = ACTIONS(41),
    [anon_sym_else] = ACTIONS(41),
    [anon_sym_Else] = ACTIONS(41),
    [anon_sym_ENDIF] = ACTIONS(41),
    [anon_sym_endif] = ACTIONS(41),
    [anon_sym_Endif] = ACTIONS(41),
    [anon_sym_EndIf] = ACTIONS(41),
    [anon_sym_WHILE] = ACTIONS(46),
    [anon_sym_while] = ACTIONS(46),
    [anon_sym_While] = ACTIONS(46),
    [anon_sym_ENDWHILE] = ACTIONS(41),
    [anon_sym_endwhile] = ACTIONS(41),
    [anon_sym_Endwhile] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(49),
    [sym_variable] = ACTIONS(52),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(78), 1,
      sym_variable,
    ACTIONS(60), 3,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
    ACTIONS(63), 3,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
    ACTIONS(66), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(69), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(72), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(4), 14,
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
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_variable,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 3,
      anon_sym_DEFINE,
      anon_sym_define,
      anon_sym_Define,
    ACTIONS(9), 3,
      anon_sym_INCLUDE,
      anon_sym_include,
      anon_sym_Include,
    ACTIONS(11), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(13), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(15), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(4), 14,
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
  [108] = 4,
    STATE(8), 1,
      aux_sym__expression_repeat1,
    ACTIONS(87), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(85), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(83), 23,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
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
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [147] = 4,
    STATE(6), 1,
      aux_sym__expression_repeat1,
    ACTIONS(91), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(85), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(89), 23,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
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
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [186] = 4,
    STATE(8), 1,
      aux_sym__expression_repeat1,
    ACTIONS(98), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(95), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(93), 23,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
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
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [225] = 2,
    ACTIONS(98), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(93), 23,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
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
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [259] = 2,
    ACTIONS(102), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(100), 23,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
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
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [289] = 2,
    ACTIONS(106), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(104), 23,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
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
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [319] = 2,
    ACTIONS(110), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(108), 23,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
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
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [349] = 2,
    ACTIONS(114), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(112), 23,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
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
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [379] = 2,
    ACTIONS(118), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(116), 23,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
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
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [409] = 2,
    ACTIONS(122), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(120), 23,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
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
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [439] = 2,
    ACTIONS(126), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(124), 23,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
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
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [469] = 2,
    ACTIONS(130), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(128), 23,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
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
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [499] = 2,
    ACTIONS(134), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(132), 23,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
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
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
      sym_identifier,
  [529] = 4,
    STATE(19), 1,
      aux_sym__expression_repeat1,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(136), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(93), 16,
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
  [562] = 4,
    STATE(21), 1,
      aux_sym__expression_repeat1,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(139), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(89), 16,
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
  [595] = 4,
    STATE(19), 1,
      aux_sym__expression_repeat1,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(139), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(83), 16,
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
  [628] = 8,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_variable,
    STATE(64), 1,
      sym_block,
    ACTIONS(23), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(27), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(29), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(2), 10,
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
  [668] = 8,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_variable,
    STATE(43), 1,
      sym_block,
    ACTIONS(23), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(27), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(29), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(2), 10,
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
  [708] = 8,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_variable,
    STATE(63), 1,
      sym_block,
    ACTIONS(23), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(27), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(29), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(2), 10,
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
  [748] = 8,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_variable,
    STATE(61), 1,
      sym_block,
    ACTIONS(23), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(27), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(29), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(2), 10,
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
  [788] = 8,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_variable,
    STATE(65), 1,
      sym_block,
    ACTIONS(23), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(27), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(29), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(2), 10,
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
  [828] = 8,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_variable,
    STATE(46), 1,
      sym_block,
    ACTIONS(23), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(27), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(29), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(2), 10,
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
  [868] = 8,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_variable,
    STATE(62), 1,
      sym_block,
    ACTIONS(23), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(27), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(29), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(2), 10,
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
  [908] = 2,
    ACTIONS(98), 7,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(93), 16,
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
  [936] = 8,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_variable,
    STATE(60), 1,
      sym_block,
    ACTIONS(23), 3,
      anon_sym_ACTION,
      anon_sym_action,
      anon_sym_Action,
    ACTIONS(27), 3,
      anon_sym_IF,
      anon_sym_if,
      anon_sym_If,
    ACTIONS(29), 3,
      anon_sym_WHILE,
      anon_sym_while,
      anon_sym_While,
    STATE(2), 10,
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
  [976] = 2,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(143), 16,
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
  [1000] = 2,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(128), 16,
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
  [1024] = 2,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(124), 16,
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
  [1048] = 2,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(132), 16,
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
  [1072] = 2,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(147), 16,
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
  [1096] = 2,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(120), 16,
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
  [1120] = 2,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(116), 16,
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
  [1144] = 2,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(112), 16,
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
  [1168] = 2,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(104), 16,
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
  [1192] = 2,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(100), 16,
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
  [1216] = 2,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(108), 16,
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
  [1240] = 2,
    ACTIONS(151), 2,
      anon_sym_POUND,
      sym_variable,
    ACTIONS(149), 10,
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
  [1257] = 2,
    ACTIONS(153), 3,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
    ACTIONS(155), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
  [1269] = 4,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_function_repeat1,
    STATE(77), 1,
      sym__argument,
    ACTIONS(157), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [1285] = 4,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_function_repeat1,
    STATE(68), 1,
      sym__argument,
    ACTIONS(162), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [1301] = 2,
    ACTIONS(166), 3,
      anon_sym_ELSE,
      anon_sym_else,
      anon_sym_Else,
    ACTIONS(168), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
  [1313] = 4,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_function_repeat1,
    STATE(70), 1,
      sym__argument,
    ACTIONS(170), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [1329] = 4,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_function_repeat1,
    STATE(67), 1,
      sym__argument,
    ACTIONS(174), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [1345] = 4,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_function_repeat1,
    STATE(69), 1,
      sym__argument,
    ACTIONS(178), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [1361] = 3,
    STATE(27), 1,
      sym_comparison,
    STATE(66), 1,
      sym__argument,
    ACTIONS(182), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [1374] = 3,
    STATE(23), 1,
      sym_comparison,
    STATE(66), 1,
      sym__argument,
    ACTIONS(182), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [1387] = 3,
    STATE(24), 1,
      sym_comparison,
    STATE(66), 1,
      sym__argument,
    ACTIONS(182), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [1400] = 3,
    STATE(28), 1,
      sym_comparison,
    STATE(66), 1,
      sym__argument,
    ACTIONS(182), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [1413] = 3,
    STATE(7), 1,
      sym__argument,
    STATE(17), 1,
      sym__expression,
    ACTIONS(184), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [1426] = 3,
    STATE(20), 1,
      sym__argument,
    STATE(32), 1,
      sym__expression,
    ACTIONS(186), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [1439] = 1,
    ACTIONS(160), 5,
      anon_sym_RPAREN,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [1447] = 2,
    STATE(42), 1,
      sym__argument,
    ACTIONS(188), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [1457] = 2,
    STATE(29), 1,
      sym__argument,
    ACTIONS(190), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [1467] = 2,
    STATE(9), 1,
      sym__argument,
    ACTIONS(192), 4,
      sym_variable,
      sym_identifier,
      sym_number,
      sym_string,
  [1477] = 1,
    ACTIONS(194), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
  [1484] = 1,
    ACTIONS(196), 4,
      anon_sym_ENDIF,
      anon_sym_endif,
      anon_sym_Endif,
      anon_sym_EndIf,
  [1491] = 1,
    ACTIONS(198), 3,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
  [1497] = 1,
    ACTIONS(200), 3,
      anon_sym_ENDWHILE,
      anon_sym_endwhile,
      anon_sym_Endwhile,
  [1503] = 1,
    ACTIONS(202), 3,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
  [1509] = 1,
    ACTIONS(204), 3,
      anon_sym_COMPLETE,
      anon_sym_complete,
      anon_sym_Complete,
  [1515] = 1,
    ACTIONS(206), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
  [1521] = 2,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
  [1528] = 2,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
  [1535] = 2,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(208), 1,
      anon_sym_COMMA,
  [1542] = 2,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(208), 1,
      anon_sym_COMMA,
  [1549] = 1,
    ACTIONS(214), 1,
      aux_sym_comment_token1,
  [1553] = 1,
    ACTIONS(216), 1,
      anon_sym_EQ,
  [1557] = 1,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
  [1561] = 1,
    ACTIONS(220), 1,
      sym_match,
  [1565] = 1,
    ACTIONS(222), 1,
      aux_sym_comment_token1,
  [1569] = 1,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
  [1573] = 1,
    ACTIONS(208), 1,
      anon_sym_COMMA,
  [1577] = 1,
    ACTIONS(226), 1,
      anon_sym_EQ,
  [1581] = 1,
    ACTIONS(228), 1,
      sym_identifier,
  [1585] = 1,
    ACTIONS(230), 1,
      sym_identifier,
  [1589] = 1,
    ACTIONS(232), 1,
      sym_identifier,
  [1593] = 1,
    ACTIONS(234), 1,
      sym_match,
  [1597] = 1,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 147,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 225,
  [SMALL_STATE(10)] = 259,
  [SMALL_STATE(11)] = 289,
  [SMALL_STATE(12)] = 319,
  [SMALL_STATE(13)] = 349,
  [SMALL_STATE(14)] = 379,
  [SMALL_STATE(15)] = 409,
  [SMALL_STATE(16)] = 439,
  [SMALL_STATE(17)] = 469,
  [SMALL_STATE(18)] = 499,
  [SMALL_STATE(19)] = 529,
  [SMALL_STATE(20)] = 562,
  [SMALL_STATE(21)] = 595,
  [SMALL_STATE(22)] = 628,
  [SMALL_STATE(23)] = 668,
  [SMALL_STATE(24)] = 708,
  [SMALL_STATE(25)] = 748,
  [SMALL_STATE(26)] = 788,
  [SMALL_STATE(27)] = 828,
  [SMALL_STATE(28)] = 868,
  [SMALL_STATE(29)] = 908,
  [SMALL_STATE(30)] = 936,
  [SMALL_STATE(31)] = 976,
  [SMALL_STATE(32)] = 1000,
  [SMALL_STATE(33)] = 1024,
  [SMALL_STATE(34)] = 1048,
  [SMALL_STATE(35)] = 1072,
  [SMALL_STATE(36)] = 1096,
  [SMALL_STATE(37)] = 1120,
  [SMALL_STATE(38)] = 1144,
  [SMALL_STATE(39)] = 1168,
  [SMALL_STATE(40)] = 1192,
  [SMALL_STATE(41)] = 1216,
  [SMALL_STATE(42)] = 1240,
  [SMALL_STATE(43)] = 1257,
  [SMALL_STATE(44)] = 1269,
  [SMALL_STATE(45)] = 1285,
  [SMALL_STATE(46)] = 1301,
  [SMALL_STATE(47)] = 1313,
  [SMALL_STATE(48)] = 1329,
  [SMALL_STATE(49)] = 1345,
  [SMALL_STATE(50)] = 1361,
  [SMALL_STATE(51)] = 1374,
  [SMALL_STATE(52)] = 1387,
  [SMALL_STATE(53)] = 1400,
  [SMALL_STATE(54)] = 1413,
  [SMALL_STATE(55)] = 1426,
  [SMALL_STATE(56)] = 1439,
  [SMALL_STATE(57)] = 1447,
  [SMALL_STATE(58)] = 1457,
  [SMALL_STATE(59)] = 1467,
  [SMALL_STATE(60)] = 1477,
  [SMALL_STATE(61)] = 1484,
  [SMALL_STATE(62)] = 1491,
  [SMALL_STATE(63)] = 1497,
  [SMALL_STATE(64)] = 1503,
  [SMALL_STATE(65)] = 1509,
  [SMALL_STATE(66)] = 1515,
  [SMALL_STATE(67)] = 1521,
  [SMALL_STATE(68)] = 1528,
  [SMALL_STATE(69)] = 1535,
  [SMALL_STATE(70)] = 1542,
  [SMALL_STATE(71)] = 1549,
  [SMALL_STATE(72)] = 1553,
  [SMALL_STATE(73)] = 1557,
  [SMALL_STATE(74)] = 1561,
  [SMALL_STATE(75)] = 1565,
  [SMALL_STATE(76)] = 1569,
  [SMALL_STATE(77)] = 1573,
  [SMALL_STATE(78)] = 1577,
  [SMALL_STATE(79)] = 1581,
  [SMALL_STATE(80)] = 1585,
  [SMALL_STATE(81)] = 1589,
  [SMALL_STATE(82)] = 1593,
  [SMALL_STATE(83)] = 1597,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5, 0, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, 0, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 6, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 6, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4, 0, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, 0, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 4, 0, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4, 0, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 3, 0, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3, 0, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3, 0, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3, 0, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [218] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

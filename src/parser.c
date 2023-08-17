#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  sym__newLine = 2,
  anon_sym_SEMI = 3,
  sym_codeType = 4,
  aux_sym_caseName_token1 = 5,
  sym_code = 6,
  anon_sym_DASH = 7,
  anon_sym_LPAREN = 8,
  aux_sym_node_token1 = 9,
  anon_sym_RPAREN = 10,
  sym_source_file = 11,
  sym_case = 12,
  sym_doubleBar = 13,
  sym_codeTypeComment = 14,
  sym_caseName = 15,
  sym_bar = 16,
  sym_expected = 17,
  sym_node = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_case_repeat1 = 20,
  aux_sym_case_repeat2 = 21,
  aux_sym_doubleBar_repeat1 = 22,
  aux_sym_caseName_repeat1 = 23,
  aux_sym_bar_repeat1 = 24,
  aux_sym_node_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [sym__newLine] = "_newLine",
  [anon_sym_SEMI] = ";",
  [sym_codeType] = "codeType",
  [aux_sym_caseName_token1] = "caseName_token1",
  [sym_code] = "code",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [aux_sym_node_token1] = "node_token1",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym_case] = "case",
  [sym_doubleBar] = "doubleBar",
  [sym_codeTypeComment] = "codeTypeComment",
  [sym_caseName] = "caseName",
  [sym_bar] = "bar",
  [sym_expected] = "expected",
  [sym_node] = "node",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_case_repeat1] = "case_repeat1",
  [aux_sym_case_repeat2] = "case_repeat2",
  [aux_sym_doubleBar_repeat1] = "doubleBar_repeat1",
  [aux_sym_caseName_repeat1] = "caseName_repeat1",
  [aux_sym_bar_repeat1] = "bar_repeat1",
  [aux_sym_node_repeat1] = "node_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym__newLine] = sym__newLine,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_codeType] = sym_codeType,
  [aux_sym_caseName_token1] = aux_sym_caseName_token1,
  [sym_code] = sym_code,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_node_token1] = aux_sym_node_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym_case] = sym_case,
  [sym_doubleBar] = sym_doubleBar,
  [sym_codeTypeComment] = sym_codeTypeComment,
  [sym_caseName] = sym_caseName,
  [sym_bar] = sym_bar,
  [sym_expected] = sym_expected,
  [sym_node] = sym_node,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_case_repeat1] = aux_sym_case_repeat1,
  [aux_sym_case_repeat2] = aux_sym_case_repeat2,
  [aux_sym_doubleBar_repeat1] = aux_sym_doubleBar_repeat1,
  [aux_sym_caseName_repeat1] = aux_sym_caseName_repeat1,
  [aux_sym_bar_repeat1] = aux_sym_bar_repeat1,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__newLine] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_codeType] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_caseName_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_node_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym_doubleBar] = {
    .visible = true,
    .named = true,
  },
  [sym_codeTypeComment] = {
    .visible = true,
    .named = true,
  },
  [sym_caseName] = {
    .visible = true,
    .named = true,
  },
  [sym_bar] = {
    .visible = true,
    .named = true,
  },
  [sym_expected] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_doubleBar_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_caseName_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bar_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat1] = {
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == ';' ||
          lookahead == '=') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ';' ||
          lookahead == '=') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__newLine);
      if (lookahead == '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__newLine);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_codeType);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_codeType);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_caseName_token1);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_caseName_token1);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == ';' ||
          lookahead == '=') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_caseName_token1);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == ';' ||
          lookahead == '=') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_caseName_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_caseName_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_node_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_node_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym_case] = STATE(6),
    [sym_doubleBar] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_doubleBar_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_EQ,
    ACTIONS(9), 1,
      aux_sym_caseName_token1,
    STATE(8), 1,
      aux_sym_case_repeat1,
    STATE(16), 1,
      aux_sym_doubleBar_repeat1,
    STATE(19), 1,
      aux_sym_caseName_repeat1,
    STATE(38), 1,
      sym_doubleBar,
    STATE(40), 1,
      sym_caseName,
  [22] = 7,
    ACTIONS(7), 1,
      anon_sym_EQ,
    ACTIONS(9), 1,
      aux_sym_caseName_token1,
    STATE(8), 1,
      aux_sym_case_repeat1,
    STATE(16), 1,
      aux_sym_doubleBar_repeat1,
    STATE(19), 1,
      aux_sym_caseName_repeat1,
    STATE(32), 1,
      sym_doubleBar,
    STATE(40), 1,
      sym_caseName,
  [44] = 6,
    ACTIONS(9), 1,
      aux_sym_caseName_token1,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    STATE(2), 1,
      aux_sym_case_repeat1,
    STATE(19), 1,
      aux_sym_caseName_repeat1,
    STATE(40), 1,
      sym_caseName,
    STATE(41), 1,
      sym_codeTypeComment,
  [63] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_EQ,
    STATE(16), 1,
      aux_sym_doubleBar_repeat1,
    STATE(43), 1,
      sym_doubleBar,
    STATE(5), 2,
      sym_case,
      aux_sym_source_file_repeat1,
  [80] = 5,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_doubleBar_repeat1,
    STATE(43), 1,
      sym_doubleBar,
    STATE(5), 2,
      sym_case,
      aux_sym_source_file_repeat1,
  [97] = 5,
    ACTIONS(20), 1,
      sym_code,
    ACTIONS(22), 1,
      anon_sym_DASH,
    STATE(23), 1,
      aux_sym_case_repeat2,
    STATE(24), 1,
      aux_sym_bar_repeat1,
    STATE(33), 1,
      sym_bar,
  [113] = 5,
    ACTIONS(24), 1,
      anon_sym_EQ,
    ACTIONS(26), 1,
      aux_sym_caseName_token1,
    STATE(8), 1,
      aux_sym_case_repeat1,
    STATE(19), 1,
      aux_sym_caseName_repeat1,
    STATE(40), 1,
      sym_caseName,
  [129] = 5,
    ACTIONS(20), 1,
      sym_code,
    ACTIONS(22), 1,
      anon_sym_DASH,
    STATE(23), 1,
      aux_sym_case_repeat2,
    STATE(24), 1,
      aux_sym_bar_repeat1,
    STATE(35), 1,
      sym_bar,
  [145] = 3,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(12), 2,
      sym_node,
      aux_sym_node_repeat1,
  [156] = 1,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [163] = 3,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      anon_sym_RPAREN,
    STATE(12), 2,
      sym_node,
      aux_sym_node_repeat1,
  [174] = 3,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
    STATE(10), 2,
      sym_node,
      aux_sym_node_repeat1,
  [185] = 4,
    ACTIONS(42), 1,
      aux_sym_caseName_token1,
    STATE(3), 1,
      aux_sym_case_repeat1,
    STATE(19), 1,
      aux_sym_caseName_repeat1,
    STATE(40), 1,
      sym_caseName,
  [198] = 1,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [205] = 3,
    ACTIONS(46), 1,
      anon_sym_EQ,
    ACTIONS(48), 1,
      sym__newLine,
    STATE(17), 1,
      aux_sym_doubleBar_repeat1,
  [215] = 3,
    ACTIONS(50), 1,
      anon_sym_EQ,
    ACTIONS(53), 1,
      sym__newLine,
    STATE(17), 1,
      aux_sym_doubleBar_repeat1,
  [225] = 3,
    ACTIONS(55), 1,
      sym__newLine,
    ACTIONS(57), 1,
      anon_sym_DASH,
    STATE(18), 1,
      aux_sym_bar_repeat1,
  [235] = 3,
    ACTIONS(60), 1,
      sym__newLine,
    ACTIONS(62), 1,
      aux_sym_caseName_token1,
    STATE(22), 1,
      aux_sym_caseName_repeat1,
  [245] = 3,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_node,
    STATE(31), 1,
      sym_expected,
  [255] = 3,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_expected,
    STATE(30), 1,
      sym_node,
  [265] = 3,
    ACTIONS(64), 1,
      sym__newLine,
    ACTIONS(66), 1,
      aux_sym_caseName_token1,
    STATE(22), 1,
      aux_sym_caseName_repeat1,
  [275] = 3,
    ACTIONS(69), 1,
      sym_code,
    ACTIONS(72), 1,
      anon_sym_DASH,
    STATE(23), 1,
      aux_sym_case_repeat2,
  [285] = 3,
    ACTIONS(74), 1,
      sym__newLine,
    ACTIONS(76), 1,
      anon_sym_DASH,
    STATE(18), 1,
      aux_sym_bar_repeat1,
  [295] = 1,
    ACTIONS(24), 2,
      anon_sym_EQ,
      aux_sym_caseName_token1,
  [300] = 2,
    ACTIONS(78), 1,
      sym_code,
    STATE(9), 1,
      aux_sym_case_repeat2,
  [307] = 2,
    ACTIONS(78), 1,
      sym_code,
    STATE(7), 1,
      aux_sym_case_repeat2,
  [314] = 1,
    ACTIONS(72), 2,
      sym_code,
      anon_sym_DASH,
  [319] = 1,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [324] = 1,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [329] = 1,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [334] = 1,
    ACTIONS(86), 1,
      sym__newLine,
  [338] = 1,
    ACTIONS(88), 1,
      sym__newLine,
  [342] = 1,
    ACTIONS(90), 1,
      aux_sym_node_token1,
  [346] = 1,
    ACTIONS(92), 1,
      sym__newLine,
  [350] = 1,
    ACTIONS(94), 1,
      sym__newLine,
  [354] = 1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
  [358] = 1,
    ACTIONS(98), 1,
      sym__newLine,
  [362] = 1,
    ACTIONS(100), 1,
      sym__newLine,
  [366] = 1,
    ACTIONS(102), 1,
      sym__newLine,
  [370] = 1,
    ACTIONS(104), 1,
      sym__newLine,
  [374] = 1,
    ACTIONS(106), 1,
      sym_codeType,
  [378] = 1,
    ACTIONS(108), 1,
      sym__newLine,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 113,
  [SMALL_STATE(9)] = 129,
  [SMALL_STATE(10)] = 145,
  [SMALL_STATE(11)] = 156,
  [SMALL_STATE(12)] = 163,
  [SMALL_STATE(13)] = 174,
  [SMALL_STATE(14)] = 185,
  [SMALL_STATE(15)] = 198,
  [SMALL_STATE(16)] = 205,
  [SMALL_STATE(17)] = 215,
  [SMALL_STATE(18)] = 225,
  [SMALL_STATE(19)] = 235,
  [SMALL_STATE(20)] = 245,
  [SMALL_STATE(21)] = 255,
  [SMALL_STATE(22)] = 265,
  [SMALL_STATE(23)] = 275,
  [SMALL_STATE(24)] = 285,
  [SMALL_STATE(25)] = 295,
  [SMALL_STATE(26)] = 300,
  [SMALL_STATE(27)] = 307,
  [SMALL_STATE(28)] = 314,
  [SMALL_STATE(29)] = 319,
  [SMALL_STATE(30)] = 324,
  [SMALL_STATE(31)] = 329,
  [SMALL_STATE(32)] = 334,
  [SMALL_STATE(33)] = 338,
  [SMALL_STATE(34)] = 342,
  [SMALL_STATE(35)] = 346,
  [SMALL_STATE(36)] = 350,
  [SMALL_STATE(37)] = 354,
  [SMALL_STATE(38)] = 358,
  [SMALL_STATE(39)] = 362,
  [SMALL_STATE(40)] = 366,
  [SMALL_STATE(41)] = 370,
  [SMALL_STATE(42)] = 374,
  [SMALL_STATE(43)] = 378,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(34),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doubleBar, 1),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doubleBar_repeat1, 2), SHIFT_REPEAT(17),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doubleBar_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(18),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caseName, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caseName_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caseName_repeat1, 2), SHIFT_REPEAT(22),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(36),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat2, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 11),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expected, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 9),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [96] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeTypeComment, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_treesitter_test(void) {
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

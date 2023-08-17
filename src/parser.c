#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == ';' ||
          lookahead == '=') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == ';' ||
          lookahead == '=') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '=') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__newLine);
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__newLine);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_codeType);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_codeType);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_caseName_token1);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_caseName_token1);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == ';' ||
          lookahead == '=') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_caseName_token1);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == ';' ||
          lookahead == '=') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_caseName_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_node_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_node_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
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
    [sym_case] = STATE(3),
    [sym_doubleBar] = STATE(36),
    [sym_codeTypeComment] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_doubleBar_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ,
    ACTIONS(11), 1,
      aux_sym_caseName_token1,
    STATE(7), 1,
      aux_sym_case_repeat1,
    STATE(17), 1,
      aux_sym_caseName_repeat1,
    STATE(18), 1,
      aux_sym_doubleBar_repeat1,
    STATE(31), 1,
      sym_caseName,
    STATE(34), 1,
      sym_doubleBar,
  [22] = 5,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym_doubleBar_repeat1,
    STATE(36), 1,
      sym_doubleBar,
    STATE(5), 2,
      sym_case,
      aux_sym_source_file_repeat1,
  [39] = 5,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym_doubleBar_repeat1,
    STATE(36), 1,
      sym_doubleBar,
    STATE(6), 2,
      sym_case,
      aux_sym_source_file_repeat1,
  [56] = 5,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_EQ,
    STATE(18), 1,
      aux_sym_doubleBar_repeat1,
    STATE(36), 1,
      sym_doubleBar,
    STATE(5), 2,
      sym_case,
      aux_sym_source_file_repeat1,
  [73] = 5,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym_doubleBar_repeat1,
    STATE(36), 1,
      sym_doubleBar,
    STATE(5), 2,
      sym_case,
      aux_sym_source_file_repeat1,
  [90] = 5,
    ACTIONS(24), 1,
      anon_sym_EQ,
    ACTIONS(26), 1,
      aux_sym_caseName_token1,
    STATE(7), 1,
      aux_sym_case_repeat1,
    STATE(17), 1,
      aux_sym_caseName_repeat1,
    STATE(31), 1,
      sym_caseName,
  [106] = 5,
    ACTIONS(29), 1,
      sym_code,
    ACTIONS(31), 1,
      anon_sym_DASH,
    STATE(15), 1,
      aux_sym_bar_repeat1,
    STATE(16), 1,
      aux_sym_case_repeat2,
    STATE(28), 1,
      sym_bar,
  [122] = 3,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(36), 1,
      anon_sym_RPAREN,
    STATE(9), 2,
      sym_node,
      aux_sym_node_repeat1,
  [133] = 1,
    ACTIONS(38), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [140] = 3,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    STATE(9), 2,
      sym_node,
      aux_sym_node_repeat1,
  [151] = 1,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [158] = 3,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    STATE(11), 2,
      sym_node,
      aux_sym_node_repeat1,
  [169] = 4,
    ACTIONS(48), 1,
      aux_sym_caseName_token1,
    STATE(2), 1,
      aux_sym_case_repeat1,
    STATE(17), 1,
      aux_sym_caseName_repeat1,
    STATE(31), 1,
      sym_caseName,
  [182] = 3,
    ACTIONS(50), 1,
      sym__newLine,
    ACTIONS(52), 1,
      anon_sym_DASH,
    STATE(19), 1,
      aux_sym_bar_repeat1,
  [192] = 3,
    ACTIONS(54), 1,
      sym_code,
    ACTIONS(57), 1,
      anon_sym_DASH,
    STATE(16), 1,
      aux_sym_case_repeat2,
  [202] = 3,
    ACTIONS(59), 1,
      sym__newLine,
    ACTIONS(61), 1,
      aux_sym_caseName_token1,
    STATE(20), 1,
      aux_sym_caseName_repeat1,
  [212] = 3,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(65), 1,
      sym__newLine,
    STATE(22), 1,
      aux_sym_doubleBar_repeat1,
  [222] = 3,
    ACTIONS(67), 1,
      sym__newLine,
    ACTIONS(69), 1,
      anon_sym_DASH,
    STATE(19), 1,
      aux_sym_bar_repeat1,
  [232] = 3,
    ACTIONS(72), 1,
      sym__newLine,
    ACTIONS(74), 1,
      aux_sym_caseName_token1,
    STATE(20), 1,
      aux_sym_caseName_repeat1,
  [242] = 3,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_expected,
    STATE(27), 1,
      sym_node,
  [252] = 3,
    ACTIONS(77), 1,
      anon_sym_EQ,
    ACTIONS(80), 1,
      sym__newLine,
    STATE(22), 1,
      aux_sym_doubleBar_repeat1,
  [262] = 2,
    ACTIONS(82), 1,
      sym_code,
    STATE(8), 1,
      aux_sym_case_repeat2,
  [269] = 1,
    ACTIONS(57), 2,
      sym_code,
      anon_sym_DASH,
  [274] = 1,
    ACTIONS(24), 2,
      anon_sym_EQ,
      aux_sym_caseName_token1,
  [279] = 1,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [284] = 1,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [289] = 1,
    ACTIONS(88), 1,
      sym__newLine,
  [293] = 1,
    ACTIONS(90), 1,
      sym_codeType,
  [297] = 1,
    ACTIONS(92), 1,
      sym__newLine,
  [301] = 1,
    ACTIONS(94), 1,
      sym__newLine,
  [305] = 1,
    ACTIONS(96), 1,
      aux_sym_node_token1,
  [309] = 1,
    ACTIONS(98), 1,
      sym__newLine,
  [313] = 1,
    ACTIONS(100), 1,
      sym__newLine,
  [317] = 1,
    ACTIONS(102), 1,
      sym__newLine,
  [321] = 1,
    ACTIONS(104), 1,
      sym__newLine,
  [325] = 1,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 39,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 73,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 122,
  [SMALL_STATE(10)] = 133,
  [SMALL_STATE(11)] = 140,
  [SMALL_STATE(12)] = 151,
  [SMALL_STATE(13)] = 158,
  [SMALL_STATE(14)] = 169,
  [SMALL_STATE(15)] = 182,
  [SMALL_STATE(16)] = 192,
  [SMALL_STATE(17)] = 202,
  [SMALL_STATE(18)] = 212,
  [SMALL_STATE(19)] = 222,
  [SMALL_STATE(20)] = 232,
  [SMALL_STATE(21)] = 242,
  [SMALL_STATE(22)] = 252,
  [SMALL_STATE(23)] = 262,
  [SMALL_STATE(24)] = 269,
  [SMALL_STATE(25)] = 274,
  [SMALL_STATE(26)] = 279,
  [SMALL_STATE(27)] = 284,
  [SMALL_STATE(28)] = 289,
  [SMALL_STATE(29)] = 293,
  [SMALL_STATE(30)] = 297,
  [SMALL_STATE(31)] = 301,
  [SMALL_STATE(32)] = 305,
  [SMALL_STATE(33)] = 309,
  [SMALL_STATE(34)] = 313,
  [SMALL_STATE(35)] = 317,
  [SMALL_STATE(36)] = 321,
  [SMALL_STATE(37)] = 325,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(17),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(32),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(30),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat2, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caseName, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doubleBar, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(19),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caseName_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caseName_repeat1, 2), SHIFT_REPEAT(20),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doubleBar_repeat1, 2), SHIFT_REPEAT(22),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doubleBar_repeat1, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 9),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expected, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeTypeComment, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

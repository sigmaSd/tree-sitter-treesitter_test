#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  sym__newLine = 2,
  aux_sym_caseName_token1 = 3,
  sym_code = 4,
  anon_sym_DASH = 5,
  anon_sym_LPAREN = 6,
  aux_sym_node_token1 = 7,
  anon_sym_RPAREN = 8,
  sym_source_file = 9,
  sym_case = 10,
  sym_doubleBar = 11,
  sym_caseName = 12,
  sym_bar = 13,
  sym_expected = 14,
  sym_node = 15,
  aux_sym_source_file_repeat1 = 16,
  aux_sym_case_repeat1 = 17,
  aux_sym_case_repeat2 = 18,
  aux_sym_doubleBar_repeat1 = 19,
  aux_sym_caseName_repeat1 = 20,
  aux_sym_bar_repeat1 = 21,
  aux_sym_node_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [sym__newLine] = "_newLine",
  [aux_sym_caseName_token1] = "caseName_token1",
  [sym_code] = "code",
  [anon_sym_DASH] = "-",
  [anon_sym_LPAREN] = "(",
  [aux_sym_node_token1] = "node_token1",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym_case] = "case",
  [sym_doubleBar] = "doubleBar",
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
  [aux_sym_caseName_token1] = aux_sym_caseName_token1,
  [sym_code] = sym_code,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_node_token1] = aux_sym_node_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym_case] = sym_case,
  [sym_doubleBar] = sym_doubleBar,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__newLine);
      if (lookahead == '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__newLine);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_caseName_token1);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_caseName_token1);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_caseName_token1);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_caseName_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_code);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_code);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_node_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_node_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym_case] = STATE(3),
    [sym_doubleBar] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_doubleBar_repeat1] = STATE(20),
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
    STATE(5), 1,
      aux_sym_case_repeat1,
    STATE(18), 1,
      aux_sym_caseName_repeat1,
    STATE(20), 1,
      aux_sym_doubleBar_repeat1,
    STATE(26), 1,
      sym_doubleBar,
    STATE(31), 1,
      sym_caseName,
  [22] = 5,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      aux_sym_doubleBar_repeat1,
    STATE(32), 1,
      sym_doubleBar,
    STATE(4), 2,
      sym_case,
      aux_sym_source_file_repeat1,
  [39] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_EQ,
    STATE(20), 1,
      aux_sym_doubleBar_repeat1,
    STATE(32), 1,
      sym_doubleBar,
    STATE(4), 2,
      sym_case,
      aux_sym_source_file_repeat1,
  [56] = 5,
    ACTIONS(18), 1,
      anon_sym_EQ,
    ACTIONS(20), 1,
      aux_sym_caseName_token1,
    STATE(5), 1,
      aux_sym_case_repeat1,
    STATE(18), 1,
      aux_sym_caseName_repeat1,
    STATE(31), 1,
      sym_caseName,
  [72] = 5,
    ACTIONS(23), 1,
      sym_code,
    ACTIONS(25), 1,
      anon_sym_DASH,
    STATE(15), 1,
      aux_sym_case_repeat2,
    STATE(16), 1,
      aux_sym_bar_repeat1,
    STATE(29), 1,
      sym_bar,
  [88] = 3,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(30), 1,
      anon_sym_RPAREN,
    STATE(7), 2,
      sym_node,
      aux_sym_node_repeat1,
  [99] = 1,
    ACTIONS(32), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [106] = 3,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(36), 1,
      anon_sym_RPAREN,
    STATE(7), 2,
      sym_node,
      aux_sym_node_repeat1,
  [117] = 4,
    ACTIONS(38), 1,
      aux_sym_caseName_token1,
    STATE(2), 1,
      aux_sym_case_repeat1,
    STATE(18), 1,
      aux_sym_caseName_repeat1,
    STATE(31), 1,
      sym_caseName,
  [130] = 1,
    ACTIONS(40), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [137] = 3,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    STATE(9), 2,
      sym_node,
      aux_sym_node_repeat1,
  [148] = 3,
    ACTIONS(44), 1,
      sym__newLine,
    ACTIONS(46), 1,
      anon_sym_DASH,
    STATE(13), 1,
      aux_sym_bar_repeat1,
  [158] = 3,
    ACTIONS(49), 1,
      sym__newLine,
    ACTIONS(51), 1,
      aux_sym_caseName_token1,
    STATE(14), 1,
      aux_sym_caseName_repeat1,
  [168] = 3,
    ACTIONS(54), 1,
      sym_code,
    ACTIONS(57), 1,
      anon_sym_DASH,
    STATE(15), 1,
      aux_sym_case_repeat2,
  [178] = 3,
    ACTIONS(59), 1,
      sym__newLine,
    ACTIONS(61), 1,
      anon_sym_DASH,
    STATE(13), 1,
      aux_sym_bar_repeat1,
  [188] = 3,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_expected,
    STATE(25), 1,
      sym_node,
  [198] = 3,
    ACTIONS(63), 1,
      sym__newLine,
    ACTIONS(65), 1,
      aux_sym_caseName_token1,
    STATE(14), 1,
      aux_sym_caseName_repeat1,
  [208] = 3,
    ACTIONS(67), 1,
      anon_sym_EQ,
    ACTIONS(70), 1,
      sym__newLine,
    STATE(19), 1,
      aux_sym_doubleBar_repeat1,
  [218] = 3,
    ACTIONS(72), 1,
      anon_sym_EQ,
    ACTIONS(74), 1,
      sym__newLine,
    STATE(19), 1,
      aux_sym_doubleBar_repeat1,
  [228] = 2,
    ACTIONS(76), 1,
      sym_code,
    STATE(6), 1,
      aux_sym_case_repeat2,
  [235] = 1,
    ACTIONS(57), 2,
      sym_code,
      anon_sym_DASH,
  [240] = 1,
    ACTIONS(18), 2,
      anon_sym_EQ,
      aux_sym_caseName_token1,
  [245] = 1,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [250] = 1,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [255] = 1,
    ACTIONS(82), 1,
      sym__newLine,
  [259] = 1,
    ACTIONS(84), 1,
      sym__newLine,
  [263] = 1,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
  [267] = 1,
    ACTIONS(88), 1,
      sym__newLine,
  [271] = 1,
    ACTIONS(90), 1,
      aux_sym_node_token1,
  [275] = 1,
    ACTIONS(92), 1,
      sym__newLine,
  [279] = 1,
    ACTIONS(94), 1,
      sym__newLine,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 39,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 88,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 106,
  [SMALL_STATE(10)] = 117,
  [SMALL_STATE(11)] = 130,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 148,
  [SMALL_STATE(14)] = 158,
  [SMALL_STATE(15)] = 168,
  [SMALL_STATE(16)] = 178,
  [SMALL_STATE(17)] = 188,
  [SMALL_STATE(18)] = 198,
  [SMALL_STATE(19)] = 208,
  [SMALL_STATE(20)] = 218,
  [SMALL_STATE(21)] = 228,
  [SMALL_STATE(22)] = 235,
  [SMALL_STATE(23)] = 240,
  [SMALL_STATE(24)] = 245,
  [SMALL_STATE(25)] = 250,
  [SMALL_STATE(26)] = 255,
  [SMALL_STATE(27)] = 259,
  [SMALL_STATE(28)] = 263,
  [SMALL_STATE(29)] = 267,
  [SMALL_STATE(30)] = 271,
  [SMALL_STATE(31)] = 275,
  [SMALL_STATE(32)] = 279,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(18),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(30),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(13),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_caseName_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_caseName_repeat1, 2), SHIFT_REPEAT(14),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(27),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat2, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_caseName, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doubleBar_repeat1, 2), SHIFT_REPEAT(19),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_doubleBar_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doubleBar, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 9),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expected, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [86] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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

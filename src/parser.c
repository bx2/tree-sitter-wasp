#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_SLASH_STAR = 3,
  aux_sym_comment_token2 = 4,
  anon_sym_STAR_SLASH = 5,
  sym_type_declaration = 6,
  aux_sym_variable_declaration_token1 = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_string_token1 = 9,
  sym_number = 10,
  aux_sym_constant_token1 = 11,
  aux_sym_constant_token2 = 12,
  aux_sym_constant_token3 = 13,
  anon_sym_import = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_from = 17,
  anon_sym_LBRACE_EQjson = 18,
  anon_sym_json_EQ_RBRACE = 19,
  anon_sym_LBRACE_EQpsl = 20,
  anon_sym_psl_EQ_RBRACE = 21,
  anon_sym_LBRACK = 22,
  anon_sym_COMMA = 23,
  anon_sym_RBRACK = 24,
  anon_sym_COLON = 25,
  sym_dict_key = 26,
  sym_string_content = 27,
  sym_source_file = 28,
  sym__definition = 29,
  sym_comment = 30,
  sym_variable_declaration = 31,
  sym_value = 32,
  sym_string = 33,
  sym_constant = 34,
  sym_js_import = 35,
  sym_json_closure = 36,
  sym_prisma_closure = 37,
  sym_array = 38,
  sym_dict = 39,
  sym_variable = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_string_repeat1 = 42,
  aux_sym_js_import_repeat1 = 43,
  aux_sym_array_repeat1 = 44,
  aux_sym_dict_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_type_declaration] = "type_declaration",
  [aux_sym_variable_declaration_token1] = "variable_declaration_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_number] = "number",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_constant_token2] = "constant_token2",
  [aux_sym_constant_token3] = "constant_token3",
  [anon_sym_import] = "import",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_from] = "from",
  [anon_sym_LBRACE_EQjson] = "{=json",
  [anon_sym_json_EQ_RBRACE] = "json=}",
  [anon_sym_LBRACE_EQpsl] = "{=psl",
  [anon_sym_psl_EQ_RBRACE] = "psl=}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [sym_dict_key] = "dict_key",
  [sym_string_content] = "string_content",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_comment] = "comment",
  [sym_variable_declaration] = "variable_declaration",
  [sym_value] = "value",
  [sym_string] = "string",
  [sym_constant] = "constant",
  [sym_js_import] = "js_import",
  [sym_json_closure] = "json_closure",
  [sym_prisma_closure] = "prisma_closure",
  [sym_array] = "array",
  [sym_dict] = "dict",
  [sym_variable] = "variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_js_import_repeat1] = "js_import_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_dict_repeat1] = "dict_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_type_declaration] = sym_type_declaration,
  [aux_sym_variable_declaration_token1] = aux_sym_variable_declaration_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_number] = sym_number,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_constant_token2] = aux_sym_constant_token2,
  [aux_sym_constant_token3] = aux_sym_constant_token3,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_LBRACE_EQjson] = anon_sym_LBRACE_EQjson,
  [anon_sym_json_EQ_RBRACE] = anon_sym_json_EQ_RBRACE,
  [anon_sym_LBRACE_EQpsl] = anon_sym_LBRACE_EQpsl,
  [anon_sym_psl_EQ_RBRACE] = anon_sym_psl_EQ_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_dict_key] = sym_dict_key,
  [sym_string_content] = sym_string_content,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_comment] = sym_comment,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_value] = sym_value,
  [sym_string] = sym_string,
  [sym_constant] = sym_constant,
  [sym_js_import] = sym_js_import,
  [sym_json_closure] = sym_json_closure,
  [sym_prisma_closure] = sym_prisma_closure,
  [sym_array] = sym_array,
  [sym_dict] = sym_dict,
  [sym_variable] = sym_variable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_js_import_repeat1] = aux_sym_js_import_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_dict_repeat1] = aux_sym_dict_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_variable_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_import] = {
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
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_EQjson] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json_EQ_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_EQpsl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psl_EQ_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_dict_key] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_js_import] = {
    .visible = true,
    .named = true,
  },
  [sym_json_closure] = {
    .visible = true,
    .named = true,
  },
  [sym_prisma_closure] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_dict] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_js_import_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dict_repeat1] = {
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
  [42] = 39,
  [43] = 41,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 54,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 16,
  [67] = 67,
  [68] = 22,
  [69] = 69,
  [70] = 70,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '"', 145,
        '*', 6,
        ',', 161,
        '-', 20,
        '/', 3,
        ':', 163,
        'A', 43,
        'D', 39,
        'E', 97,
        'G', 38,
        'M', 56,
        'P', 47,
        'S', 46,
        '[', 160,
        '\\', 22,
        ']', 162,
        'a', 65,
        'c', 115,
        'e', 102,
        'f', 57,
        'i', 91,
        'j', 104,
        'p', 59,
        'q', 136,
        'r', 107,
        't', 121,
        '{', 152,
        '}', 153,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '{') ADVANCE(151);
      if (lookahead == '}') ADVANCE(153);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == 'j') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 10:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(153);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(159);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(157);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '"', 145,
        ',', 161,
        '-', 20,
        '/', 3,
        'A', 43,
        'D', 39,
        'E', 97,
        'G', 38,
        'M', 56,
        'P', 47,
        'S', 46,
        '[', 160,
        ']', 162,
        'a', 65,
        'c', 115,
        'e', 102,
        'f', 58,
        'i', 91,
        'j', 104,
        'p', 59,
        'q', 136,
        'r', 107,
        't', 121,
        '{', 152,
        '}', 153,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_type_declaration);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_type_declaration);
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == '=') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == '=') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'A') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'B') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'E') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'E') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'E') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'G') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'L') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'L') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'L') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'L') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == 'Q') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'O') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(53);
      if (lookahead == 'g') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'P') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'P') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'Q') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'S') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'S') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'T') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'T') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'T') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 's') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'b') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'c') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'd') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'd') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'd') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'd') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'g') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'g') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'g') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'i') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'i') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'i') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'i') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'i') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'l') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'l') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'l') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'm') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'm') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'm') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'm') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'm') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'm') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'n') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'n') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'n') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 's') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'p') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'p') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'r') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'r') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'r') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 's') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 's') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 's') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'u') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'u') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'u') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'u') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'u') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'w') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'y') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'y') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '=') ADVANCE(8);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACE_EQjson);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_json_EQ_RBRACE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LBRACE_EQpsl);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_psl_EQ_RBRACE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_dict_key);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_string_content);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 26},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym_type_declaration] = ACTIONS(1),
    [aux_sym_variable_declaration_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_constant_token2] = ACTIONS(1),
    [aux_sym_constant_token3] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_LBRACE_EQjson] = ACTIONS(1),
    [anon_sym_json_EQ_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(1),
    [anon_sym_psl_EQ_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_string_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(67),
    [sym__definition] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_variable_declaration] = STATE(5),
    [sym_value] = STATE(5),
    [sym_string] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_js_import] = STATE(31),
    [sym_json_closure] = STATE(31),
    [sym_prisma_closure] = STATE(31),
    [sym_array] = STATE(31),
    [sym_dict] = STATE(31),
    [sym_variable] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(9),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [2] = {
    [sym__definition] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_value] = STATE(2),
    [sym_string] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_js_import] = STATE(31),
    [sym_json_closure] = STATE(31),
    [sym_prisma_closure] = STATE(31),
    [sym_array] = STATE(31),
    [sym_dict] = STATE(31),
    [sym_variable] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_SLASH_SLASH] = ACTIONS(31),
    [anon_sym_SLASH_STAR] = ACTIONS(34),
    [sym_type_declaration] = ACTIONS(37),
    [aux_sym_variable_declaration_token1] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_number] = ACTIONS(46),
    [aux_sym_constant_token1] = ACTIONS(49),
    [aux_sym_constant_token2] = ACTIONS(49),
    [aux_sym_constant_token3] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_LBRACE_EQjson] = ACTIONS(58),
    [anon_sym_json_EQ_RBRACE] = ACTIONS(29),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(61),
    [anon_sym_psl_EQ_RBRACE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(64),
  },
  [3] = {
    [sym__definition] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_variable_declaration] = STATE(7),
    [sym_value] = STATE(7),
    [sym_string] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_js_import] = STATE(31),
    [sym_json_closure] = STATE(31),
    [sym_prisma_closure] = STATE(31),
    [sym_array] = STATE(31),
    [sym_dict] = STATE(31),
    [sym_variable] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(67),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(25),
    [anon_sym_psl_EQ_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [4] = {
    [sym__definition] = STATE(51),
    [sym_comment] = STATE(51),
    [sym_variable_declaration] = STATE(51),
    [sym_value] = STATE(51),
    [sym_string] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_js_import] = STATE(31),
    [sym_json_closure] = STATE(31),
    [sym_prisma_closure] = STATE(31),
    [sym_array] = STATE(31),
    [sym_dict] = STATE(31),
    [sym_variable] = STATE(31),
    [aux_sym_array_repeat1] = STATE(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(71),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(73),
  },
  [5] = {
    [sym__definition] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_value] = STATE(2),
    [sym_string] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_js_import] = STATE(31),
    [sym_json_closure] = STATE(31),
    [sym_prisma_closure] = STATE(31),
    [sym_array] = STATE(31),
    [sym_dict] = STATE(31),
    [sym_variable] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(77),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [6] = {
    [sym__definition] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_value] = STATE(2),
    [sym_string] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_js_import] = STATE(31),
    [sym_json_closure] = STATE(31),
    [sym_prisma_closure] = STATE(31),
    [sym_array] = STATE(31),
    [sym_dict] = STATE(31),
    [sym_variable] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(77),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_json_EQ_RBRACE] = ACTIONS(79),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [7] = {
    [sym__definition] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_value] = STATE(2),
    [sym_string] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_js_import] = STATE(31),
    [sym_json_closure] = STATE(31),
    [sym_prisma_closure] = STATE(31),
    [sym_array] = STATE(31),
    [sym_dict] = STATE(31),
    [sym_variable] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(77),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(25),
    [anon_sym_psl_EQ_RBRACE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [8] = {
    [sym__definition] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_variable_declaration] = STATE(6),
    [sym_value] = STATE(6),
    [sym_string] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_js_import] = STATE(31),
    [sym_json_closure] = STATE(31),
    [sym_prisma_closure] = STATE(31),
    [sym_array] = STATE(31),
    [sym_dict] = STATE(31),
    [sym_variable] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(83),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_json_EQ_RBRACE] = ACTIONS(85),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [9] = {
    [sym__definition] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_variable_declaration] = STATE(47),
    [sym_value] = STATE(47),
    [sym_string] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_js_import] = STATE(31),
    [sym_json_closure] = STATE(31),
    [sym_prisma_closure] = STATE(31),
    [sym_array] = STATE(31),
    [sym_dict] = STATE(31),
    [sym_variable] = STATE(31),
    [aux_sym_array_repeat1] = STATE(10),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(87),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [10] = {
    [sym__definition] = STATE(56),
    [sym_comment] = STATE(56),
    [sym_variable_declaration] = STATE(56),
    [sym_value] = STATE(56),
    [sym_string] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_js_import] = STATE(31),
    [sym_json_closure] = STATE(31),
    [sym_prisma_closure] = STATE(31),
    [sym_array] = STATE(31),
    [sym_dict] = STATE(31),
    [sym_variable] = STATE(31),
    [aux_sym_array_repeat1] = STATE(10),
    [anon_sym_SLASH_SLASH] = ACTIONS(89),
    [anon_sym_SLASH_STAR] = ACTIONS(92),
    [sym_type_declaration] = ACTIONS(95),
    [aux_sym_variable_declaration_token1] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_number] = ACTIONS(104),
    [aux_sym_constant_token1] = ACTIONS(107),
    [aux_sym_constant_token2] = ACTIONS(107),
    [aux_sym_constant_token3] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_LBRACE_EQjson] = ACTIONS(116),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(122),
  },
  [11] = {
    [sym__definition] = STATE(53),
    [sym_comment] = STATE(53),
    [sym_variable_declaration] = STATE(53),
    [sym_value] = STATE(53),
    [sym_string] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_js_import] = STATE(31),
    [sym_json_closure] = STATE(31),
    [sym_prisma_closure] = STATE(31),
    [sym_array] = STATE(31),
    [sym_dict] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(125),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [12] = {
    [sym__definition] = STATE(52),
    [sym_comment] = STATE(52),
    [sym_variable_declaration] = STATE(52),
    [sym_value] = STATE(52),
    [sym_string] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_js_import] = STATE(31),
    [sym_json_closure] = STATE(31),
    [sym_prisma_closure] = STATE(31),
    [sym_array] = STATE(31),
    [sym_dict] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(127),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
  [13] = {
    [sym__definition] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_variable_declaration] = STATE(65),
    [sym_value] = STATE(65),
    [sym_string] = STATE(31),
    [sym_constant] = STATE(31),
    [sym_js_import] = STATE(31),
    [sym_json_closure] = STATE(31),
    [sym_prisma_closure] = STATE(31),
    [sym_array] = STATE(31),
    [sym_dict] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(129),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(133), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(131), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [25] = 2,
    ACTIONS(137), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(135), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [50] = 2,
    ACTIONS(141), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(139), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [75] = 2,
    ACTIONS(145), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(143), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [100] = 2,
    ACTIONS(149), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(147), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [125] = 2,
    ACTIONS(153), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(151), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [150] = 2,
    ACTIONS(157), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(155), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [175] = 2,
    ACTIONS(161), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(159), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [200] = 2,
    ACTIONS(165), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(163), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [225] = 2,
    ACTIONS(170), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(167), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [250] = 2,
    ACTIONS(175), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(173), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [275] = 2,
    ACTIONS(179), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(177), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [300] = 2,
    ACTIONS(183), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(181), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [325] = 2,
    ACTIONS(187), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(185), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [350] = 2,
    ACTIONS(191), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(189), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [375] = 2,
    ACTIONS(195), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(193), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [400] = 2,
    ACTIONS(199), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(197), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [425] = 2,
    ACTIONS(203), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(201), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [450] = 2,
    ACTIONS(207), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(205), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [475] = 2,
    ACTIONS(211), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(209), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [500] = 2,
    ACTIONS(215), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(213), 8,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACK,
  [519] = 4,
    ACTIONS(217), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    STATE(70), 2,
      sym_string,
      sym_variable,
  [533] = 3,
    ACTIONS(223), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym_variable,
      aux_sym_js_import_repeat1,
  [544] = 4,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      aux_sym_string_token1,
    ACTIONS(232), 1,
      sym_string_content,
    STATE(37), 1,
      aux_sym_string_repeat1,
  [557] = 3,
    ACTIONS(223), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(36), 2,
      sym_variable,
      aux_sym_js_import_repeat1,
  [568] = 4,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      aux_sym_string_token1,
    ACTIONS(241), 1,
      sym_string_content,
    STATE(41), 1,
      aux_sym_string_repeat1,
  [581] = 3,
    ACTIONS(243), 1,
      aux_sym_variable_declaration_token1,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym_variable,
      aux_sym_js_import_repeat1,
  [592] = 4,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      aux_sym_string_token1,
    ACTIONS(252), 1,
      sym_string_content,
    STATE(37), 1,
      aux_sym_string_repeat1,
  [605] = 4,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      aux_sym_string_token1,
    ACTIONS(258), 1,
      sym_string_content,
    STATE(43), 1,
      aux_sym_string_repeat1,
  [618] = 4,
    ACTIONS(250), 1,
      aux_sym_string_token1,
    ACTIONS(252), 1,
      sym_string_content,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_string_repeat1,
  [631] = 3,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(264), 1,
      sym_dict_key,
    STATE(45), 1,
      aux_sym_dict_repeat1,
  [641] = 2,
    ACTIONS(266), 1,
      sym_dict_key,
    STATE(48), 1,
      aux_sym_dict_repeat1,
  [648] = 2,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_string,
  [655] = 2,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
  [662] = 2,
    ACTIONS(272), 1,
      sym_dict_key,
    STATE(48), 1,
      aux_sym_dict_repeat1,
  [669] = 2,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_string,
  [676] = 2,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_string,
  [683] = 2,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
  [690] = 2,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 1,
      anon_sym_COMMA,
  [697] = 2,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
  [704] = 1,
    ACTIONS(283), 2,
      aux_sym_variable_declaration_token1,
      anon_sym_RBRACE,
  [709] = 1,
    ACTIONS(285), 1,
      aux_sym_comment_token2,
  [713] = 1,
    ACTIONS(268), 1,
      anon_sym_COMMA,
  [717] = 1,
    ACTIONS(287), 1,
      anon_sym_COLON,
  [721] = 1,
    ACTIONS(289), 1,
      anon_sym_from,
  [725] = 1,
    ACTIONS(291), 1,
      anon_sym_from,
  [729] = 1,
    ACTIONS(293), 1,
      sym_dict_key,
  [733] = 1,
    ACTIONS(283), 1,
      anon_sym_from,
  [737] = 1,
    ACTIONS(295), 1,
      anon_sym_STAR_SLASH,
  [741] = 1,
    ACTIONS(297), 1,
      aux_sym_comment_token1,
  [745] = 1,
    ACTIONS(299), 1,
      anon_sym_COLON,
  [749] = 1,
    ACTIONS(279), 1,
      anon_sym_COMMA,
  [753] = 1,
    ACTIONS(139), 1,
      anon_sym_from,
  [757] = 1,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
  [761] = 1,
    ACTIONS(163), 1,
      anon_sym_from,
  [765] = 1,
    ACTIONS(303), 1,
      anon_sym_COLON,
  [769] = 1,
    ACTIONS(305), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 25,
  [SMALL_STATE(16)] = 50,
  [SMALL_STATE(17)] = 75,
  [SMALL_STATE(18)] = 100,
  [SMALL_STATE(19)] = 125,
  [SMALL_STATE(20)] = 150,
  [SMALL_STATE(21)] = 175,
  [SMALL_STATE(22)] = 200,
  [SMALL_STATE(23)] = 225,
  [SMALL_STATE(24)] = 250,
  [SMALL_STATE(25)] = 275,
  [SMALL_STATE(26)] = 300,
  [SMALL_STATE(27)] = 325,
  [SMALL_STATE(28)] = 350,
  [SMALL_STATE(29)] = 375,
  [SMALL_STATE(30)] = 400,
  [SMALL_STATE(31)] = 425,
  [SMALL_STATE(32)] = 450,
  [SMALL_STATE(33)] = 475,
  [SMALL_STATE(34)] = 500,
  [SMALL_STATE(35)] = 519,
  [SMALL_STATE(36)] = 533,
  [SMALL_STATE(37)] = 544,
  [SMALL_STATE(38)] = 557,
  [SMALL_STATE(39)] = 568,
  [SMALL_STATE(40)] = 581,
  [SMALL_STATE(41)] = 592,
  [SMALL_STATE(42)] = 605,
  [SMALL_STATE(43)] = 618,
  [SMALL_STATE(44)] = 631,
  [SMALL_STATE(45)] = 641,
  [SMALL_STATE(46)] = 648,
  [SMALL_STATE(47)] = 655,
  [SMALL_STATE(48)] = 662,
  [SMALL_STATE(49)] = 669,
  [SMALL_STATE(50)] = 676,
  [SMALL_STATE(51)] = 683,
  [SMALL_STATE(52)] = 690,
  [SMALL_STATE(53)] = 697,
  [SMALL_STATE(54)] = 704,
  [SMALL_STATE(55)] = 709,
  [SMALL_STATE(56)] = 713,
  [SMALL_STATE(57)] = 717,
  [SMALL_STATE(58)] = 721,
  [SMALL_STATE(59)] = 725,
  [SMALL_STATE(60)] = 729,
  [SMALL_STATE(61)] = 733,
  [SMALL_STATE(62)] = 737,
  [SMALL_STATE(63)] = 741,
  [SMALL_STATE(64)] = 745,
  [SMALL_STATE(65)] = 749,
  [SMALL_STATE(66)] = 753,
  [SMALL_STATE(67)] = 757,
  [SMALL_STATE(68)] = 761,
  [SMALL_STATE(69)] = 765,
  [SMALL_STATE(70)] = 769,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_closure, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_closure, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prisma_closure, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prisma_closure, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_declaration, 1, 0, 0), REDUCE(sym_variable, 1, 0, 0),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_declaration, 1, 0, 0), REDUCE(sym_variable, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_closure, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_closure, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_import, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_import, 4, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_import, 5, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_import, 5, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_import, 6, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_import, 6, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prisma_closure, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prisma_closure, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_js_import_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_js_import_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [301] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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

TS_PUBLIC const TSLanguage *tree_sitter_wasp(void) {
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

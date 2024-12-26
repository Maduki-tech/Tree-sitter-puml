#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_ATstartuml = 1,
  anon_sym_ATenduml = 2,
  anon_sym_COLON = 3,
  anon_sym_as = 4,
  anon_sym_actor = 5,
  anon_sym_participant = 6,
  anon_sym_boundary = 7,
  anon_sym_control = 8,
  anon_sym_entity = 9,
  anon_sym_database = 10,
  anon_sym_collections = 11,
  anon_sym_queue = 12,
  anon_sym_DASH_GT = 13,
  anon_sym_DASH_DASH_GT = 14,
  anon_sym_LT_DASH_DASH = 15,
  aux_sym_identifier_token1 = 16,
  sym_source_file = 17,
  sym__definition = 18,
  sym_umlCall = 19,
  sym__line = 20,
  sym_sequence = 21,
  sym_object = 22,
  sym_keyword = 23,
  sym_relation = 24,
  sym_identifier = 25,
  sym_text = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_umlCall_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATstartuml] = "@startuml",
  [anon_sym_ATenduml] = "@enduml",
  [anon_sym_COLON] = ":",
  [anon_sym_as] = "as",
  [anon_sym_actor] = "actor",
  [anon_sym_participant] = "participant",
  [anon_sym_boundary] = "boundary",
  [anon_sym_control] = "control",
  [anon_sym_entity] = "entity",
  [anon_sym_database] = "database",
  [anon_sym_collections] = "collections",
  [anon_sym_queue] = "queue",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_LT_DASH_DASH] = "<--",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_umlCall] = "umlCall",
  [sym__line] = "_line",
  [sym_sequence] = "sequence",
  [sym_object] = "object",
  [sym_keyword] = "keyword",
  [sym_relation] = "relation",
  [sym_identifier] = "identifier",
  [sym_text] = "text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_umlCall_repeat1] = "umlCall_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATstartuml] = anon_sym_ATstartuml,
  [anon_sym_ATenduml] = anon_sym_ATenduml,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_actor] = anon_sym_actor,
  [anon_sym_participant] = anon_sym_participant,
  [anon_sym_boundary] = anon_sym_boundary,
  [anon_sym_control] = anon_sym_control,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_database] = anon_sym_database,
  [anon_sym_collections] = anon_sym_collections,
  [anon_sym_queue] = anon_sym_queue,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_LT_DASH_DASH] = anon_sym_LT_DASH_DASH,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_umlCall] = sym_umlCall,
  [sym__line] = sym__line,
  [sym_sequence] = sym_sequence,
  [sym_object] = sym_object,
  [sym_keyword] = sym_keyword,
  [sym_relation] = sym_relation,
  [sym_identifier] = sym_identifier,
  [sym_text] = sym_text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_umlCall_repeat1] = aux_sym_umlCall_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATstartuml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATenduml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_actor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_participant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boundary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_control] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_database] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_collections] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_queue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_umlCall] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_umlCall_repeat1] = {
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
  [9] = 8,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      ADVANCE_MAP(
        '-', 1,
        ':', 75,
        '<', 3,
        '@', 23,
        'a', 14,
        'b', 42,
        'c', 41,
        'd', 11,
        'e', 39,
        'p', 6,
        'q', 64,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(95);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '@', 22,
        'a', 103,
        'b', 123,
        'c', 122,
        'd', 99,
        'e', 120,
        'p', 96,
        'q', 142,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == 'y') ADVANCE(81);
      END_STATE();
    case 71:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_ATstartuml);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ATenduml);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_actor);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_actor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_participant);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_participant);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_boundary);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_boundary);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_control);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_control);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_entity);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_database);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_database);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_collections);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_collections);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_queue);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_queue);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'b') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 71},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 71},
  [17] = {.lex_state = 71},
  [18] = {.lex_state = 71},
  [19] = {.lex_state = 71},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 71},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATstartuml] = ACTIONS(1),
    [anon_sym_ATenduml] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_actor] = ACTIONS(1),
    [anon_sym_participant] = ACTIONS(1),
    [anon_sym_boundary] = ACTIONS(1),
    [anon_sym_control] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_database] = ACTIONS(1),
    [anon_sym_collections] = ACTIONS(1),
    [anon_sym_queue] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym__definition] = STATE(10),
    [sym_umlCall] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_ATstartuml] = ACTIONS(5),
  },
  [2] = {
    [sym__line] = STATE(3),
    [sym_sequence] = STATE(3),
    [sym_object] = STATE(3),
    [sym_keyword] = STATE(13),
    [sym_identifier] = STATE(12),
    [aux_sym_umlCall_repeat1] = STATE(3),
    [anon_sym_ATenduml] = ACTIONS(7),
    [anon_sym_actor] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(9),
    [anon_sym_boundary] = ACTIONS(9),
    [anon_sym_control] = ACTIONS(9),
    [anon_sym_entity] = ACTIONS(9),
    [anon_sym_database] = ACTIONS(9),
    [anon_sym_collections] = ACTIONS(9),
    [anon_sym_queue] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
  },
  [3] = {
    [sym__line] = STATE(4),
    [sym_sequence] = STATE(4),
    [sym_object] = STATE(4),
    [sym_keyword] = STATE(13),
    [sym_identifier] = STATE(12),
    [aux_sym_umlCall_repeat1] = STATE(4),
    [anon_sym_ATenduml] = ACTIONS(13),
    [anon_sym_actor] = ACTIONS(9),
    [anon_sym_participant] = ACTIONS(9),
    [anon_sym_boundary] = ACTIONS(9),
    [anon_sym_control] = ACTIONS(9),
    [anon_sym_entity] = ACTIONS(9),
    [anon_sym_database] = ACTIONS(9),
    [anon_sym_collections] = ACTIONS(9),
    [anon_sym_queue] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
  },
  [4] = {
    [sym__line] = STATE(4),
    [sym_sequence] = STATE(4),
    [sym_object] = STATE(4),
    [sym_keyword] = STATE(13),
    [sym_identifier] = STATE(12),
    [aux_sym_umlCall_repeat1] = STATE(4),
    [anon_sym_ATenduml] = ACTIONS(15),
    [anon_sym_actor] = ACTIONS(17),
    [anon_sym_participant] = ACTIONS(17),
    [anon_sym_boundary] = ACTIONS(17),
    [anon_sym_control] = ACTIONS(17),
    [anon_sym_entity] = ACTIONS(17),
    [anon_sym_database] = ACTIONS(17),
    [anon_sym_collections] = ACTIONS(17),
    [anon_sym_queue] = ACTIONS(17),
    [aux_sym_identifier_token1] = ACTIONS(20),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(23), 1,
      anon_sym_ATenduml,
    ACTIONS(25), 9,
      anon_sym_actor,
      anon_sym_participant,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_identifier_token1,
  [15] = 2,
    ACTIONS(27), 1,
      anon_sym_ATenduml,
    ACTIONS(29), 9,
      anon_sym_actor,
      anon_sym_participant,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_identifier_token1,
  [30] = 2,
    ACTIONS(31), 1,
      anon_sym_ATenduml,
    ACTIONS(33), 9,
      anon_sym_actor,
      anon_sym_participant,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_identifier_token1,
  [45] = 2,
    ACTIONS(35), 1,
      anon_sym_ATenduml,
    ACTIONS(37), 9,
      anon_sym_actor,
      anon_sym_participant,
      anon_sym_boundary,
      anon_sym_control,
      anon_sym_entity,
      anon_sym_database,
      anon_sym_collections,
      anon_sym_queue,
      aux_sym_identifier_token1,
  [60] = 1,
    ACTIONS(35), 5,
      anon_sym_COLON,
      anon_sym_as,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [68] = 3,
    ACTIONS(5), 1,
      anon_sym_ATstartuml,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(11), 3,
      sym__definition,
      sym_umlCall,
      aux_sym_source_file_repeat1,
  [80] = 3,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_ATstartuml,
    STATE(11), 3,
      sym__definition,
      sym_umlCall,
      aux_sym_source_file_repeat1,
  [92] = 2,
    STATE(17), 1,
      sym_relation,
    ACTIONS(46), 3,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [101] = 2,
    ACTIONS(48), 1,
      aux_sym_identifier_token1,
    STATE(23), 1,
      sym_identifier,
  [108] = 1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_ATstartuml,
  [113] = 1,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_ATstartuml,
  [118] = 2,
    ACTIONS(54), 1,
      aux_sym_identifier_token1,
    STATE(7), 1,
      sym_text,
  [125] = 2,
    ACTIONS(48), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_identifier,
  [132] = 2,
    ACTIONS(56), 1,
      aux_sym_identifier_token1,
    STATE(5), 1,
      sym_identifier,
  [139] = 1,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
  [143] = 1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
  [147] = 1,
    ACTIONS(62), 1,
      anon_sym_COLON,
  [151] = 1,
    ACTIONS(64), 1,
      aux_sym_identifier_token1,
  [155] = 1,
    ACTIONS(66), 1,
      anon_sym_as,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 15,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 45,
  [SMALL_STATE(9)] = 60,
  [SMALL_STATE(10)] = 68,
  [SMALL_STATE(11)] = 80,
  [SMALL_STATE(12)] = 92,
  [SMALL_STATE(13)] = 101,
  [SMALL_STATE(14)] = 108,
  [SMALL_STATE(15)] = 113,
  [SMALL_STATE(16)] = 118,
  [SMALL_STATE(17)] = 125,
  [SMALL_STATE(18)] = 132,
  [SMALL_STATE(19)] = 139,
  [SMALL_STATE(20)] = 143,
  [SMALL_STATE(21)] = 147,
  [SMALL_STATE(22)] = 151,
  [SMALL_STATE(23)] = 155,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_umlCall_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_umlCall_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_umlCall_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 5, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence, 5, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_umlCall, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_umlCall, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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

TS_PUBLIC const TSLanguage *tree_sitter_plantuml(void) {
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

#include QMK_KEYBOARD_H
#include <stdio.h>
#include "lily58.h"

#define L_BASE 0
#define L_MAC 512
#define L_GAME 1024
#define L_GAMALT 1
#define L_LOWER 16
#define L_RAISE 32
#define L_ADJUST 112
#define L_ADJUST_TRI 14
#define L_NUMPAD 128

#define L_DEF_QWERTY 1
#define L_DEF_MAC 2
#define L_DEF_GAME 4

char layer_state_str[24];
char default_state_str[24];

const char *read_default_state(void) {
  switch(default_layer_state) {
    case L_DEF_QWERTY:
      snprintf(default_state_str, sizeof(default_state_str), "Default: Qwerty");
      break;
    case L_DEF_MAC:
      snprintf(default_state_str, sizeof(default_state_str), "Default: Mac");
      break;
    case L_DEF_GAME:
      snprintf(default_state_str, sizeof(default_state_str), "Default: Game");
      break;
    default:
      snprintf(default_state_str, sizeof(default_state_str), "Default: Undef-%ld", layer_state);
  }

  return default_state_str;
}

const char *read_layer_state(void) {
  char *def_layer;
  switch(default_layer_state) {
    case 0:
    case L_DEF_QWERTY:
      def_layer = "QWERTY";
      break;
    case L_DEF_MAC:
      def_layer = "MAC";
      break;
    case L_DEF_GAME:
      def_layer = "GAME";
      break;
    default:
      def_layer = "";
      break;
  }

  switch (layer_state)
  {
  case L_BASE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Default | %s", def_layer);
    break;
  case L_RAISE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Raise | %s", def_layer);
    break;
  case L_LOWER:
    snprintf(layer_state_str, sizeof(layer_state_str), "Lower | %s", def_layer);
    break;
  case L_ADJUST:
  case L_ADJUST_TRI:
    snprintf(layer_state_str, sizeof(layer_state_str), "Adjust | %s", def_layer);
    break;
  case L_MAC:
    snprintf(layer_state_str, sizeof(layer_state_str), "Mac | %s", def_layer);
    break;
  case L_GAME:
    snprintf(layer_state_str, sizeof(layer_state_str), "Game | %s", def_layer);
    break;
  case L_GAMALT:
    snprintf(layer_state_str, sizeof(layer_state_str), "Game Alt | %s", def_layer);
    break;
  case L_NUMPAD:
    snprintf(layer_state_str, sizeof(layer_state_str), "Numpad | %s", def_layer);
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Undef-%ld | %ld", layer_state, default_layer_state);
  }

  return layer_state_str;
}

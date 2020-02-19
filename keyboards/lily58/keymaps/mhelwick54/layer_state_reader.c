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
#define L_NUMPAD 32768

#define L_DEF_QWERTY 0
#define L_DEF_MAC 512
#define L_DEF_GAME 1024

char layer_state_str[40];

void read_default_state(char *layer_msg) {
  switch(default_layer_state) {
    case L_DEF_QWERTY:
      snprintf(layer_state_str, sizeof(layer_state_str), "%s | Default: Qwerty", layer_msg);
      break;
    case L_DEF_MAC:
      snprintf(layer_state_str, sizeof(layer_state_str), "%s | Default: Mac", layer_msg);
      break;
    case L_DEF_GAME:
      snprintf(layer_state_str, sizeof(layer_state_str), "%s | Default: Game", layer_msg);
      break;
    default:
      snprintf(layer_state_str, sizeof(layer_state_str), "%s | Default: Undef-%ld", layer_msg, layer_state);
  }
}

const char *read_layer_state(void) {
  switch (layer_state)
  {
  case L_BASE:
    //snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Default");
    read_default_state("Layer: Default");
    break;
  case L_RAISE:
    //snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Raise");
    read_default_state("Layer: Raise");
    break;
  case L_LOWER:
    //snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Lower");
    read_default_state("Layer: Lower");
    break;
  case L_ADJUST:
  case L_ADJUST_TRI:
    //snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Adjust");
    read_default_state("Layer: Adjust");
    break;
  case L_MAC:
    //snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Mac");
    read_default_state("Layer: Mac");
    break;
  case L_GAME:
    //snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Game");
    read_default_state("Layer: Game");
    break;
  case L_GAMALT:
    //snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Game Alt");
    read_default_state("Layer: Game Alt");
    break;
  case L_NUMPAD:
    //snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Numpad");
    read_default_state("Layer: Numpad");
    break;
  default: {
      char tmp[24];
      snprintf(layer_state_str, sizeof(tmp), "Layer: Undef-%ld", layer_state);
      read_default_state(tmp);
    }
  }

  return layer_state_str;
}

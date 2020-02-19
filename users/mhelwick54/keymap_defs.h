#pragma once

/*
  Heavily inspired and copied from drashna's userspace
*/

/*
  Since our quirky block definitions are basically a list of comma separated
  arguments, we need a wrapper in order for these definitions to be
  expanded before being used as arguments to the LAYOUT_xxx macro.
*/
#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

#define KEYMAP_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_ortho_4x12_wrapper(...)       LAYOUT_ortho_4x12(__VA_ARGS__)
#define LAYOUT_ortho_5x12_wrapper(...)       LAYOUT_ortho_5x12(__VA_ARGS__)
#define LAYOUT_lily58_wrapper(...)           LAYOUT_wrapper(__VA_ARGS__)

/*empty row*/
      /*_______, _______, _______, _______, _______, _______*/
#define _____________________EMPTY__________________________

/*left hand QWERTY*/
      /*  */
#define _____________________L_QWERTY_1_____________________ KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5
      /*  */
#define _____________________L_QWERTY_2_____________________ KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T
      /*  */
#define _____________________L_QWERTY_3_____________________ KC_LCTRL, KC_A,   KC_S,    KC_D,    KC_F,    KC_G
      /*  */
#define _____________________L_QWERTY_4_____________________ KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B
      /*  */
#define _____________________L_QWERTY_5_____________________ KC_LCTL,  KC_LGUI,KC_LALT, TG(NUM), LOWER,   KC_SPC

/*right hand QWERTY*/
      /*  */
#define _____________________R_QWERTY_1_____________________ KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX
      /*  */
#define _____________________R_QWERTY_2_____________________ KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC
      /*  */
#define _____________________R_QWERTY_3_____________________ KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT
      /*  */
#define _____________________R_QWERTY_4_____________________ KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT
      /*  */
#define _____________________R_QWERTY_5_____________________ KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT

/*
 * special left hand defs for MacOS QWERTY with LCTRL and LGUI swapped
 */
      /*  */
#define _____________________L_QWERTY_3_MAC_________________ KC_LGUI,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G
      /*  */
#define _____________________L_QWERTY_5_MAC_________________ KC_LGUI,  KC_LCTL,KC_LALT, TG(NUM), LOWER,   KC_SPC

/*left hand RAISE*/
      /*  */
#define _____________________L_RAISE_1______________________ _______, _______, _______, _______, _______, _______
      /*  */
#define _____________________L_RAISE_2______________________ KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5
      /*  */
#define _____________________L_RAISE_3______________________ KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6
      /*  */
#define _____________________L_RAISE_4______________________ KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12
      /*  */
#define _____________________L_RAISE_5______________________ _______, _______, _______, _______, _______, _______

/*right hand RAISE*/
      /*  */
#define _____________________R_RAISE_1______________________ _______, _______, _______, _______, _______, _______
      /*  */
#define _____________________R_RAISE_2______________________ KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC
      /*  */
#define _____________________R_RAISE_3______________________ _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS
      /*  */
#define _____________________R_RAISE_4______________________ KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END
      /*  */
#define _____________________R_RAISE_5______________________ _______, _______, _______, _______, _______, _______

/*left hand LOWER*/
      /*  */
#define _____________________L_LOWER_1______________________ _______, _______, _______, _______, _______, _______
      /*  */
#define _____________________L_LOWER_2______________________ KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
      /*  */
#define _____________________L_LOWER_3______________________ KC_DEL,  _______, _______, _______, _______, _______
      /*  */
#define _____________________L_LOWER_4______________________ KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END
      /*  */
#define _____________________L_LOWER_5______________________ _______, _______, _______, _______, _______, _______

/*right hand LOWER*/
      /*  */
#define _____________________R_LOWER_1______________________ _______, _______, _______, _______, _______, _______
      /*  */
#define _____________________R_LOWER_2______________________ KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC
      /*  */
#define _____________________R_LOWER_3______________________ _______, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE
      /*  */
#define _____________________R_LOWER_4______________________ _______, _______, _______, _______, _______, _______
      /*  */
#define _____________________R_LOWER_5______________________ _______, _______, _______, _______, _______, _______

/*left hand ADJUST*/
      /*  */
#define _____________________L_ADJUST_1_____________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
      /*  */
#define _____________________L_ADJUST_2_____________________ TG(_NUM),DF(_QWERTY),DF(_MAC),DF(_GAMING),XXXXXXX,XXXXXXX
      /*  */
#define _____________________L_ADJUST_3_____________________ KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
      /*  */
#define _____________________L_ADJUST_4_____________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
      /*  */
#define _____________________L_ADJUST_5_____________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

/*right hand ADJUST*/
      /*  */
#define _____________________R_ADJUST_1______________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
      /*  */
#define _____________________R_ADJUST_2______________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
      /*  */
#define _____________________R_ADJUST_3______________________ XXXXXXX, XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI
      /*  */
#define _____________________R_ADJUST_4______________________ XXXXXXX, XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD
      /*  */
#define _____________________R_ADJUST_5______________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX

/*numpad*/
      /*  */
#define _____________________NUMPAD_1________________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
      /*  */
#define _____________________NUMPAD_2________________________ TG(_NUM),XXXXXXX, KC_P7,   KC_P8,   KC_P9,   KC_PAST
      /*  */
#define _____________________NUMPAD_3________________________ KC_NLCK, KC_PSLS, KC_P4,   KC_P5,   KC_P6,   KC_PMNS
      /*  */
#define _____________________NUMPAD_4________________________ XXXXXXX, XXXXXXX, KC_P1,   KC_P2,   KC_P3,   KC_PPLS
      /*  */
#define _____________________NUMPAD_5________________________ XXXXXXX, XXXXXXX, XXXXXXX, KC_PDOT, KC_P0, KC_PENT

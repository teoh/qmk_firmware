/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define SCSHT LGUI(LSFT(KC_LCTL))
#define CORNR LALT(LSFT(KC_LCTL))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
             KC_EQL , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
             KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLASH,
             KC_LCTL, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
MT(MOD_LSFT, KC_GRV), KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,MT(MOD_RSFT, KC_ESC),
                    LALT_T(KC_LBRC),KC_RBRC,                                                         KC_LEFT, KC_RIGHT,
                                                     KC_LGUI,KC_ENT,                 KC_BSPC, KC_SPC,
                                                       LOWER, LOWER,                   KC_UP,KC_DOWN,
                                                       RAISE, CORNR,                      SCSHT, RAISE
  ),

  [_LOWER] = LAYOUT_5x6(

     KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
     _______,_______,_______,_______,_______,KC_LBRC,                        _______, KC_P7 , KC_P8 , KC_P9 ,_______,_______,
     _______,KC_MPLY,KC_MPRV,KC_MNXT,KC_MUTE,KC_VOLU,                        _______, KC_P4 , KC_P5 , KC_P6 ,_______,_______,
     _______,_______,KC_SLCK,KC_PAUS,_______,KC_VOLD,                        _______, KC_P1 , KC_P2 , KC_P3 ,KC_SLSH,_______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            KC_DEL ,KC_P0,
                                             _______,_______,            KC_PGUP,KC_PGDN,
                                             _______,_______,            _______,_______

  ),

  [_RAISE] = LAYOUT_5x6(
       KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
                                               _______,_______,            _______ ,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______
  ),
};

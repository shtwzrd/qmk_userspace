#pragma once

enum layer_names {
    BSE,
    AUX,
    NAV,
    MOD,
    NUM,
    SYM,
    FUN
};

enum custom_keycodes {
  L_LOCK = 0x7E40, // SAFE_RANGE
  OS_NUM,
  OS_SYM,
  OS_FUN,
  OS_NAV,
  OS_MOD
};

#define LT_AUX LT(AUX, KC_BSPC)
#define LT_NAV LT(NAV, KC_SPC)
#define LT_NUM LT(NUM, KC_ESC)
#define LT_SYM LT(SYM, KC_TAB)

#define ALTTAB LALT(KC_TAB)
#define RALTTAB LSFT(LALT(KC_TAB))

#define _BSE \
    KC_Q   , KC_W   , KC_F   , KC_P   , KC_B   , KC_J   , KC_L   , KC_U   , KC_Y   , KC_QUOT, \
    KC_A   , KC_R   , KC_S   , KC_T   , KC_G   , KC_M   , KC_N   , KC_E   , KC_I   , KC_O,    \
    KC_Z   , KC_X   , KC_C   , KC_D   , KC_V   , KC_K   , KC_H   , KC_COMM, KC_DOT , KC_SLSH, \
                      LT_AUX , LT_NAV , OS_MOD , OS_MOD , LT_NUM , LT_SYM
#define _AUX \
    _______, _______, KC_UP  , _______, _______, KC_BRID, KC_VOLD, KC_MUTE, KC_VOLU, KC_BRIU, \
    _______, KC_LEFT, KC_DOWN, KC_RGHT, QK_LEAD, QK_LEAD, KC_MPRV, KC_MRWD, KC_MFFD, KC_MNXT, \
    _______, _______, _______, _______, L_LOCK , L_LOCK , _______, _______, _______, _______, \
                      KC_BSPC, _______, _______, _______, KC_MPLY, KC_MSTP
#define _NAV \
    KC_QUOT, KC_Y   , KC_U   , KC_L   , KC_J   , KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_INS , \
    KC_O   , KC_I   , KC_E   , KC_N   , KC_M   , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_CAPS, \
    KC_SLSH, KC_DOT , KC_COMM, KC_H   , KC_K   , L_LOCK , KC_PSTE, KC_COPY, KC_CUT , KC_UNDO, \
                      _______, KC_SPC , _______, _______, KC_ESC , KC_TAB
#define _MOD \
    KC_ESC , OS_NUM , OS_SYM , OS_FUN , OS_NAV , _______, OS_FUN , _______, _______, _______, \
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_ENT , KC_DEL , KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, \
    KC_RGUI, KC_RALT, KC_RCTL, CW_TOGG, KC_APP , L_LOCK , CW_TOGG, KC_RCTL, KC_RALT, KC_RGUI, \
                      KC_DEL , _______, OS_NAV , _______, _______, _______
#define _NUM \
    KC_LBRC, KC_7   , KC_8   , KC_9   , KC_RBRC, KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_DQUO, \
    KC_SCLN, KC_4   , KC_5   , KC_6   , KC_EQL , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, \
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_BSLS, L_LOCK , _______, KC_LT  , KC_GT  , KC_QUES, \
                      KC_MINS, KC_0   , _______, _______, KC_ESC , _______
#define _SYM \
    KC_LCBR, KC_AMPR, KC_ASTR, KC_UNDS, KC_RCBR, _______, _______, _______, _______, _______, \
    KC_COLN, KC_DLR , KC_PERC, KC_CIRC, KC_PLUS, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, \
    KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_PIPE, L_LOCK , ALTTAB , RALTTAB, _______, _______, \
                      KC_LPRN, KC_RPRN, _______, _______, _______, KC_TAB
#define _FUN \
    KC_F12 , KC_F7  , KC_F8  , KC_F9  , KC_PSCR, PB_1   , KC_F19 , KC_F20 , KC_F21 , KC_F24 , \
    KC_F11 , KC_F4  , KC_F5  , KC_F6  , KC_SCRL, PB_2   , KC_F16 , KC_F17 , KC_F18 , KC_F23 , \
    KC_F10 , KC_F1  , KC_F2  , KC_F3  , KC_PAUS, L_LOCK , KC_F13 , KC_F14 , KC_F15 , KC_F22 , \
                      _______, _______, _______, _______, _______, _______

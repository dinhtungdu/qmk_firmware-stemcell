#pragma once

#ifdef VIA_ENABLE
/* VIA configuration. */
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#ifdef VIAL_ENABLE
/** Vial configuration. */
#define VIAL_KEYBOARD_UID \
  { 0x86, 0xA6, 0x20, 0x70, 0x08, 0xB1, 0x6F, 0x80 }
#define VIAL_UNLOCK_COMBO_ROWS \
  { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS \
  { 0, 0 }
#endif  // VIAL_ENABLE

/* Disable action features. */
#define NO_ACTION_MACRO     // Disable old-style macro handling.
#define NO_ACTION_FUNCTION  // Disable old-style function handling.
#endif                      // VIA_ENABLE


// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64

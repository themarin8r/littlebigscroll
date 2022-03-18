// Copyright 2022 themarin8r (@themarin8r)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT( \
    k00, k01, k02, k03, k04    \
) { \
 	{ k00, KC_NO, KC_NO, KC_NO, KC_NO },  \
 	{ KC_NO, k01, KC_NO, KC_NO, KC_NO },  \
	{ KC_NO, KC_NO, k02, KC_NO, KC_NO },  \
	{ KC_NO, KC_NO, KC_NO, k03, KC_NO },  \
	{ KC_NO, KC_NO, KC_NO, KC_NO, k04 },  \
}

/*
 * #define LAYOUT( \
 *    k00, k01, k02, k03, k04    \
 * ) { \
 *	{ k00, k01, k02, k03, k04 },  \
 * }
*/


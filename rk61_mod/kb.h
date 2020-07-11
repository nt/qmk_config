#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	      K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014, \
	      K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, \
	      K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212,       K214, \
	      K301,       K303, K304, K305, K306, K307, K308, K309, K310, K311, K312,       K314, \
	      K401, K402, K403,                   K407,                   K411, K412, K413, K414  \
) { \
	{ KC_NO, K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014 }, \
	{ KC_NO, K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114 }, \
	{ KC_NO, K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  KC_NO, K214 }, \
	{ KC_NO, K301,  KC_NO, K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  KC_NO, K314 }, \
	{ KC_NO, K401,  K402,  K403,  KC_NO, KC_NO, KC_NO, K407,  KC_NO, KC_NO, KC_NO, K411,  K412,  K413,  K414 }  \
}

#endif
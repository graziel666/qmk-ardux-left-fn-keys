// Copyright (c) 2021 Mike "KemoNine" Crosson
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "quantum.h"
/*
#define LAYOUT_split( \
	K00, K01, K02, K03, K04, K05, K06, K07,\
	K10, K11, K12, K13, K14, K15, K16, K17 \
) { \
	{ K00, K01, K02, K03, K04, K05, K06, K07, }, \
	{ K10, K11, K12, K13, K14, K15, K16, K17 }  \
}

*/
#define LAYOUT( \
    K00, K01, K02, K03, \
    K10, K11, K12, K13 \
    ) { \
    { K00, K01, K02, K03, }, \
    { K10, K11, K12, K13}  \
   }


/*
#define LAYOUT( \
	K00, K01, K02, K03, K04, K05, K06, K07,\
	K10, K11, K12, K13, K14, K15, K16, K17 \
) { \
	{ K00, K01, K02, K03, K04, K05, K06, K07, }, \
	{ K10, K11, K12, K13, K14, K15, K16, K17 }  \
}
*/


#include <stdbool.h>
#include <stdint.h>

#include "common.h"

#ifndef _ENTRY_NAMES_GBNIM_H
#define _ENTRY_NAMES_GBNIM_H


    // ==== SHARED CODE WITH C STARTS HERE ====

    // ==== gbnim ====
    // Nim 2.x mm:arc + os:standalone nimTestErrorFlag
    DEF_PATTERN_STR(sig_gbnim_exception_handle_string, "exception handling is not available");

    // Nim 2.x mm:arc + os:standalone raiseIndexError2
    DEF_PATTERN_STR(sig_gbnim_index_out_of_bounds_string, "indexOutOfBounds");

    // ==== SHARED CODE WITH C ENDS HERE ====


#endif // _ENTRY_NAMES_GBNIM_H

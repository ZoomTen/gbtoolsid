// This is free and unencumbered software released into the public domain.
// For more information, please refer to <https://unlicense.org>
// bbbbbr 2020

#include <stdint.h>
#include <stdbool.h>

#include "common.h"
#include "entries.h"
#include "gbtoolchainid.h"

#include "entry_names_gbnim.h"

#include <stdio.h>

// Check for GB Nim
void check_gbnim(void) {

    tool_entry entry;

    // ==== SHARED CODE WITH C STARTS HERE ====
    entry = FORMAT_ENTRY(TYPE_TOOLS, "gbnim", "");
    if (FIND_PATTERN_STR_NOTERM(sig_gbnim_exception_handle_string)) {
        if (FIND_PATTERN_STR_NOTERM(sig_gbnim_index_out_of_bounds_string)) {
            entry_add(entry);
        }
    }

    // ==== SHARED CODE WITH C ENDS HERE ====
}

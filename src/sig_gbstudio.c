// This is free and unencumbered software released into the public domain.
// For more information, please refer to <https://unlicense.org>
// bbbbbr 2020

#include <stdint.h>
#include <stdbool.h>

#include "common.h"
#include "entries.h"
#include "gbtoolchainid.h"


// ====GB STUDIO
// All GB Studio records can be at any location (depends on where the linker places them)
// Fades
    const uint8_t sig_gbs_fades_1_0_0_to_1_2_1[] = {0x0, 0x1, 0x3, 0x7, 0xF, 0x1F, 0x3F, 0x00, 0x00, 0x42, 0x82, 0xD2, 0xD2, 0x00, 0x00, 0x40, 0x90, 0xA4, 0xE4};
    // Similar to above, but lacks lead in bytes
    const uint8_t sig_gbs_fades_2_0_0_beta1[] =      {0x00, 0x00, 0x42, 0x82, 0xD2, 0xD2, 0x00, 0x00, 0x40, 0x90, 0xA4, 0xE4};
    const uint8_t sig_gbs_fades_2_0_0_beta2_plus[] = {0x00, 0x00, 0x40, 0x80, 0x90, 0xD0, 0xD0, 0x00, 0x00, 0x40, 0x90, 0xA4, 0xE4, 0xE4, 0xFF, 0xFF, 0xF8, 0xE4, 0xD4, 0xD0, 0xD0, 0xFF, 0xFF, 0xFE, 0xE9, 0xE5, 0xE4, 0xE4};
// UI_b.c uicolors
    const uint8_t sig_gbs_uicolors_1_0_0[]      = {0xD0, 0xd6, 0xd2, 0xd8, 0xd1, 0xd7, 0xd3, 0xd5, 0xd4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
    const uint8_t sig_gbs_uicolors_1_1_0_plus[] = {0xC0, 0xC6, 0xC2, 0xC8, 0xC1, 0xC7, 0xC3, 0xC5, 0xC4, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xCA, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
    // Preliminary Beta 5+ (11/20/2020)
    const uint8_t sig_gbs_uicolors_2_0_0_beta5_plus[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F};

    // ADDED:Apr 30, 2021 (v2.0.0-beta5) -> REMOVED:Feb 20, 2022 (3.0.3)
    // const tables:  https://github.com/chrismaltby/gb-studio/blob/aaf89ef51a0c40ce5e8cbc6aa0eefa3f35e3cec8/appData/src/gb/src/core/music_manager.c#L258
    const uint8_t sig_gbs_musicmanager_c_FX_ADDR_LO__2_0_0_b5_to_3_0_3[] = {0x05,  0x04,  0x05,  0x04,  0x00,  0x10,  0x16,  0x1A,  0x20,  0x00,  0x0E,  0x0D,  0x0B,  0x07 };

    // ADDED: Mar 28, 2021 (v2.0.0-beta5) - ~~~
    // inline asm: https://sourcegraph.com/github.com/chrismaltby/gb-studio/-/blob/appData/src/gb/src/core/fade_manager.c?L156
    const uint8_t sig_gbs_fade_manager_c_dmgfadetowhitestep_2_0_0_b5_plus[] = {0x3A, 0x5E, 0xB7, 0xC8, 0x57, 0x26, 0x04, 0x7B, 0xE6, 0x03, 0x28, 0x01, 0x3D, 0xCB, 0x3F, 0xCB, 0x1D, 0xCB, 0x3F, 0xCB, 0x1D, 0xCB, 0x3B, 0xCB, 0x3B, 0x25, 0x20, 0xEB, 0x5D, 0x15, 0x20, 0xE5, 0xC9};

    // ADDED: Preliminary 3.0 Alpha 1+ (03/08/2021) - ~~~
    // const table: https://github.com/chrismaltby/gb-studio/blame/d045e345be310314ccc4f371a7d5370cae702d3e/appData/src/gb/src/core/math.c
    const uint8_t sig_gbs_math_c_sinetable_3_0_0_alpha1_plus[] = {0x00, 0x03, 0x06, 0x09, 0x0C, 0x10, 0x13, 0x16, 0x19, 0x1C, 0x1F, 0x22, 0x25, 0x28, 0x2B, 0x2E, 0x31, 0x33, 0x36, 0x39, 0x3C, 0x3F, 0x41, 0x44, 0x47, 0x49, 0x4C, 0x4E, 0x51, 0x53, 0x55, 0x58, 0x5A, 0x5C, 0x5E, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6A, 0x6B, 0x6D, 0x6F, 0x70, 0x71, 0x73, 0x74, 0x75, 0x76, 0x78, 0x79, 0x7A};

    //TODO: See SFX: sig_vgm2gbsfx_aud3waveram_load[] for GBStudio 3.1.0+ (not confirmed present for all)



// Check GBStudio engine
bool check_gbstudio(void) {

    tool_entry entry = {.type = TYPE_ENGINE, .c_name = "GBStudio", .c_version = ""};

    // GBStudio 1.0.0 - 1.2.1
    if (find_pattern(sig_gbs_fades_1_0_0_to_1_2_1, sizeof(sig_gbs_fades_1_0_0_to_1_2_1))) {

        if (find_pattern(sig_gbs_uicolors_1_0_0, sizeof(sig_gbs_uicolors_1_0_0))) {
            entry_add_with_version(entry, "1.0.0");
            return true;
        }
        // GBStudio 1.1.0 - 1.2.1
        else if (find_pattern(sig_gbs_uicolors_1_1_0_plus, sizeof(sig_gbs_uicolors_1_1_0_plus))) {
            entry_add_with_version(entry, "1.0.0 - 1.2.1");
            return true;
        }
    }
    // GBStudio 2.0.0 beta 1 (Should only be checked if previous test fails)
    else if (find_pattern(sig_gbs_fades_2_0_0_beta1, sizeof(sig_gbs_fades_2_0_0_beta1))) {
        entry_add_with_version(entry, "2.0.0 Beta 1");
        return true;
    }

    // GBStudio 2.0.0 beta 2+
    if (find_pattern(sig_gbs_fades_2_0_0_beta2_plus, sizeof(sig_gbs_fades_2_0_0_beta2_plus))) {
        // GBStudio 2.0.0 beta 5+ (preliminary- not yet offically released)
        // Check Beta 5 first, then fall back since it has shared signatures
        if (find_pattern(sig_gbs_uicolors_2_0_0_beta5_plus, sizeof(sig_gbs_uicolors_2_0_0_beta5_plus))) {
            entry_add_with_version(entry, "2.0.0 beta 5+");
            return true;
        }
        // Otherwise GBStudio 2.0.0 beta 2 - 4
        else {
            entry_add_with_version(entry, "2.0.0 beta 2 - 4");
            return true;
        }
    }

    // GBStudio 3.0.0+
    if (find_pattern(sig_gbs_math_c_sinetable_3_0_0_alpha1_plus, sizeof(sig_gbs_math_c_sinetable_3_0_0_alpha1_plus)) &&
        find_pattern(sig_gbs_fade_manager_c_dmgfadetowhitestep_2_0_0_b5_plus, sizeof(sig_gbs_fade_manager_c_dmgfadetowhitestep_2_0_0_b5_plus))) {
        // entry_check_match() Relies on GBDK tool check being run before ZGB is tested (it is)

        // ADDED:Apr 30, 2021 (v2.0.0-beta5) -> REMOVED:Feb 20, 2022 (3.0.3)
        if (find_pattern(sig_gbs_musicmanager_c_FX_ADDR_LO__2_0_0_b5_to_3_0_3, sizeof(sig_gbs_musicmanager_c_FX_ADDR_LO__2_0_0_b5_to_3_0_3))) {

            // GBStudio 3.0.0 alpha 1+ uses GBDK 4.0.4
            if (entry_check_match(TYPE_TOOLS, STR_GBDK, STR_GBDK_2020_4_0_4)) {
                entry_add_with_version(entry, "3.0.0 alpha 1+");
                return true;
            }
            // GBStudio 3.0.0 official - 3.1.0+ uses GBDK 4.0.5 & 4.0.6 (which cannot be differentiated
            else if (entry_check_match(TYPE_TOOLS, STR_GBDK, STR_GBDK_2020_4_0_5_to_4_0_6)) {
                entry_add_with_version(entry, "3.0.0 - 3.0.3");
                return true;
            }
        }
        else {
            entry_add_with_version(entry, "3.1.0+");
        }

        return true;
    }

    return false;
}

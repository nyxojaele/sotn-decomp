/*
 * File: 27448.c
 * Overlay: CHI
 * Description: Abandoned Mine
 */

#include "chi.h"

extern u16 g_InitializeData0[];

// D_8018142C
static u16 g_ESoulStealOrbAngles[] = {
    0x0820, 0x0840, 0x0860, 0x0880, 0x08C0, 0x0900, 0x0940, 0x0A00
};

// D_8018143C
static s16 g_ESoulStealOrbSprt[] = {
    0xFFFD, 0xFFFD, 0x0008, 0x0008, 0x00D0, 0x0068, 0x00D8, 0x0070,
    0xFFFD, 0xFFFD, 0x0008, 0x0008, 0x00C8, 0x0068, 0x00D0, 0x0070,
    0xFFF9, 0xFFF9, 0x0010, 0x000F, 0x00C8, 0x0070, 0x00D8, 0x007F,
    0xFFF5, 0xFFF5, 0x0018, 0x0017, 0x0080, 0x0068, 0x0098, 0x007F,
    0xFFF5, 0xFFF5, 0x0018, 0x0017, 0x0098, 0x0068, 0x00B0, 0x007F,
    0xFFF5, 0xFFF5, 0x0018, 0x0017, 0x00B0, 0x0068, 0x00C8, 0x007F
};

// D_8018149C
static u8 g_ESoulStealOrbAnim[] = {
    0x04, 0x02, 0x03, 0x03, 0x03, 0x04, 0x03, 0x05, 0x03, 0x06, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00
};

// [Duplicate]
// func_801A7448: [E_SOUL_STEAL_ORB] EntitySoulStealOrb
#include "../entity_soul_steal_orb.h"

// [Duplicate]
// func_801A77DC: [E_ENEMY_BLOOD] EntityEnemyBlood
#include "../entity_enemy_blood.h"
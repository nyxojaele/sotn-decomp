#include "game.h"
#include "stage.h"

void func_8019B698(Entity*);
void func_801A3520(Entity*);
void func_801A2CAC(Entity*);
void func_8019F3C0(Entity*);
void func_801A0654(Entity*);
void func_801A5F54(Entity*);
void func_801A7448(Entity*);
void func_801A7C8C(Entity*);
void func_801AD2BC(Entity*);
void func_801A36C0(Entity*);
void func_801A3F58(Entity*);
void func_801A4A28(Entity*);
void func_801A77DC(Entity*);
void func_801A4B50(Entity*);
void EntityDummy(Entity*);
void func_8019B3FC(Entity*);
void func_8019B4DC(Entity*);
void func_801A519C(Entity*);
void func_801A54C4(Entity*);
void func_801A55B4(Entity*);
void EntityDemonSwitchWall(Entity*);
void EntityDemonSwitch(Entity*);
void EntityBreakableWall(Entity*);
void EntityBreakableWallDebris(Entity*);
void func_8019B914(Entity*);
void func_8019D1A8(Entity*);
void func_8019CBA8(Entity*);
void func_8019D9C8(Entity*);
void func_801A97C8(Entity*);
void func_801A9D40(Entity*);
void func_801A9E94(Entity*);
void func_801A813C(Entity*);
void func_801A8DE8(Entity*);
void func_801A8EAC(Entity*);
void func_801A93D4(Entity*);
void func_801A9588(Entity*);
void func_801AA020(Entity*);
void func_801AA390(Entity*);
void func_801AB0C0(Entity*);
void func_801AB7CC(Entity*);
void func_801AC074(Entity*);
void func_801AC730(Entity*);
void func_801ACB6C(Entity*);
void func_801ACEF4(Entity*);

PfnEntityUpdate PfnEntityUpdates[] = {
    func_8019B698,  // EntityUnkId01
    func_801A3520,  // EntityExplosion
    func_801A2CAC,  // EntityPrizeDrop
    func_8019F3C0,  // EntityDamageDisplay
    func_801A0654,  // EntityRedDoor
    func_801A5F54,  // EntityIntenseExplosion
    func_801A7448,  // EntitySoulStealOrb
    func_801A7C8C,  // EntityRoomForeground
    func_801AD2BC,  // EntityStageNamePopup
    func_801A36C0,  // EntityEquipItemDrop
    func_801A3F58,  // EntityRelicOrb
    func_801A4A28,  // EntityHeartDrop
    func_801A77DC,  // EntityEnemyBlood
    func_801A4B50,  // EntityMessageBox
    EntityDummy,
    EntityDummy,
    func_8019B3FC,  // EntityBackgroundBlock
    func_8019B4DC,  // EntityUnkId12
    func_801A519C,  // EntityUnkId13
    func_801A54C4,  // EntityUnkId14
    func_801A55B4,  // EntityUnkId15
    EntityDemonSwitchWall,
    EntityDemonSwitch,
    EntityBreakableWall,
    EntityBreakableWallDebris,
    func_8019B914,  // E_ID_1A - CEN.func_8018DB18
    func_8019CBA8,  // E_ID_1B
    func_8019D1A8,  // E_ID_1C
    func_8019D9C8,  // E_ID_1D
    func_801A97C8,  // E_ID_1E
    func_801A9D40,  // E_ID_1F
    func_801A9E94,  // E_ID_20
    func_801A813C,  // E_ID_21
    func_801A8DE8,  // E_ID_22
    func_801A8EAC,  // E_ID_23
    func_801A93D4,  // E_ID_24
    func_801A9588,  // E_ID_25
    func_801AA020,  // E_ID_26
    func_801AA390,  // E_ID_27
    func_801AB0C0,  // E_ID_28
    func_801AB7CC,  // E_ID_29
    func_801AC074,  // E_ID_2A
    func_801AC730,  // E_ID_2B
    func_801ACB6C,  // E_ID_2C
    func_801ACEF4,  // E_ID_2D
};

EntityInit EntityInit_80180610 = {
    .animSet = ANIMSET_OVL(1),
    .animCurFrame = 0,
    .unk5A = 0,
    .palette = PAL_DRA(0),
    .enemyId = 0,
};

EntityInit EntityInit_8018061C = {
    .animSet = ANIMSET_DRA(3),
    .animCurFrame = 0,
    .unk5A = 0,
    .palette = PAL_DRA(0),
    .enemyId = 1,
};

EntityInit EntityInit_80180628 = {
    .animSet = ANIMSET_DRA(3),
    .animCurFrame = 0,
    .unk5A = 0,
    .palette = PAL_DRA(0),
    .enemyId = 2,
};

EntityInit EntityInit_80180634 = {
    .animSet = ANIMSET_DRA(0),
    .animCurFrame = 0,
    .unk5A = 0,
    .palette = PAL_DRA(0),
    .enemyId = 4,
};

EntityInit EntityInit_80180640 = {
    .animSet = ANIMSET_DRA(0),
    .animCurFrame = 0,
    .unk5A = 0,
    .palette = PAL_DRA(0),
    .enemyId = 5,
};

EntityInit EntityInit_8018064C = {
    .animSet = ANIMSET_DRA(0),
    .animCurFrame = 0,
    .unk5A = 0,
    .palette = PAL_DRA(0),
    .enemyId = 2,
};

EntityInit EntityInit_80180658 = {
    .animSet = ANIMSET_DRA(0),
    .animCurFrame = 0,
    .unk5A = 0,
    .palette = PAL_DRA(0),
    .enemyId = 1,
};

EntityInit EntityInit_80180664 = {
    .animSet = ANIMSET_DRA(0),
    .animCurFrame = 0,
    .unk5A = 0,
    .palette = PAL_DRA(0),
    .enemyId = 3,
};

EntityInit EntityInit_80180670 = {
    .animSet = ANIMSET_DRA(0),
    .animCurFrame = 0,
    .unk5A = 0,
    .palette = PAL_DRA(0),
    .enemyId = 3,
};

EntityInit EntityInit_8018067C = {
    .animSet = ANIMSET_OVL(1),
    .animCurFrame = 0,
    .unk5A = 0,
    .palette = PAL_DRA(0),
    .enemyId = 5,
};

EntityInit EntityInit_80180688 = {
    .animSet = ANIMSET_OVL(3),
    .animCurFrame = 1,
    .unk5A = 72,
    .palette = PAL_DRA(516),
    .enemyId = 221,
};

EntityInit EntityInit_80180694 = {
    .animSet = ANIMSET_OVL(3),
    .animCurFrame = 0,
    .unk5A = 72,
    .palette = PAL_DRA(516),
    .enemyId = 222,
};

EntityInit EntityInit_801806A0 = {
    .animSet = ANIMSET_OVL(4),
    .animCurFrame = 0,
    .unk5A = 92,
    .palette = PAL_DRA(747),
    .enemyId = 223,
};

EntityInit EntityInit_801806AC = {
    .animSet = ANIMSET_OVL(2),
    .animCurFrame = 0,
    .unk5A = 72,
    .palette = PAL_DRA(512),
    .enemyId = 225,
};

EntityInit EntityInit_801806B8 = {
    .animSet = ANIMSET_OVL(2),
    .animCurFrame = 0,
    .unk5A = 72,
    .palette = PAL_DRA(512),
    .enemyId = 5,
};

EntityInit EntityInit_801806C4 = {
    .animSet = ANIMSET_OVL(2),
    .animCurFrame = 0,
    .unk5A = 72,
    .palette = PAL_DRA(512),
    .enemyId = 226,
};

EntityInit EntityInit_801806D0 = {
    .animSet = ANIMSET_OVL(7),
    .animCurFrame = 0,
    .unk5A = 76,
    .palette = PAL_DRA(518),
    .enemyId = 157,
};

EntityInit EntityInit_801806DC = {
    .animSet = ANIMSET_OVL(7),
    .animCurFrame = 0,
    .unk5A = 76,
    .palette = PAL_DRA(518),
    .enemyId = 158,
};

EntityInit EntityInit_801806E8 = {
    .animSet = ANIMSET_OVL(7),
    .animCurFrame = 0,
    .unk5A = 76,
    .palette = PAL_DRA(518),
    .enemyId = 159,
};

EntityInit EntityInit_801806F4 = {
    .animSet = ANIMSET_OVL(7),
    .animCurFrame = 0,
    .unk5A = 76,
    .palette = PAL_DRA(518),
    .enemyId = 160,
};

EntityInit EntityInit_80180700 = {
    .animSet = ANIMSET_OVL(8),
    .animCurFrame = 0,
    .unk5A = 80,
    .palette = PAL_DRA(522),
    .enemyId = 161,
};

EntityInit EntityInit_8018070C = {
    .animSet = ANIMSET_OVL(8),
    .animCurFrame = 0,
    .unk5A = 80,
    .palette = PAL_DRA(522),
    .enemyId = 162,
};

EntityInit EntityInit_80180718 = {
    .animSet = ANIMSET_OVL(8),
    .animCurFrame = 0,
    .unk5A = 80,
    .palette = PAL_DRA(522),
    .enemyId = 163,
};

EntityInit EntityInit_80180724 = {
    .animSet = ANIMSET_OVL(8),
    .animCurFrame = 55,
    .unk5A = 80,
    .palette = PAL_DRA(522),
    .enemyId = 164,
};

static u16 D_80180730[] = {
    0x0140, 0x00FF,
};

static u16 D_80180734[] = {
    0x2502, 0x2602, 0x2702, 0x2602, 0x0000, 0x0000,
};

u16 D_80180740[] = {
    0x0006, 0x01FA, 0x0000, 0x0000, 0x0000, 0x0010, 0x0000, 0x0000,
};

u16* D_80180750[] = {
    D_80180730,
};

ObjInit2 ObjInit2_80180754 = {
    .animSet = ANIMSET_OVL(1),
    .zPriority = 0xC0,
    .unk4 = {.s = 0},
    .palette = PAL_DRA(0),
    .drawFlags = DRAW_TRANSP | DRAW_UNK02,
    .drawMode = 0x30,
    .unkC = 0,
    .unk10 = D_80180734,
};

u16 g_eRedDoorTiles[3][8] = {
    {
        0x039C,
        0x039B,
        0x039C,
        0x039B,
        0x010D,
        0x010B,
        0x010D,
        0x010B,
    },
    {
        0x03A3,
        0x03A4,
        0x03A5,
        0x03A6,
        0x02F4,
        0x0309,
        0x0305,
        0x0307,
    },
    {
        0x03A3,
        0x03A7,
        0x03A8,
        0x03A3,
        0x02F4,
        0x030F,
        0x0310,
        0x02F4,
    },
};

u8 D_80180798[] = {32, 32, 32, 32, 32, 32, 80, 32};
u8 D_801807A0[] = {0, 0, 0, 0, 0, 0, 0, 0};

u16 D_801807A8[] = {
    0x0000, 0x0000, 0x0600, 0x0100, 0x0000, 0x0000, 0x0600, 0x01FC,
    0x0000, 0x00FC, 0x0600, 0x01FC, 0x0000, 0x0000, 0x0600, 0x01FC,
    0x0000, 0x00FC, 0x0600, 0x0300, 0x0000, 0x00FC, 0x0600, 0x01FC,
    0x0000, 0x00FC, 0x0600, 0x0300, 0x0000, 0x0200, 0x0600, 0x0300,
    0x0000, 0x01FC, 0x0500, 0x02FC, 0x0000, 0x0000, 0x0500, 0x0400,
    0x0000, 0x0000, 0x0500, 0x0400, 0x0000, 0x01FC, 0x0500, 0x02FC,
    0x00F0, 0x01FC, 0x0310, 0x02FC, 0x00F0, 0x01FC, 0x0310, 0x02FC,
};

static u16 D_80180818[] = {
    0x0E03, 0x0F04, 0x1004, 0x1104, 0x1204, 0x1304, 0x1403, 0x0000,
};

static u16 D_80180828[] = {
    0x1503, 0x1604, 0x1704, 0x1804, 0x1904, 0x1A04, 0x1B03, 0x0000,
};

u16* D_80180838[] = {
    D_80180818, D_80180828, NULL, NULL, NULL, NULL, NULL, NULL,
};

// height?
u8 D_80180858[] = {
    12, 20, 0, 0, 0, 0, 0, 0,
};

// params?
u8 D_80180860[] = {
    3, 3, 0, 0, 0, 0, 0, 0,
};

// animset?
u16 D_80180868[] = {
    ANIMSET_OVL(1), ANIMSET_OVL(1), 0, 0, 0, 0, 0, 0,
};

// draw mode?
u8 D_80180878[] = {
    DRAW_TPAGE | DRAW_TPAGE2,
    DRAW_TPAGE | DRAW_TPAGE2,
    DRAW_DEFAULT,
    DRAW_DEFAULT,
    DRAW_DEFAULT,
    DRAW_DEFAULT,
    DRAW_DEFAULT,
    DRAW_DEFAULT,
};

s16 D_80180880[] = {
    -4, -4, 3, -6, 2, 9, -4, 12, 0, 2, 0, 15, 0, 31,
};

u16 Room3_DemonSwitchWallTilesCollision[] = {
    0x039D, 0x03A0, 0x03A0, 0x039E, 0x03A0, 0x03A0, 0x03A0, 0x039F,
    0x03A0, 0x03A0, 0x03A0, 0x03A0,
};

u16 D_801808B4[] = {    // Room3_DemonSwitchWallTilesNoCollision
    0x01C2, 0x01BF, 0x01BF, 0x01D2, 0x01BF, 0x01BF, 0x01BF, 0x01D3,
    0x01BF, 0x01BF, 0x01BF, 0x01BF,
};

u16 Room5_BreakableWallTilesCollision[] = {
    0x0399, 0x039A, 0x0399, 0x039A, 0x039B, 0x039C, 0x039B, 0x039C,
    0x0399, 0x039A, 0x0399, 0x039A, 0x0106, 0x0108, 0x0106, 0x0108,
    0x010B, 0x010D, 0x010B, 0x010D, 0x0106, 0x0108, 0x0106, 0x0108,
};

s16 Room5_BreakableRoomEntityData[] = {
    0x000D, 0x0012, 0xFFE8, 0x0000, 0x000D, 0x0012, 0xFFF8, 0x0800,
    0x000D, 0x0012, 0x0000, 0x0000, 0x000D, 0x0012, 0x0008, 0x0200,
    0x000D, 0x0012, 0x0018, 0x0800, 0x000C, 0x0006, 0x0014, 0x0100,
    0x000C, 0x0008, 0x0000, 0x0301, 0x000C, 0x0004, 0xFFEC, 0xFE00,
    0x000B, 0xFFFC, 0xFFF4, 0x0000, 0x000C, 0xFFFC, 0x000C, 0x0101,
    0x000B, 0xFFF8, 0xFFF0, 0xFF80, 0x000C, 0xFFF4, 0x0000, 0x0000,
    0x000C, 0xFFF0, 0xFFE8, 0x0100, 0x000B, 0xFFF0, 0x0008, 0x0180,
    0x000B, 0xFFEC, 0x0010, 0xFE40,
};

u16 D_80180974[] = {
    0x022B, 0x022C, 0x0239, 0x023A, 0x023B, 0x023C, 0x0247, 0x0248,
    0x0249, 0x024A, 0x0255, 0x0256, 0x0257, 0x0258, 0x0259, 0x0265,
    0x0266, 0x0000,
};

u16 D_80180998[] = {
    0x028B, 0x028C, 0x0299, 0x029A, 0x029B, 0x029C, 0x02A7, 0x02A8,
    0x02A9, 0x02AA, 0x02B5, 0x02B6, 0x02B7, 0x02B8, 0x02B9, 0x02C5,
    0x02C6, 0x0000,
};

u16 D_801809BC[] = {
    0x01F9, 0x0224, 0x01F9, 0x0207, 0x0243, 0x0225, 0x01F9, 0x01E7,
    0x0244, 0x0226, 0x0229, 0x01E7, 0x0243, 0x01B5, 0x0226, 0x024B,
    0x0226, 0x0000,
};

u16 D_801809E0[] = {
    0x01C4, 0x0222,
};

u16 D_801809E4[] = {
    0x00C8, 0x0098, 0x00F2, 0x00C5, 0x0170, 0x0094, 0x00A5, 0x00A5,
    0x00B9, 0x00A3, 0x00A3, 0x00A3, 0x00A3, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0001,
    0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0101,
};

u16 D_80180A20[] = {
    0x8163, 0x8164, 0x8166, 0x8164, 0x8160, 0x8166, 0x8162, 0x8164,
    0x8167, 0x8164, 0x8167, 0x8168, 0x8168, 0x8164, 0x8161, 0x8164,
    0x8165, 0x8165, 0x8163, 0x8163, 0x8165, 0x8165,
};

u8 D_80180A4C[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x2B, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x68, 0x00, 0x68, 0x00,
    0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x23, 0x00, 0x50, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x7D, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x2D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6D, 0x00, 0x7B, 0x00, 0x00, 0x00,
    0x17, 0x00, 0x41, 0x00, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, 0x4C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x38, 0x00, 0x14, 0x00, 0x5C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x58, 0x00, 0x44, 0x00, 0x24, 0x00, 0x37, 0x00, 0x00, 0x00, 0x02, 0x00, 0x59, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x7C, 0x00,
    0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x2A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x00,
    0x8D, 0x00, 0x09, 0x00, 0x2C, 0x00, 0x30, 0x00, 0x20, 0x00, 0x00, 0x00, 0x05, 0x00, 0x47, 0x00,
    0x00, 0x00, 0x5E, 0x00, 0x35, 0x00, 0x34, 0x00, 0x6A, 0x00, 0x00, 0x00, 0x3A, 0x00, 0x00, 0x00,
    0x66, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00,
    0x29, 0x00, 0x39, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x4D, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3F, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x6F, 0x00, 0x00, 0x00, 0x2F, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00,
    0x00, 0x00, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x11, 0x00, 0x36, 0x00, 0x36, 0x00,
    0x00, 0x00, 0x5F, 0x00, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x00, 0x75, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x2E, 0x00, 0x00, 0x00, 0x69, 0x00, 0x21, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4B, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3D, 0x00, 0x00, 0x00,
    0x78, 0x00, 0x8A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x89, 0x00, 0x48, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x40, 0x00, 0x8B, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x28, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x22, 0x00, 0x12, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x00, 0x60, 0x00, 0x00, 0x00,
    0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4E, 0x00,
    0x00, 0x00, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4F, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x57, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x00, 0x65, 0x00, 0x00, 0x00, 0x3B, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x25, 0x00, 0x62, 0x00,
    0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00,
    0x1B, 0x00, 0x6B, 0x00, 0x00, 0x00, 0x8C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x63, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x85, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5D, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5B, 0x00, 0x91, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
};

u8 D_80180D6C[] = {
    0x00, 0x40, 0x20, 0x10 
};

u8 D_80180D70[] = {
    0x80, 0x80, 0xA0, 0xA0, 0xC0, 0xC0, 0x00, 0x00 
};

u8 D_80180D78[] = {
    0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00, 0x00 
};

u8 D_80180D80[] = {
    0x00, 0x80, 0x00, 0x40, 0x00, 0x20, 0x00, 0x10, 0x00, 0x08, 0x00, 0x02, 0x00, 0x01, 0x80, 0x00,
    0x00, 0x04, 0x40, 0x00 
};

u8 D_80180D94[] = {
    0x02, 0x04, 0x03, 0x05, 0x06, 0x07, 0x08, 0x0A, 0x02, 0x01, 0x00, 0x00 
};

u8 D_80180DA0[] = {
    0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00,
    0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x05, 0x00, 0x05, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x02, 0x00, 0x06, 0x00, 0x07, 0x00, 0xC6, 0x00 
};

u8 D_80180DE0[] = {
    0x00, 0x0C, 0x68, 0x01, 0x00, 0x0F, 0x69, 0x01, 0xD0, 0x0F, 0x6A, 0x01, 0xF0, 0x0F, 0x6B, 0x01,
    0xF8, 0x0F, 0x6C, 0x01, 0xFD, 0x0F, 0x6D, 0x01, 0xFF, 0x0F, 0x6E, 0x01 
};

u8 D_80180DFC[] = {
    0xB2, 0x01, 0xB3, 0x01, 0xB6, 0x01, 0xB7, 0x01, 0xB4, 0x01, 0xB5, 0x01, 0xB0, 0x01, 0xB1, 0x01 
};

u8 D_80180E0C[] = {
    0xB1, 0xB7, 0xB1, 0xB7, 0x21, 0x21, 0x5F, 0x5F, 0x88, 0xA8, 0x88, 0xA8, 0x21, 0x21, 0x5F, 0x5F,
    0xA8, 0x88, 0xA8, 0x88, 0x21, 0x21, 0x5F, 0x5F 
};

u8 D_80180E24[] = {
    0x00, 0x00, 0x65, 0x00, 0xC9, 0x00, 0x2D, 0x01, 0x91, 0x01, 0xF5, 0x01, 0x59, 0x02, 0xBC, 0x02,
    0x1F, 0x03, 0x81, 0x03, 0xE3, 0x03, 0x44, 0x04, 0xA5, 0x04, 0x05, 0x05, 0x64, 0x05, 0xC2, 0x05,
    0x1F, 0x06, 0x7C, 0x06, 0xD7, 0x06, 0x32, 0x07, 0x8B, 0x07, 0xE3, 0x07, 0x3A, 0x08, 0x8F, 0x08,
    0xE4, 0x08, 0x37, 0x09, 0x88, 0x09, 0xD8, 0x09, 0x26, 0x0A, 0x73, 0x0A, 0xBF, 0x0A, 0x08, 0x0B,
    0x50, 0x0B, 0x97, 0x0B, 0xDB, 0x0B, 0x1E, 0x0C, 0x5E, 0x0C, 0x9D, 0x0C, 0xDA, 0x0C, 0x15, 0x0D,
    0x4E, 0x0D, 0x85, 0x0D, 0xB9, 0x0D, 0xEC, 0x0D, 0x1C, 0x0E, 0x4B, 0x0E, 0x77, 0x0E, 0xA1, 0x0E,
    0xC8, 0x0E, 0xEE, 0x0E, 0x11, 0x0F, 0x31, 0x0F, 0x50, 0x0F, 0x6C, 0x0F, 0x85, 0x0F, 0x9C, 0x0F,
    0xB1, 0x0F, 0xC4, 0x0F, 0xD4, 0x0F, 0xE1, 0x0F, 0xEC, 0x0F, 0xF5, 0x0F, 0xFB, 0x0F, 0xFF, 0x0F,
    0x00, 0x10, 0xFF, 0x0F, 0xFB, 0x0F, 0xF5, 0x0F, 0xEC, 0x0F, 0xE1, 0x0F, 0xD4, 0x0F, 0xC4, 0x0F,
    0xB1, 0x0F, 0x9C, 0x0F, 0x85, 0x0F, 0x6C, 0x0F, 0x50, 0x0F, 0x31, 0x0F, 0x11, 0x0F, 0xEE, 0x0E,
    0xC8, 0x0E, 0xA1, 0x0E, 0x77, 0x0E, 0x4B, 0x0E, 0x1C, 0x0E, 0xEC, 0x0D, 0xB9, 0x0D, 0x85, 0x0D,
    0x4E, 0x0D, 0x15, 0x0D, 0xDA, 0x0C, 0x9D, 0x0C, 0x5E, 0x0C, 0x1E, 0x0C, 0xDB, 0x0B, 0x97, 0x0B,
    0x50, 0x0B, 0x08, 0x0B, 0xBF, 0x0A, 0x73, 0x0A, 0x26, 0x0A, 0xD8, 0x09, 0x88, 0x09, 0x37, 0x09,
    0xE4, 0x08, 0x8F, 0x08, 0x3A, 0x08, 0xE3, 0x07, 0x8B, 0x07, 0x32, 0x07, 0xD7, 0x06, 0x7C, 0x06,
    0x1F, 0x06, 0xC2, 0x05, 0x64, 0x05, 0x05, 0x05, 0xA5, 0x04, 0x44, 0x04, 0xE3, 0x03, 0x81, 0x03,
    0x1F, 0x03, 0xBC, 0x02, 0x59, 0x02, 0xF5, 0x01, 0x91, 0x01, 0x2D, 0x01, 0xC9, 0x00, 0x65, 0x00,
    0x00, 0x00, 0x9B, 0xFF, 0x37, 0xFF, 0xD3, 0xFE, 0x6F, 0xFE, 0x0B, 0xFE, 0xA7, 0xFD, 0x44, 0xFD,
    0xE1, 0xFC, 0x7F, 0xFC, 0x1D, 0xFC, 0xBC, 0xFB, 0x5B, 0xFB, 0xFB, 0xFA, 0x9C, 0xFA, 0x3E, 0xFA,
    0xE1, 0xF9, 0x84, 0xF9, 0x29, 0xF9, 0xCE, 0xF8, 0x75, 0xF8, 0x1D, 0xF8, 0xC6, 0xF7, 0x71, 0xF7,
    0x1C, 0xF7, 0xC9, 0xF6, 0x78, 0xF6, 0x28, 0xF6, 0xDA, 0xF5, 0x8D, 0xF5, 0x41, 0xF5, 0xF8, 0xF4,
    0xB0, 0xF4, 0x69, 0xF4, 0x25, 0xF4, 0xE2, 0xF3, 0xA2, 0xF3, 0x63, 0xF3, 0x26, 0xF3, 0xEB, 0xF2,
    0xB2, 0xF2, 0x7B, 0xF2, 0x47, 0xF2, 0x14, 0xF2, 0xE4, 0xF1, 0xB5, 0xF1, 0x89, 0xF1, 0x5F, 0xF1,
    0x38, 0xF1, 0x12, 0xF1, 0xEF, 0xF0, 0xCF, 0xF0, 0xB0, 0xF0, 0x94, 0xF0, 0x7B, 0xF0, 0x64, 0xF0,
    0x4F, 0xF0, 0x3C, 0xF0, 0x2C, 0xF0, 0x1F, 0xF0, 0x14, 0xF0, 0x0B, 0xF0, 0x05, 0xF0, 0x01, 0xF0,
    0x00, 0xF0, 0x01, 0xF0, 0x05, 0xF0, 0x0B, 0xF0, 0x14, 0xF0, 0x1F, 0xF0, 0x2C, 0xF0, 0x3C, 0xF0,
    0x4F, 0xF0, 0x64, 0xF0, 0x7B, 0xF0, 0x94, 0xF0, 0xB0, 0xF0, 0xCF, 0xF0, 0xEF, 0xF0, 0x12, 0xF1,
    0x38, 0xF1, 0x5F, 0xF1, 0x89, 0xF1, 0xB5, 0xF1, 0xE4, 0xF1, 0x14, 0xF2, 0x47, 0xF2, 0x7B, 0xF2,
    0xB2, 0xF2, 0xEB, 0xF2, 0x26, 0xF3, 0x63, 0xF3, 0xA2, 0xF3, 0xE2, 0xF3, 0x25, 0xF4, 0x69, 0xF4,
    0xB0, 0xF4, 0xF8, 0xF4, 0x41, 0xF5, 0x8D, 0xF5, 0xDA, 0xF5, 0x28, 0xF6, 0x78, 0xF6, 0xC9, 0xF6,
    0x1C, 0xF7, 0x71, 0xF7, 0xC6, 0xF7, 0x1D, 0xF8, 0x75, 0xF8, 0xCE, 0xF8, 0x29, 0xF9, 0x84, 0xF9,
    0xE1, 0xF9, 0x3E, 0xFA, 0x9C, 0xFA, 0xFB, 0xFA, 0x5B, 0xFB, 0xBC, 0xFB, 0x1D, 0xFC, 0x7F, 0xFC,
    0xE1, 0xFC, 0x44, 0xFD, 0xA7, 0xFD, 0x0B, 0xFE, 0x6F, 0xFE, 0xD3, 0xFE, 0x37, 0xFF, 0x9B, 0xFF,
    0x01, 0x0E, 0x00, 0x00, 0x02, 0x03, 0x06, 0x04, 0x05, 0x05, 0x05, 0x06, 0x04, 0x07, 0x03, 0x08,
    0x04, 0x09, 0x05, 0x0A, 0x05, 0x0B, 0x06, 0x0C, 0x07, 0x03, 0x06, 0x04, 0x05, 0x05, 0x05, 0x06,
    0x04, 0x07, 0x03, 0x08, 0x04, 0x09, 0x05, 0x0A, 0x05, 0x0B, 0x06, 0x0C, 0x02, 0x0D, 0x00, 0x00,
    0x04, 0x14, 0x07, 0x15, 0x06, 0x16, 0x03, 0x17, 0x03, 0x18, 0x06, 0x19, 0x02, 0x15, 0x00, 0x00,
    0x01, 0x1A, 0x00, 0x00, 0x01, 0x1B, 0x00, 0x00, 0x01, 0x1C, 0x00, 0x00, 0x01, 0x1D, 0x00, 0x00,
    0x01, 0x1E, 0x00, 0x00, 0x01, 0x1F, 0x00, 0x00, 0x01, 0x20, 0x00, 0x00, 0x01, 0x21, 0x00, 0x00,
    0x02, 0x22, 0x02, 0x23, 0x02, 0x24, 0x02, 0x25, 0x02, 0x26, 0x02, 0x27, 0x02, 0x28, 0x02, 0x29,
    0x00, 0x00, 0x00, 0x00, 0x1A, 0x0F, 0x06, 0x10, 0x04, 0x11, 0x02, 0x12, 0x04, 0x11, 0x06, 0x10,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x13, 0x00, 0x00, 0x05, 0x2A, 0x05, 0x2B, 0x05, 0x2C, 0x05, 0x2D,
    0x05, 0x2E, 0x05, 0x2F, 0x05, 0x30, 0x05, 0x31, 0x00, 0x00, 0x00, 0x00, 0x05, 0x32, 0x05, 0x33,
    0x05, 0x34, 0x05, 0x35, 0x05, 0x36, 0x05, 0x37, 0x05, 0x38, 0x05, 0x39, 0x00, 0x00, 0x00, 0x00,
    0x05, 0x3A, 0x05, 0x3B, 0x05, 0x3C, 0x05, 0x3D, 0x05, 0x3E, 0x05, 0x3F, 0x05, 0x40, 0x05, 0x41,
    0x00, 0x00, 0x00, 0x00, 0x05, 0x42, 0x05, 0x43, 0x05, 0x44, 0x05, 0x45, 0x05, 0x46, 0x05, 0x47,
    0x05, 0x48, 0x05, 0x49, 0x00, 0x00, 0x00, 0x00, 0x05, 0x4A, 0x05, 0x4B, 0x05, 0x4C, 0x05, 0x4D,
    0x05, 0x4E, 0x05, 0x4F, 0x05, 0x50, 0x05, 0x51, 0x00, 0x00, 0x00, 0x00, 0x05, 0x52, 0x05, 0x53,
    0x05, 0x54, 0x05, 0x55, 0x05, 0x56, 0x05, 0x57, 0x05, 0x58, 0x05, 0x59, 0x00, 0x00, 0x00, 0x00,
    0x05, 0x5A, 0x05, 0x5B, 0x05, 0x5C, 0x05, 0x5D, 0x05, 0x5E, 0x05, 0x5F, 0x05, 0x60, 0x05, 0x61,
    0x00, 0x00, 0x00, 0x00, 0x05, 0x62, 0x05, 0x63, 0x05, 0x64, 0x05, 0x65, 0x05, 0x66, 0x05, 0x67,
    0x05, 0x68, 0x05, 0x69, 0x00, 0x00, 0x00, 0x00, 0x05, 0x6A, 0x05, 0x6B, 0x05, 0x6C, 0x05, 0x6D 
};

u8 D_80181154[] = {
    0x05, 0x6E, 0x05, 0x6F, 0x05, 0x70, 0x05, 0x71, 0x00, 0x00, 0x00, 0x00, 0x01, 0x8F, 0x00, 0x00,
    0xFC, 0xFC, 0x04, 0xFC, 0xFC, 0x04, 0x04, 0x04, 0x80, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00,
    0x04, 0x00, 0x03, 0x00, 0x06, 0x00, 0x05, 0x00, 0x07, 0x00, 0x08, 0x00, 0x09, 0x00, 0x00, 0x00 
};

u8 D_80181184[] = {
    0x00, 0x00, 0x0E, 0x00, 0x0F, 0x00, 0x11, 0x00, 0x10, 0x00, 0x13, 0x00, 0x12, 0x00, 0x14, 0x00,
    0x15, 0x00, 0x16, 0x00 
};

u8 D_80181198[] = {
    0xF4, 0xB1, 0x19, 0x80, 0xEC, 0xB1, 0x19, 0x80, 0xE4, 0xB1, 0x19, 0x80, 0xDC, 0xB1, 0x19, 0x80,
    0xD4, 0xB1, 0x19, 0x80, 0xCC, 0xB1, 0x19, 0x80, 0xC4, 0xB1, 0x19, 0x80, 0xBC, 0xB1, 0x19, 0x80,
    0xB4, 0xB1, 0x19, 0x80, 0xAC, 0xB1, 0x19, 0x80 
};

u8 D_801811C0[] = {
    0x01, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00,
    0xFA, 0x00, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0xBC, 0x02, 0x00, 0x00, 0xE8, 0x03, 0x00, 0x00,
    0xD0, 0x07, 0x00, 0x00, 0x88, 0x13, 0x00, 0x00 
};

u8 D_801811E8[] = {
    0x24, 0x10, 0x18, 0x80, 0x28, 0x10, 0x18, 0x80, 0x54, 0x10, 0x18, 0x80, 0x64, 0x10, 0x18, 0x80,
    0x68, 0x10, 0x18, 0x80, 0x6C, 0x10, 0x18, 0x80, 0x70, 0x10, 0x18, 0x80, 0x74, 0x10, 0x18, 0x80,
    0x78, 0x10, 0x18, 0x80, 0x7C, 0x10, 0x18, 0x80, 0x80, 0x10, 0x18, 0x80, 0x84, 0x10, 0x18, 0x80,
    0x98, 0x10, 0x18, 0x80, 0xA8, 0x10, 0x18, 0x80, 0xE8, 0x10, 0x18, 0x80, 0xD4, 0x10, 0x18, 0x80,
    0xAC, 0x10, 0x18, 0x80, 0xC0, 0x10, 0x18, 0x80, 0xFC, 0x10, 0x18, 0x80, 0x10, 0x11, 0x18, 0x80,
    0x24, 0x11, 0x18, 0x80, 0x38, 0x11, 0x18, 0x80, 0x4C, 0x11, 0x18, 0x80, 0x60, 0x11, 0x18, 0x80 
};

u8 D_80181248[] = {
    0xFA, 0xFF, 0x04, 0x00, 0x00, 0x00, 0xF8, 0xFF 
};

u8 D_80181250[] = {
    0x01, 0x05, 0x00, 0x00 
};

u8 D_80181254[] = {
    0x00, 0x00, 0xFF, 0xFF, 0x00, 0x80, 0xFE, 0xFF, 0x00, 0x80, 0xFE, 0xFF, 0x00, 0x80, 0xFE, 0xFF,
    0x00, 0x00, 0xFD, 0xFF, 0x02, 0x01, 0x02, 0x02, 0x02, 0x03, 0x02, 0x04, 0x02, 0x05, 0x02, 0x06,
    0x02, 0x07, 0x02, 0x08, 0x00, 0x00, 0x00, 0x00 
};

u8 D_8018127C[] = {
    0x01, 0x09, 0x02, 0x0A, 0x02, 0x0B, 0x02, 0x0C, 0x02, 0x0D, 0x02, 0x0E, 0x02, 0x0F, 0x02, 0x10,
    0x02, 0x11, 0x02, 0x12, 0x03, 0x13, 0x04, 0x14, 0x00, 0x00, 0x00, 0x00, 0x02, 0x15, 0x02, 0x16,
    0x02, 0x17, 0x02, 0x18, 0x02, 0x19, 0x02, 0x1A, 0x02, 0x1B, 0x02, 0x1C, 0x02, 0x1D, 0x02, 0x1E,
    0x02, 0x1F, 0x02, 0x20, 0x02, 0x21, 0x02, 0x22, 0x02, 0x23, 0x02, 0x24, 0x02, 0x25, 0x02, 0x26,
    0x02, 0x27, 0x02, 0x28, 0x02, 0x29, 0x02, 0x2A, 0x00, 0x00, 0x00, 0x00, 0x02, 0x2B, 0x02, 0x2C,
    0x02, 0x2D, 0x02, 0x2E, 0x02, 0x2F, 0x02, 0x30, 0x02, 0x31, 0x02, 0x32, 0x02, 0x33, 0x02, 0x34,
    0x02, 0x35, 0x02, 0x36, 0x02, 0x37, 0x02, 0x38, 0x02, 0x39, 0x02, 0x3A, 0x02, 0x3B, 0x02, 0x3C,
    0x02, 0x3D, 0x02, 0x3E, 0x02, 0x3F, 0x02, 0x40, 0x02, 0x41, 0x02, 0x42, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x43, 0x00, 0x00 
};

u8 D_80181300[] = {
    0x68, 0x12, 0x18, 0x80, 0x7C, 0x12, 0x18, 0x80, 0x98, 0x12, 0x18, 0x80, 0xC8, 0x12, 0x18, 0x80,
    0xFC, 0x12, 0x18, 0x80 
};

u8 D_80181314[] = {
    0x34, 0xB2, 0x19, 0x80 
};

u8 D_80181318[] = {
    0x10, 0x00, 0x0C, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xF8, 0xFF, 0xF4, 0xFF 
};

u8 D_80181328[] = {
    0xE0, 0xFF, 0xE6, 0xFF, 0xEC, 0xFF, 0xF3, 0xFF, 0xF9, 0xFF, 0xFF, 0xFF, 0x05, 0x00, 0x0C, 0x00 
};

u8 D_80181338[] = {
    0xF0, 0xFF, 0xF4, 0xFF, 0xF8, 0xFF, 0xFC, 0xFF, 0x00, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0C, 0x00 
};

u8 D_80181348[] = {
    0x20, 0x00, 0x1A, 0x00, 0x14, 0x00, 0x0D, 0x00, 0x07, 0x00, 0x01, 0x00, 0xFB, 0xFF, 0xF4, 0xFF 
};

u8 D_80181358[] = {
    0xF8, 0xFF, 0x04, 0x00, 0xFE, 0xFF, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0xFC, 0xFF, 0x02, 0x00 
};

u8 D_80181368[] = {
    0xFE, 0xFF, 0x02, 0x00, 0x04, 0x00, 0xFD, 0xFF, 0x00, 0x00, 0x02, 0x00, 0xFC, 0xFF, 0x03, 0x00 
};

u8 D_80181378[] = {
    0x10, 0x00, 0x20, 0x00, 0x30, 0x00, 0x40, 0x00, 0x50, 0x00, 0x60, 0x00, 0x70, 0x00, 0x00, 0x00 
};

u8 D_80181388[] = {
    0x30, 0x00, 0x50, 0x00, 0x80, 0x00, 0xB0, 0x00, 0xD0, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00 
};

u8 D_80181398[] = {
    0x00, 0x04, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00,
    0x00, 0x78, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00 
};

u8 D_801813B0[] = {
    0x00, 0x08, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00,
    0x00, 0xE0, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00 
};

u8 D_801813C8[] = {
    0x01, 0x09, 0x15, 0x2B 
};

u8 D_801813CC[] = {
    0x10, 0x00, 0x18, 0x00, 0x2A, 0x00, 0x2F, 0x00 
};

u8 D_801813D4[] = {
    0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00 
};

u8 D_801813DC[] = {
    0x02, 0x01, 0x02, 0x02, 0x02, 0x03, 0x02, 0x04, 0x02, 0x05, 0x04, 0x06, 0xFF, 0x00, 0x00, 0x00 
};

u8 D_801813EC[] = {
    0x00, 0x00, 0x01, 0x00, 0x03, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x05, 0x00,
    0x03, 0x00, 0x04, 0x00, 0x06, 0x00, 0x07, 0x00, 0x04, 0x00, 0x05, 0x00, 0x07, 0x00, 0x08, 0x00 
};

u8 D_8018140C[] = {
    0x00, 0x00, 0x01, 0x00, 0x03, 0x00, 0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x05, 0x00,
    0x03, 0x00, 0x04, 0x00, 0x06, 0x00, 0x07, 0x00, 0x04, 0x00, 0x05, 0x00, 0x07, 0x00, 0x08, 0x00 
};

u8 D_8018142C[] = {
    0x20, 0x08, 0x40, 0x08, 0x60, 0x08, 0x80, 0x08, 0xC0, 0x08, 0x00, 0x09, 0x40, 0x09, 0x00, 0x0A 
};

u8 D_8018143C[] = {
    0xFD, 0xFF, 0xFD, 0xFF, 0x08, 0x00, 0x08, 0x00, 0xD0, 0x00, 0x68, 0x00, 0xD8, 0x00, 0x70, 0x00,
    0xFD, 0xFF, 0xFD, 0xFF, 0x08, 0x00, 0x08, 0x00, 0xC8, 0x00, 0x68, 0x00, 0xD0, 0x00, 0x70, 0x00,
    0xF9, 0xFF, 0xF9, 0xFF, 0x10, 0x00, 0x0F, 0x00, 0xC8, 0x00, 0x70, 0x00, 0xD8, 0x00, 0x7F, 0x00,
    0xF5, 0xFF, 0xF5, 0xFF, 0x18, 0x00, 0x17, 0x00, 0x80, 0x00, 0x68, 0x00, 0x98, 0x00, 0x7F, 0x00,
    0xF5, 0xFF, 0xF5, 0xFF, 0x18, 0x00, 0x17, 0x00, 0x98, 0x00, 0x68, 0x00, 0xB0, 0x00, 0x7F, 0x00,
    0xF5, 0xFF, 0xF5, 0xFF, 0x18, 0x00, 0x17, 0x00, 0xB0, 0x00, 0x68, 0x00, 0xC8, 0x00, 0x7F, 0x00 
};

u8 D_8018149C[] = {
    0x04, 0x02, 0x03, 0x03, 0x03, 0x04, 0x03, 0x05, 0x03, 0x06, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x01, 0xFF, 0x00, 0x40, 0x02, 0xFF, 0x00, 0x40, 0x02, 0xFF, 0x00, 0x40, 0x01, 0xFF, 0x00,
    0x40, 0x03, 0xFF, 0x00 
};

u8 D_801814C0[] = {
    0x06, 0x00, 0xEC, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xAC, 0x14, 0x18, 0x80, 0x0C, 0x00, 0xEC, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xB4, 0x14, 0x18, 0x80, 0x0C, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB8, 0x14, 0x18, 0x80, 0x06, 0x00, 0xEC, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB0, 0x14, 0x18, 0x80,
    0x0C, 0x00, 0xEC, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xBC, 0x14, 0x18, 0x80, 0x0C, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xB8, 0x14, 0x18, 0x80 
};

u8 D_80181538[] = {
    0x01, 0x01, 0x01, 0x02, 0x02, 0x01, 0x02, 0x02, 0x02, 0x01, 0x02, 0x02, 0x03, 0x01, 0x03, 0x02,
    0x03, 0x01, 0x04, 0x02, 0x04, 0x01, 0x05, 0x02, 0x05, 0x01, 0x06, 0x02, 0x01, 0x01, 0xFF, 0x00 
};

u8 D_80181558[] = {
    0x02, 0x01, 0x02, 0x02, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01, 0x02, 0x06, 0x0B, 0x02, 0x0C,
    0x01, 0x0D, 0x01, 0x0E, 0x01, 0x0F, 0x01, 0x10, 0x01, 0x11, 0x03, 0x12, 0x01, 0x13, 0x02, 0x14,
    0x01, 0x15, 0x01, 0x16, 0x01, 0x07, 0x02, 0x08, 0x02, 0x09, 0x07, 0x0A, 0x01, 0x09, 0x01, 0x08,
    0x01, 0x12, 0x01, 0x11, 0x01, 0x10, 0x01, 0x11, 0x01, 0x10, 0x01, 0x11, 0x01, 0x10, 0x01, 0x0F,
    0xFF, 0x00, 0x00, 0x00 
};

u8 D_8018159C[] = {
    0x01, 0x0E, 0x01, 0x0D, 0x01, 0x0C, 0x06, 0x0B, 0x03, 0x0C, 0x01, 0x0D, 0x02, 0x16, 0x01, 0x15,
    0x01, 0x14, 0x01, 0x13, 0x02, 0x08, 0x02, 0x09, 0x02, 0x0A, 0x03, 0x09, 0x01, 0x21, 0x01, 0x22,
    0x0C, 0x09, 0x01, 0x23, 0x01, 0x24, 0x0C, 0x09, 0x01, 0x25, 0x01, 0x26, 0x0C, 0x09, 0x01, 0x27,
    0x01, 0x28, 0xFF, 0x00 
};

u8 D_801815D0[] = {
    0x01, 0x0D, 0x01, 0x15, 0x01, 0x17, 0x01, 0x18, 0x03, 0x19, 0x30, 0x18, 0x06, 0x15, 0x06, 0x0D,
    0x20, 0x01, 0xFF, 0x00 
};

u8 D_801815E4[] = {
    0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01, 0x02, 0x04, 0x1A, 0x04, 0x1B,
    0x03, 0x1C, 0x03, 0x1D, 0x03, 0x1E, 0x03, 0x1F, 0x10, 0x20, 0xFF, 0x00 
};

u8 D_80181600[] = {
    0x01, 0x20, 0x03, 0x1F, 0x03, 0x1E, 0x03, 0x1D, 0x03, 0x1C, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01,
    0x02, 0x02, 0x02, 0x01, 0x02, 0x02, 0x02, 0x01, 0x03, 0x02, 0x03, 0x01, 0x03, 0x02, 0x04, 0x01,
    0x04, 0x02, 0x05, 0x01, 0x05, 0x02, 0x06, 0x01, 0x06, 0x02, 0xFF, 0x00 
};

u8 D_8018162C[] = {
    0x02, 0x29, 0x02, 0x2A, 0x02, 0x2B, 0x02, 0x2C, 0x00, 0x00, 0x00, 0x00 
};

u8 D_80181638[] = {
    0x01, 0x2D, 0x01, 0x2E, 0x01, 0x2F, 0x01, 0x30, 0x01, 0x31, 0x01, 0x32, 0x01, 0x33, 0x01, 0x34,
    0x01, 0x35, 0x01, 0x36, 0x01, 0x37, 0x01, 0x38, 0x01, 0x39, 0x01, 0x3A, 0x01, 0x3B, 0x01, 0x3C,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x02, 0x02, 0x02, 0x03, 0x02, 0x04, 0x02, 0x05, 0x02, 0x06,
    0x02, 0x07, 0x02, 0x08, 0x02, 0x09, 0x02, 0x0A, 0x02, 0x0B, 0x02, 0x0C, 0x02, 0x0D, 0x02, 0x0E,
    0x00, 0x00, 0x00, 0x00 
};

u8 D_8018167C[] = {
    0x02, 0x01, 0x02, 0x02, 0x02, 0x03, 0x02, 0x04, 0x02, 0x05, 0x02, 0x06, 0x02, 0x07, 0x02, 0x08,
    0x02, 0x09, 0x02, 0x0A, 0x02, 0x0B, 0x02, 0x0C, 0x02, 0x0D, 0x02, 0x0E, 0x02, 0x0F, 0x02, 0x10,
    0x02, 0x11, 0x02, 0x12, 0x02, 0x13, 0x02, 0x14, 0x02, 0x15, 0x02, 0x16, 0x02, 0x17, 0x02, 0x18,
    0xFF, 0x00, 0x00, 0x00 
};

u8 D_801816B0[] = {
    0x01, 0x01, 0x01, 0x02, 0x01, 0x03, 0x02, 0x04, 0x02, 0x05, 0x02, 0x06, 0xFF, 0x00, 0x00, 0x00 
};

u8 D_801816C0[] = {
    0x03, 0x01, 0x03, 0x02, 0x03, 0x03, 0x03, 0x04, 0x03, 0x05, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00 
};

u8 D_801816D0[] = {
    0x02, 0x01, 0x02, 0x02, 0x02, 0x03, 0x02, 0x04, 0x02, 0x05, 0x02, 0x06, 0x02, 0x07, 0x02, 0x08,
    0x02, 0x09, 0x02, 0x0A, 0x02, 0x0B, 0x02, 0x0C, 0x02, 0x0D, 0xFF, 0x00 
};

u8 D_801816EC[] = {
    0x06, 0x01, 0x03, 0x02, 0x02, 0x03, 0x02, 0x04, 0x03, 0x05, 0x06, 0x06, 0x03, 0x05, 0x02, 0x04,
    0x02, 0x03, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00 
};

u8 D_80181704[] = {
    0x01, 0x07, 0x01, 0x08, 0x01, 0x09, 0x01, 0x0A, 0x01, 0x0B, 0x01, 0x0C, 0x01, 0x0D, 0x01, 0x0E,
    0x01, 0x0F, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00 
};

u8 D_8018171C[] = {
    0x01, 0x11, 0x01, 0x12, 0x00, 0x00, 0x00, 0x00 
};

u8 D_80181724[] = {
    0x02, 0x14, 0x02, 0x15, 0x02, 0x16, 0x02, 0x17, 0x02, 0x18, 0x02, 0x19, 0x02, 0x1A, 0x02, 0x1B,
    0x02, 0x1C, 0x02, 0x1D, 0x00, 0x00, 0x00, 0x00 
};

u8 D_8018173C[] = {
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x02, 0x00, 0xFC, 0xFF, 0xFC, 0xFF, 0x00, 0x00,
    0x02, 0x01, 0x06, 0x02, 0x06, 0x03, 0x06, 0x04, 0xFF, 0x00, 0x00, 0x00, 0x06, 0x05, 0x06, 0x06,
    0x06, 0x07, 0x06, 0x08, 0x00, 0x00, 0x00, 0x00, 0x02, 0x09, 0x06, 0x0A, 0x06, 0x0B, 0x06, 0x0C,
    0xFF, 0x00, 0x00, 0x00, 0x06, 0x0D, 0x06, 0x0E, 0x06, 0x0F, 0x06, 0x10, 0x00, 0x00, 0x00, 0x00 
};

u8 D_8018177C[] = {
    0x02, 0x13, 0x02, 0x14, 0x00, 0x00, 0x00, 0x00 
};

u8 D_80181784[] = {
    0x02, 0x16, 0x02, 0x17, 0x00, 0x00, 0x00, 0x00 
};

u8 D_8018178C[] = {
    0x04, 0x18, 0x03, 0x19, 0x02, 0x1A, 0x02, 0x1B, 0xFF, 0x00, 0x00, 0x00 
};

u8 D_80181798[] = {
    0x4C, 0x17, 0x18, 0x80, 0x64, 0x17, 0x18, 0x80,
};

u8 D_801817A0[] = {
    0x58, 0x17, 0x18, 0x80, 0x70, 0x17, 0x18, 0x80,
};

u8 D_801817A8[] = {
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x03, 0x03, 0x01, 0xFE, 0x03, 0x04, 0x00, 0xFA, 0x07, 0x09,
    0x01, 0xFB, 0x09, 0x07, 0xC1, 0xC1, 0x00, 0x00, 0x02, 0x09, 0x05, 0x08, 0x00, 0x00, 0x04, 0x04,
    0x03, 0xF5, 0x04, 0x0C, 0x04, 0xFD, 0x05, 0x05, 0x0F, 0xF5, 0x17, 0x15 
};

u8 D_801817D4[] = {
    0x00, 0x01, 0x02, 0x02, 0x03, 0x04, 0x04, 0x04, 0x04, 0x01, 0x02, 0x02, 0x03, 0x04, 0x04, 0x04,
    0x04, 0x05, 0x05, 0x06, 0x06, 0x06, 0x07, 0x07, 0x08, 0x09, 0x09, 0x05, 0x0A, 0x00, 0x00, 0x00 
};

u8 D_801817F4[] = {
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x02, 0x00, 0xFC, 0xFF, 0xFC, 0xFF, 0x00, 0x00 
};

u8 D_80181804[] = {
    0x00, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x00 
};

u8 D_8018180C[] = {
    0x01, 0x01, 0x0A, 0x03, 0x06, 0x04, 0x06, 0x05, 0x05, 0x06, 0x05, 0x07, 0x05, 0x08, 0x05, 0x09,
    0x05, 0x0A, 0x08, 0x0C, 0xFF, 0x00, 0x00, 0x00 
};

u8 D_80181824[] = {
    0x04, 0x0C, 0x08, 0x0E, 0x04, 0x0F, 0x01, 0x10, 0xFF, 0x00, 0x00, 0x00 
};

u8 D_80181830[] = {
    0x03, 0x10, 0x08, 0x11, 0xFF, 0x00, 0x00, 0x00,
};

u8 D_80181838[] = {
    0x12, 0x11, 0x02, 0x12, 0x02, 0x13, 0x04, 0x14, 0x04, 0x15, 0x6F, 0x16, 0x08, 0x13, 0x08, 0x12,
    0x08, 0x11, 0x08, 0x10, 0x20, 0x0F, 0x08, 0x0E, 0x04, 0x0C, 0xFF, 0x00,
};

u8 D_80181854[] = {
    0x0A, 0x0B, 0x0A, 0x0C, 0x0A, 0x0D, 0x0A, 0x0C, 0x00, 0x00, 0x00, 0x00 
};

u8 D_80181860[] = {
    0x10, 0x17, 0x08, 0x18, 0x06, 0x19, 0x05, 0x1A, 0x04, 0x1B, 0x01, 0x1C, 0xFF, 0x00, 0x00, 0x00 
};

u8 D_80181870[] = {
    0x14, 0x1C, 0x03, 0x1D, 0x02, 0x1E, 0x02, 0x1F, 0x02, 0x20, 0x02, 0x21, 0x2A, 0x1F, 0x05, 0x0F,
    0x05, 0x0E, 0x10, 0x0C, 0xFF, 0x00, 0x00, 0x00 
};

u8 D_80181888[] = {
    0x01, 0x26, 0x04, 0x27, 0x04, 0x28, 0x04, 0x29, 0x02, 0x2A, 0x02, 0x2B, 0x02, 0x2C, 0x02, 0x2D,
    0x02, 0x2E, 0x02, 0x2F, 0x02, 0x30, 0x02, 0x31, 0x02, 0x32, 0x02, 0x33, 0x02, 0x34, 0x02, 0x35,
    0x02, 0x36, 0x03, 0x33, 0x03, 0x34, 0x03, 0x35, 0x03, 0x36, 0x04, 0x33, 0x04, 0x34, 0x04, 0x35,
    0x04, 0x36, 0x05, 0x33, 0x05, 0x34, 0x05, 0x35, 0x05, 0x36, 0x04, 0x33, 0x04, 0x34, 0x04, 0x35,
    0xFF, 0x00, 0x00, 0x00 
};

u8 D_801818CC[] = {
    0x03, 0x36, 0x03, 0x33, 0x02, 0x34, 0x01, 0x35, 0x04, 0x30, 0x04, 0x2F, 0x04, 0x2E, 0x05, 0x2D,
    0x05, 0x2C, 0x05, 0x2B, 0x05, 0x2A, 0x04, 0x29, 0x04, 0x28, 0x04, 0x27, 0x01, 0x26, 0xFF, 0x00 
};

u8 D_801818EC[] = {
    0x03, 0x22, 0x03, 0x23, 0x03, 0x24, 0x03, 0x25, 0x00, 0x00, 0x00, 0x00 
};

u8 D_801818F8[] = {
    0x05, 0x2A, 0x05, 0x2B, 0x05, 0x2C, 0x05, 0x2D, 0x00, 0x00, 0x00, 0x00 
};

u8 D_80181904[] = {
    0x02, 0x2A, 0x02, 0x2B, 0x02, 0x2C, 0x02, 0x2D, 0x00, 0x00, 0x00, 0x00, 0x10, 0x0C, 0x0E, 0x0E,
    0x0C, 0x12, 0x0E, 0x13, 0x02, 0x14, 0x04, 0x15, 0x20, 0x16, 0xFF, 0x00 
};

u8 D_80181920[] = {
    0x00, 0x00, 0x00, 0x00 
};

u8 D_80181924[] = {
    0x01, 0xF9, 0x0C, 0x07, 0x00, 0xEA, 0x02, 0x17, 0x00, 0xD9, 0x02, 0x27, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x24, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x24, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
};

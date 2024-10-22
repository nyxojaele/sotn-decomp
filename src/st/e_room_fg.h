// SPDX-License-Identifier: AGPL-3.0-or-later
#include <stage.h>

#if !defined(VERSION_PSP)
static u8 foregroundAnim1[] = {0x40, 0x01, 0xFF, 0x00};
static u8 foregroundAnim2[] = {0x40, 0x02, 0xFF, 0x00};
static u8 foregroundAnim3[] = {0x40, 0x02, 0xFF, 0x00};
static u8 foregroundAnim4[] = {0x40, 0x01, 0xFF, 0x00};
static u8 foregroundAnim5[] = {0x40, 0x03, 0xFF, 0x00};
static ObjInit eRoomForegroundInit[] = {
    {0x0006, 0x01EC, 0x0000, 0x0000, 0x00, 0x10, 0, foregroundAnim1},
    {0x000C, 0x01EC, 0x0000, 0x0000, 0x00, 0x10, 0, foregroundAnim3},
    {0x000C, 0x0080, 0x0000, 0x0000, 0x00, 0x10, 0, foregroundAnim4},
    {0x0006, 0x01EC, 0x0000, 0x0000, 0x00, 0x10, 0, foregroundAnim2},
    {0x000C, 0x01EC, 0x0000, 0x0000, 0x00, 0x10, 0, foregroundAnim5},
    {0x000C, 0x0080, 0x0000, 0x0000, 0x00, 0x10, 0, foregroundAnim4},
};

#else
extern ObjInit eRoomForegroundInit[];

#endif

extern u16 g_eInitGeneric2[];

// params: Which foreground ObjInit to use
//         (> 4) These entries use an alternate hardcoded drawFlags and rotZ
void EntityRoomForeground(Entity* entity) {
    ObjInit* objInit = &eRoomForegroundInit[entity->params];

    if (!entity->step) {
        InitializeEntity(g_eInitGeneric2);
        entity->animSet = objInit->animSet;
        entity->zPriority = objInit->zPriority;
        entity->unk5A = objInit->unk5A;
        entity->palette = objInit->palette;
        entity->drawFlags = objInit->drawFlags;
        entity->drawMode = objInit->drawMode;
        if (objInit->unkC != 0) {
            entity->flags = objInit->unkC;
        }
        if (entity->params > 4) {
            entity->drawFlags |= DRAW_COLORS;
            entity->rotZ = 0x800;
        }
    }
    AnimateEntity(objInit->animFrames, entity);
}

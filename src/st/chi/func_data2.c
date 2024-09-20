#include "game.h"
#include "stage.h"

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
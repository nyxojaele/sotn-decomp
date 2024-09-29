#include "game.h"
#include "stage.h"

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
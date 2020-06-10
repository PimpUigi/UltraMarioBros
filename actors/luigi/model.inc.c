// luigi

// 0x04000000 # solid color blue - butt, left thigh, right thigh - all poly types
static const Lights1 luigi_blue_lights_group = gdSPDefLights1(
    0x00, 0x00, 0x7f,
    0x00, 0x00, 0xff, 0x28, 0x28, 0x28
);

// 0x04000018 # solid color red - left & right arm, torso (tshirt part), caps - all poly types
static const Lights1 luigi_green_lights_group = gdSPDefLights1(
    0x00, 0x46, 0x00,
    0x00, 0x8C, 0x00, 0x28, 0x28, 0x28
);

// 0x04000030 # solid color white - metal butt & left thigh - normal left & right hand closed & open (with cap too) and all wings - all poly types
static const Lights1 luigi_white_lights_group = gdSPDefLights1(
    0x7f, 0x7f, 0x7f,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x04000048 # solid color brown 1 - foot - all poly types
static const Lights1 luigi_brown1_lights_group = gdSPDefLights1(
    0x39, 0x0e, 0x07,
    0x72, 0x1c, 0x0e, 0x28, 0x28, 0x28
);

// 0x04000060 # solid color beige skin - face (cap on and off dls) - all poly types
static const Lights1 luigi_beige_lights_group = gdSPDefLights1(
    0x7f, 0x60, 0x3c,
    0xfe, 0xc1, 0x79, 0x28, 0x28, 0x28
);

// 0x04000078  # solid color brown 2 - hair - all poly types
static const Lights1 luigi_brown2_lights_group = gdSPDefLights1(
    0x39, 0x03, 0x00,
    0x73, 0x06, 0x00, 0x28, 0x28, 0x28
);

// 0x04001890
ALIGNED8 static const u8 luigi_texture_l_logo[] = {
#include "actors/luigi/luigi_logo.rgba16.inc.c"
};

// 0x0400C090
static const Vtx luigi_butt_dl_vertex_group1[] = {
{{{    -5,     63,    -29}, 0, {     0,      0},  {0xC2, 0x6B, 0xE6, 0x00}}},
{{{    -5,     63,     29}, 0, {     0,      0},  {0xBE, 0x6A, 0x12, 0x00}}},
{{{    27,     71,    -22}, 0, {     0,      0},  {0x07, 0x7E, 0xF5, 0x00}}},
{{{    81,      9,      0}, 0, {     0,      0},  {0x7E, 0x04, 0x00, 0x00}}},
{{{    62,    -53,    -31}, 0, {     0,      0},  {0x67, 0xBE, 0xE1, 0x00}}},
{{{    50,     -8,    -80}, 0, {     0,      0},  {0x4F, 0xF2, 0x9E, 0x00}}},
{{{    11,     28,     82}, 0, {     0,      0},  {0xE6, 0x26, 0x75, 0x00}}},
{{{    50,     -7,     80}, 0, {     0,      0},  {0x4F, 0xF2, 0x62, 0x00}}},
{{{    49,     34,     79}, 0, {     0,      0},  {0x4E, 0x30, 0x57, 0x00}}},
{{{    12,     -6,    -86}, 0, {     0,      0},  {0xF3, 0xEE, 0x84, 0x00}}},
{{{    42,    -44,    -68}, 0, {     0,      0},  {0x30, 0xB8, 0xA4, 0x00}}},
{{{    31,    -64,    -40}, 0, {     0,      0},  {0x18, 0x88, 0xE2, 0x00}}},
{{{    42,    -45,     68}, 0, {     0,      0},  {0x30, 0xB8, 0x5C, 0x00}}},
{{{    31,    -64,     39}, 0, {     0,      0},  {0x12, 0x88, 0x22, 0x00}}},
{{{    62,    -53,     31}, 0, {     0,      0},  {0x60, 0xB3, 0x1A, 0x00}}},
};

// 0x0400C180
static const Vtx luigi_butt_dl_vertex_group2[] = {
{{{    -1,     51,     62}, 0, {     0,      0},  {0xC0, 0x52, 0x47, 0x00}}},
{{{    -5,     63,     29}, 0, {     0,      0},  {0xBE, 0x6A, 0x12, 0x00}}},
{{{   -30,     34,     33}, 0, {     0,      0},  {0x8B, 0x25, 0x1D, 0x00}}},
{{{    59,     60,     33}, 0, {     0,      0},  {0x53, 0x5D, 0x16, 0x00}}},
{{{    27,     71,     22}, 0, {     0,      0},  {0x07, 0x7D, 0x11, 0x00}}},
{{{    32,     62,     54}, 0, {     0,      0},  {0x06, 0x6C, 0x42, 0x00}}},
{{{    49,     34,    -79}, 0, {     0,      0},  {0x4E, 0x30, 0xA9, 0x00}}},
{{{    32,     62,    -54}, 0, {     0,      0},  {0x07, 0x6B, 0xBE, 0x00}}},
{{{    59,     60,    -33}, 0, {     0,      0},  {0x59, 0x56, 0xE5, 0x00}}},
{{{    -1,     51,    -62}, 0, {     0,      0},  {0xC0, 0x52, 0xB9, 0x00}}},
{{{   -14,     27,    -68}, 0, {     0,      0},  {0xA4, 0x23, 0xB1, 0x00}}},
{{{   -30,     34,    -33}, 0, {     0,      0},  {0x89, 0x25, 0xEB, 0x00}}},
{{{    81,      9,      0}, 0, {     0,      0},  {0x7E, 0x04, 0x00, 0x00}}},
{{{    49,     34,     79}, 0, {     0,      0},  {0x4E, 0x30, 0x57, 0x00}}},
};

// 0x0400C260
static const Vtx luigi_butt_dl_vertex_group3[] = {
{{{   -10,    -64,      0}, 0, {     0,      0},  {0xCB, 0x8D, 0x00, 0x00}}},
{{{    -5,    -60,     47}, 0, {     0,      0},  {0xCD, 0x97, 0x30, 0x00}}},
{{{   -28,    -44,     36}, 0, {     0,      0},  {0x8D, 0xD7, 0x1F, 0x00}}},
{{{    31,    -64,    -40}, 0, {     0,      0},  {0x18, 0x88, 0xE2, 0x00}}},
{{{    -5,    -60,    -47}, 0, {     0,      0},  {0xCD, 0x97, 0xD0, 0x00}}},
{{{     8,    -41,    -74}, 0, {     0,      0},  {0xD8, 0xBA, 0x9F, 0x00}}},
{{{     8,    -42,     74}, 0, {     0,      0},  {0xD8, 0xB9, 0x61, 0x00}}},
{{{    31,    -64,     39}, 0, {     0,      0},  {0x12, 0x88, 0x22, 0x00}}},
{{{   -30,     34,     33}, 0, {     0,      0},  {0x8B, 0x25, 0x1D, 0x00}}},
{{{    -5,     63,     29}, 0, {     0,      0},  {0xBE, 0x6A, 0x12, 0x00}}},
{{{   -30,     34,    -33}, 0, {     0,      0},  {0x89, 0x25, 0xEB, 0x00}}},
{{{    32,     62,     54}, 0, {     0,      0},  {0x06, 0x6C, 0x42, 0x00}}},
{{{    -1,     51,     62}, 0, {     0,      0},  {0xC0, 0x52, 0x47, 0x00}}},
{{{    59,     60,    -33}, 0, {     0,      0},  {0x59, 0x56, 0xE5, 0x00}}},
{{{    27,     71,    -22}, 0, {     0,      0},  {0x07, 0x7E, 0xF5, 0x00}}},
{{{    59,     60,     33}, 0, {     0,      0},  {0x53, 0x5D, 0x16, 0x00}}},
};

// 0x0400C360
static const Vtx luigi_butt_dl_vertex_group4[] = {
{{{    10,     28,    -82}, 0, {     0,      0},  {0xE6, 0x26, 0x8B, 0x00}}},
{{{    32,     62,    -54}, 0, {     0,      0},  {0x07, 0x6B, 0xBE, 0x00}}},
{{{    49,     34,    -79}, 0, {     0,      0},  {0x4E, 0x30, 0xA9, 0x00}}},
{{{   -28,    -44,     36}, 0, {     0,      0},  {0x8D, 0xD7, 0x1F, 0x00}}},
{{{   -28,    -44,    -36}, 0, {     0,      0},  {0x91, 0xD0, 0xDC, 0x00}}},
{{{   -10,    -64,      0}, 0, {     0,      0},  {0xCB, 0x8D, 0x00, 0x00}}},
{{{    -5,    -60,    -47}, 0, {     0,      0},  {0xCD, 0x97, 0xD0, 0x00}}},
{{{    81,      9,      0}, 0, {     0,      0},  {0x7E, 0x04, 0x00, 0x00}}},
{{{    50,     -8,    -80}, 0, {     0,      0},  {0x4F, 0xF2, 0x9E, 0x00}}},
{{{    59,     60,     33}, 0, {     0,      0},  {0x53, 0x5D, 0x16, 0x00}}},
{{{    59,     60,    -33}, 0, {     0,      0},  {0x59, 0x56, 0xE5, 0x00}}},
{{{    49,     34,     79}, 0, {     0,      0},  {0x4E, 0x30, 0x57, 0x00}}},
{{{    50,     -7,     80}, 0, {     0,      0},  {0x4F, 0xF2, 0x62, 0x00}}},
{{{    11,     28,     82}, 0, {     0,      0},  {0xE6, 0x26, 0x75, 0x00}}},
{{{    32,     62,     54}, 0, {     0,      0},  {0x06, 0x6C, 0x42, 0x00}}},
};

// 0x0400C450
static const Vtx luigi_butt_dl_vertex_group5[] = {
{{{    -1,     51,    -62}, 0, {     0,      0},  {0xC0, 0x52, 0xB9, 0x00}}},
{{{    -5,     63,    -29}, 0, {     0,      0},  {0xC2, 0x6B, 0xE6, 0x00}}},
{{{    32,     62,    -54}, 0, {     0,      0},  {0x07, 0x6B, 0xBE, 0x00}}},
{{{   -30,     34,    -33}, 0, {     0,      0},  {0x89, 0x25, 0xEB, 0x00}}},
{{{   -30,     34,     33}, 0, {     0,      0},  {0x8B, 0x25, 0x1D, 0x00}}},
{{{   -15,     27,     68}, 0, {     0,      0},  {0xA4, 0x23, 0x4F, 0x00}}},
{{{    -1,     51,     62}, 0, {     0,      0},  {0xC0, 0x52, 0x47, 0x00}}},
{{{    27,     71,    -22}, 0, {     0,      0},  {0x07, 0x7E, 0xF5, 0x00}}},
{{{    59,     60,    -33}, 0, {     0,      0},  {0x59, 0x56, 0xE5, 0x00}}},
{{{    32,     62,     54}, 0, {     0,      0},  {0x06, 0x6C, 0x42, 0x00}}},
{{{    49,     34,     79}, 0, {     0,      0},  {0x4E, 0x30, 0x57, 0x00}}},
{{{    59,     60,     33}, 0, {     0,      0},  {0x53, 0x5D, 0x16, 0x00}}},
{{{    12,     -6,     86}, 0, {     0,      0},  {0xF3, 0xEF, 0x7C, 0x00}}},
{{{    42,    -45,     68}, 0, {     0,      0},  {0x30, 0xB8, 0x5C, 0x00}}},
{{{    50,     -7,     80}, 0, {     0,      0},  {0x4F, 0xF2, 0x62, 0x00}}},
};

// 0x0400C540
static const Vtx luigi_butt_dl_vertex_group6[] = {
{{{    10,     28,    -82}, 0, {     0,      0},  {0xE6, 0x26, 0x8B, 0x00}}},
{{{    49,     34,    -79}, 0, {     0,      0},  {0x4E, 0x30, 0xA9, 0x00}}},
{{{    50,     -8,    -80}, 0, {     0,      0},  {0x4F, 0xF2, 0x9E, 0x00}}},
{{{    50,     -7,     80}, 0, {     0,      0},  {0x4F, 0xF2, 0x62, 0x00}}},
{{{    42,    -45,     68}, 0, {     0,      0},  {0x30, 0xB8, 0x5C, 0x00}}},
{{{    62,    -53,     31}, 0, {     0,      0},  {0x60, 0xB3, 0x1A, 0x00}}},
{{{   -15,     27,     68}, 0, {     0,      0},  {0xA4, 0x23, 0x4F, 0x00}}},
{{{    11,     28,     82}, 0, {     0,      0},  {0xE6, 0x26, 0x75, 0x00}}},
{{{    -1,     51,     62}, 0, {     0,      0},  {0xC0, 0x52, 0x47, 0x00}}},
{{{   -17,     -6,     70}, 0, {     0,      0},  {0xA3, 0xF9, 0x55, 0x00}}},
{{{    12,     -6,     86}, 0, {     0,      0},  {0xF3, 0xEF, 0x7C, 0x00}}},
{{{     8,    -42,     74}, 0, {     0,      0},  {0xD8, 0xB9, 0x61, 0x00}}},
{{{   -17,     -6,    -70}, 0, {     0,      0},  {0xA3, 0xF8, 0xAB, 0x00}}},
{{{    12,     -6,    -86}, 0, {     0,      0},  {0xF3, 0xEE, 0x84, 0x00}}},
{{{     8,    -41,    -74}, 0, {     0,      0},  {0xD8, 0xBA, 0x9F, 0x00}}},
};

// 0x0400C630
static const Vtx luigi_butt_dl_vertex_group7[] = {
{{{    -1,     51,    -62}, 0, {     0,      0},  {0xC0, 0x52, 0xB9, 0x00}}},
{{{    10,     28,    -82}, 0, {     0,      0},  {0xE6, 0x26, 0x8B, 0x00}}},
{{{   -14,     27,    -68}, 0, {     0,      0},  {0xA4, 0x23, 0xB1, 0x00}}},
{{{   -17,     -6,    -70}, 0, {     0,      0},  {0xA3, 0xF8, 0xAB, 0x00}}},
{{{    11,     28,     82}, 0, {     0,      0},  {0xE6, 0x26, 0x75, 0x00}}},
{{{   -15,     27,     68}, 0, {     0,      0},  {0xA4, 0x23, 0x4F, 0x00}}},
{{{   -17,     -6,     70}, 0, {     0,      0},  {0xA3, 0xF9, 0x55, 0x00}}},
{{{   -30,     34,    -33}, 0, {     0,      0},  {0x89, 0x25, 0xEB, 0x00}}},
{{{    62,    -53,     31}, 0, {     0,      0},  {0x60, 0xB3, 0x1A, 0x00}}},
{{{    81,      9,      0}, 0, {     0,      0},  {0x7E, 0x04, 0x00, 0x00}}},
{{{    50,     -7,     80}, 0, {     0,      0},  {0x4F, 0xF2, 0x62, 0x00}}},
{{{    62,    -53,    -31}, 0, {     0,      0},  {0x67, 0xBE, 0xE1, 0x00}}},
{{{    42,    -44,    -68}, 0, {     0,      0},  {0x30, 0xB8, 0xA4, 0x00}}},
{{{    50,     -8,    -80}, 0, {     0,      0},  {0x4F, 0xF2, 0x9E, 0x00}}},
{{{    12,     -6,    -86}, 0, {     0,      0},  {0xF3, 0xEE, 0x84, 0x00}}},
};

// 0x0400C720
static const Vtx luigi_butt_dl_vertex_group8[] = {
{{{    12,     -6,     86}, 0, {     0,      0},  {0xF3, 0xEF, 0x7C, 0x00}}},
{{{     8,    -42,     74}, 0, {     0,      0},  {0xD8, 0xB9, 0x61, 0x00}}},
{{{    42,    -45,     68}, 0, {     0,      0},  {0x30, 0xB8, 0x5C, 0x00}}},
{{{    -5,     63,    -29}, 0, {     0,      0},  {0xC2, 0x6B, 0xE6, 0x00}}},
{{{    27,     71,    -22}, 0, {     0,      0},  {0x07, 0x7E, 0xF5, 0x00}}},
{{{    32,     62,    -54}, 0, {     0,      0},  {0x07, 0x6B, 0xBE, 0x00}}},
{{{    32,     62,     54}, 0, {     0,      0},  {0x06, 0x6C, 0x42, 0x00}}},
{{{    -1,     51,     62}, 0, {     0,      0},  {0xC0, 0x52, 0x47, 0x00}}},
{{{    11,     28,     82}, 0, {     0,      0},  {0xE6, 0x26, 0x75, 0x00}}},
{{{    10,     28,    -82}, 0, {     0,      0},  {0xE6, 0x26, 0x8B, 0x00}}},
{{{    -1,     51,    -62}, 0, {     0,      0},  {0xC0, 0x52, 0xB9, 0x00}}},
{{{    27,     71,     22}, 0, {     0,      0},  {0x07, 0x7D, 0x11, 0x00}}},
{{{    59,     60,     33}, 0, {     0,      0},  {0x53, 0x5D, 0x16, 0x00}}},
{{{    -5,     63,     29}, 0, {     0,      0},  {0xBE, 0x6A, 0x12, 0x00}}},
{{{   -30,     34,    -33}, 0, {     0,      0},  {0x89, 0x25, 0xEB, 0x00}}},
{{{    31,    -64,     39}, 0, {     0,      0},  {0x12, 0x88, 0x22, 0x00}}},
};

// 0x0400C820
static const Vtx luigi_butt_dl_vertex_group9[] = {
{{{     8,    -41,    -74}, 0, {     0,      0},  {0xD8, 0xBA, 0x9F, 0x00}}},
{{{    42,    -44,    -68}, 0, {     0,      0},  {0x30, 0xB8, 0xA4, 0x00}}},
{{{    31,    -64,    -40}, 0, {     0,      0},  {0x18, 0x88, 0xE2, 0x00}}},
{{{   -17,     -6,     70}, 0, {     0,      0},  {0xA3, 0xF9, 0x55, 0x00}}},
{{{   -15,     27,     68}, 0, {     0,      0},  {0xA4, 0x23, 0x4F, 0x00}}},
{{{   -30,     34,     33}, 0, {     0,      0},  {0x8B, 0x25, 0x1D, 0x00}}},
{{{    12,     -6,    -86}, 0, {     0,      0},  {0xF3, 0xEE, 0x84, 0x00}}},
{{{    11,     28,     82}, 0, {     0,      0},  {0xE6, 0x26, 0x75, 0x00}}},
{{{    12,     -6,     86}, 0, {     0,      0},  {0xF3, 0xEF, 0x7C, 0x00}}},
{{{    50,     -7,     80}, 0, {     0,      0},  {0x4F, 0xF2, 0x62, 0x00}}},
{{{    -5,     63,     29}, 0, {     0,      0},  {0xBE, 0x6A, 0x12, 0x00}}},
{{{    27,     71,     22}, 0, {     0,      0},  {0x07, 0x7D, 0x11, 0x00}}},
{{{    27,     71,    -22}, 0, {     0,      0},  {0x07, 0x7E, 0xF5, 0x00}}},
{{{    -5,    -60,    -47}, 0, {     0,      0},  {0xCD, 0x97, 0xD0, 0x00}}},
{{{   -28,    -44,    -36}, 0, {     0,      0},  {0x91, 0xD0, 0xDC, 0x00}}},
{{{   -17,     -6,    -70}, 0, {     0,      0},  {0xA3, 0xF8, 0xAB, 0x00}}},
};

// 0x0400C920
static const Vtx luigi_butt_dl_vertex_group10[] = {
{{{   -28,    -44,     36}, 0, {     0,      0},  {0x8D, 0xD7, 0x1F, 0x00}}},
{{{    -5,    -60,     47}, 0, {     0,      0},  {0xCD, 0x97, 0x30, 0x00}}},
{{{     8,    -42,     74}, 0, {     0,      0},  {0xD8, 0xB9, 0x61, 0x00}}},
{{{   -17,     -6,     70}, 0, {     0,      0},  {0xA3, 0xF9, 0x55, 0x00}}},
{{{   -30,     34,     33}, 0, {     0,      0},  {0x8B, 0x25, 0x1D, 0x00}}},
{{{   -30,     34,    -33}, 0, {     0,      0},  {0x89, 0x25, 0xEB, 0x00}}},
{{{   -17,     -6,    -70}, 0, {     0,      0},  {0xA3, 0xF8, 0xAB, 0x00}}},
{{{   -28,    -44,    -36}, 0, {     0,      0},  {0x91, 0xD0, 0xDC, 0x00}}},
{{{    62,    -53,     31}, 0, {     0,      0},  {0x60, 0xB3, 0x1A, 0x00}}},
{{{    31,    -64,     39}, 0, {     0,      0},  {0x12, 0x88, 0x22, 0x00}}},
{{{    31,    -64,    -40}, 0, {     0,      0},  {0x18, 0x88, 0xE2, 0x00}}},
{{{   -10,    -64,      0}, 0, {     0,      0},  {0xCB, 0x8D, 0x00, 0x00}}},
{{{    -5,    -60,    -47}, 0, {     0,      0},  {0xCD, 0x97, 0xD0, 0x00}}},
{{{    62,    -53,    -31}, 0, {     0,      0},  {0x67, 0xBE, 0xE1, 0x00}}},
};

// 0x0400CA00 - 0x0400CC98
const Gfx luigi_butt_dl[] = {
    gsSPVertex(luigi_butt_dl_vertex_group1, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9,  5, 10, 0x0),
    gsSP2Triangles( 4, 11, 10, 0x0, 12, 13, 14, 0x0),
    gsSPVertex(luigi_butt_dl_vertex_group2, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles(12,  3, 13, 0x0,  6,  8, 12, 0x0),
    gsSPVertex(luigi_butt_dl_vertex_group3, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  1,  7, 0x0,  8,  9, 10, 0x0),
    gsSP2Triangles(11,  9, 12, 0x0, 13, 14, 15, 0x0),
    gsSPVertex(luigi_butt_dl_vertex_group4, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 4,  6,  5, 0x0,  7,  8,  2, 0x0),
    gsSP2Triangles( 9,  7, 10, 0x0, 11, 12,  7, 0x0),
    gsSP1Triangle(13, 11, 14, 0x0),
    gsSPVertex(luigi_butt_dl_vertex_group5, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  0, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  2,  7,  8, 0x0),
    gsSP2Triangles( 9, 10, 11, 0x0, 12, 13, 14, 0x0),
    gsSPVertex(luigi_butt_dl_vertex_group6, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9, 10,  7, 0x0),
    gsSP2Triangles(11, 10,  9, 0x0, 12, 13, 14, 0x0),
    gsSP1Triangle( 0, 13, 12, 0x0),
    gsSPVertex(luigi_butt_dl_vertex_group7, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  2,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  7,  2,  3, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  9,  8, 11, 0x0),
    gsSP2Triangles(11, 12, 13, 0x0, 13, 14,  1, 0x0),
    gsSPVertex(luigi_butt_dl_vertex_group8, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9, 10,  5, 0x0),
    gsSP2Triangles( 4, 11, 12, 0x0,  6, 11, 13, 0x0),
    gsSP2Triangles(13,  3, 14, 0x0, 15,  2,  1, 0x0),
    gsSPVertex(luigi_butt_dl_vertex_group9, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 1,  0,  6, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0,  0, 13, 14, 0x0),
    gsSP1Triangle(15,  0, 14, 0x0),
    gsSPVertex(luigi_butt_dl_vertex_group10, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  0, 0x0),
    gsSP2Triangles( 3,  4,  0, 0x0,  0,  4,  5, 0x0),
    gsSP2Triangles( 5,  6,  7, 0x0,  5,  7,  0, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  9, 11, 10, 0x0),
    gsSP2Triangles( 9,  1, 11, 0x0, 11, 12, 10, 0x0),
    gsSP1Triangle(10, 13,  8, 0x0),
    gsSPEndDisplayList(),
};

// 0x0400CC98 - 0x0400CCC8
const Gfx luigi_butt[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPLight(&luigi_blue_lights_group.l, 1),
    gsSPLight(&luigi_blue_lights_group.a, 2),
    gsSPDisplayList(luigi_butt_dl),
    gsSPEndDisplayList(),
};

// 0x0400CCC8 - 0x0400CD40
const Gfx luigi_metal_butt[] = {
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_GEN),
    gsDPSetCombineMode(G_CC_DECALFADE, G_CC_DECALFADE),
    gsDPLoadTextureBlock(player_texture_metal, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTexture(0x0F80, 0x07C0, 0, G_TX_RENDERTILE, G_ON),
    gsSPLight(&luigi_white_lights_group.l, 1),
    gsSPLight(&luigi_white_lights_group.a, 2),
    gsSPDisplayList(luigi_butt_dl),
    gsSPEndDisplayList(),
};

// 0x0400CD40
static const Vtx luigi_left_arm_shared_dl_vertex_group1[] = {
{{{     7,     24,     18}, 0, {     0,      0},  {0xDA, 0x61, 0x47, 0x00}}},
{{{    59,     18,     13}, 0, {     0,      0},  {0x44, 0x4A, 0x4C, 0x00}}},
{{{    59,     18,    -18}, 0, {     0,      0},  {0x37, 0x67, 0xD0, 0x00}}},
{{{     6,    -14,     28}, 0, {     0,      0},  {0xD5, 0xDC, 0x71, 0x00}}},
{{{    58,    -13,     22}, 0, {     0,      0},  {0x32, 0xC6, 0x64, 0x00}}},
{{{     5,    -37,     -4}, 0, {     0,      0},  {0xD3, 0x8A, 0xFF, 0x00}}},
{{{    57,    -32,     -4}, 0, {     0,      0},  {0x3E, 0x93, 0xEF, 0x00}}},
{{{     6,    -11,    -37}, 0, {     0,      0},  {0xD6, 0xDE, 0x8E, 0x00}}},
{{{    58,    -11,    -30}, 0, {     0,      0},  {0x3B, 0xFB, 0x90, 0x00}}},
{{{     7,     26,    -23}, 0, {     0,      0},  {0xDA, 0x62, 0xBB, 0x00}}},
{{{    -8,     15,    -15}, 0, {     0,      0},  {0x90, 0x2A, 0xD6, 0x00}}},
{{{    -8,     14,      9}, 0, {     0,      0},  {0x9A, 0x44, 0x1D, 0x00}}},
{{{    -8,     -8,    -24}, 0, {     0,      0},  {0x8E, 0xE8, 0xCE, 0x00}}},
{{{    -9,    -23,     -4}, 0, {     0,      0},  {0x96, 0xBD, 0x0E, 0x00}}},
{{{    -8,     -9,     16}, 0, {     0,      0},  {0x8B, 0xFF, 0x2F, 0x00}}},
};

// 0x0400CE30
static const Vtx luigi_left_arm_shared_dl_vertex_group2[] = {
{{{    68,     11,    -14}, 0, {     0,      0},  {0x6A, 0x38, 0xD9, 0x00}}},
{{{    68,     -9,    -22}, 0, {     0,      0},  {0x75, 0xE7, 0xD9, 0x00}}},
{{{    58,    -11,    -30}, 0, {     0,      0},  {0x3B, 0xFB, 0x90, 0x00}}},
{{{    59,     18,     13}, 0, {     0,      0},  {0x44, 0x4A, 0x4C, 0x00}}},
{{{    68,     10,      8}, 0, {     0,      0},  {0x78, 0x1F, 0x1B, 0x00}}},
{{{    67,    -10,     14}, 0, {     0,      0},  {0x6F, 0xE8, 0x37, 0x00}}},
{{{    57,    -32,     -4}, 0, {     0,      0},  {0x3E, 0x93, 0xEF, 0x00}}},
{{{    67,    -23,     -4}, 0, {     0,      0},  {0x6E, 0xC2, 0xFE, 0x00}}},
{{{    58,    -13,     22}, 0, {     0,      0},  {0x32, 0xC6, 0x64, 0x00}}},
{{{    59,     18,    -18}, 0, {     0,      0},  {0x37, 0x67, 0xD0, 0x00}}},
{{{     7,     24,     18}, 0, {     0,      0},  {0xDA, 0x61, 0x47, 0x00}}},
{{{    -8,     -9,     16}, 0, {     0,      0},  {0x8B, 0xFF, 0x2F, 0x00}}},
{{{     6,    -14,     28}, 0, {     0,      0},  {0xD5, 0xDC, 0x71, 0x00}}},
{{{    -9,    -23,     -4}, 0, {     0,      0},  {0x96, 0xBD, 0x0E, 0x00}}},
{{{     5,    -37,     -4}, 0, {     0,      0},  {0xD3, 0x8A, 0xFF, 0x00}}},
};

// 0x0400CF20
static const Vtx luigi_left_arm_shared_dl_vertex_group3[] = {
{{{     5,    -37,     -4}, 0, {     0,      0},  {0xD3, 0x8A, 0xFF, 0x00}}},
{{{    -8,     -8,    -24}, 0, {     0,      0},  {0x8E, 0xE8, 0xCE, 0x00}}},
{{{     6,    -11,    -37}, 0, {     0,      0},  {0xD6, 0xDE, 0x8E, 0x00}}},
{{{    -8,     15,    -15}, 0, {     0,      0},  {0x90, 0x2A, 0xD6, 0x00}}},
{{{     7,     26,    -23}, 0, {     0,      0},  {0xDA, 0x62, 0xBB, 0x00}}},
{{{    -8,     14,      9}, 0, {     0,      0},  {0x9A, 0x44, 0x1D, 0x00}}},
{{{     7,     24,     18}, 0, {     0,      0},  {0xDA, 0x61, 0x47, 0x00}}},
{{{    58,    -11,    -30}, 0, {     0,      0},  {0x3B, 0xFB, 0x90, 0x00}}},
{{{    57,    -32,     -4}, 0, {     0,      0},  {0x3E, 0x93, 0xEF, 0x00}}},
{{{     6,    -14,     28}, 0, {     0,      0},  {0xD5, 0xDC, 0x71, 0x00}}},
{{{    58,    -13,     22}, 0, {     0,      0},  {0x32, 0xC6, 0x64, 0x00}}},
{{{    59,     18,     13}, 0, {     0,      0},  {0x44, 0x4A, 0x4C, 0x00}}},
{{{    59,     18,    -18}, 0, {     0,      0},  {0x37, 0x67, 0xD0, 0x00}}},
{{{    -8,     -9,     16}, 0, {     0,      0},  {0x8B, 0xFF, 0x2F, 0x00}}},
};

// 0x0400D000
static const Vtx luigi_left_arm_shared_dl_vertex_group4[] = {
{{{    68,     10,      8}, 0, {     0,      0},  {0x78, 0x1F, 0x1B, 0x00}}},
{{{    68,     -9,    -22}, 0, {     0,      0},  {0x75, 0xE7, 0xD9, 0x00}}},
{{{    68,     11,    -14}, 0, {     0,      0},  {0x6A, 0x38, 0xD9, 0x00}}},
{{{    67,    -10,     14}, 0, {     0,      0},  {0x6F, 0xE8, 0x37, 0x00}}},
{{{    67,    -23,     -4}, 0, {     0,      0},  {0x6E, 0xC2, 0xFE, 0x00}}},
{{{    -8,     15,    -15}, 0, {     0,      0},  {0x90, 0x2A, 0xD6, 0x00}}},
{{{    -8,     -8,    -24}, 0, {     0,      0},  {0x8E, 0xE8, 0xCE, 0x00}}},
{{{    -8,     -9,     16}, 0, {     0,      0},  {0x8B, 0xFF, 0x2F, 0x00}}},
{{{    -9,    -23,     -4}, 0, {     0,      0},  {0x96, 0xBD, 0x0E, 0x00}}},
};

// 0x0400D090 - 0x0400D1D8
const Gfx luigi_left_arm_shared_dl[] = {
    gsSPVertex(luigi_left_arm_shared_dl_vertex_group1, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  1, 0x0),
    gsSP2Triangles( 5,  6,  4, 0x0,  7,  8,  6, 0x0),
    gsSP2Triangles( 9,  2,  8, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles( 7, 12, 10, 0x0,  5, 13, 12, 0x0),
    gsSP2Triangles( 3, 14, 13, 0x0,  0, 11, 14, 0x0),
    gsSPVertex(luigi_left_arm_shared_dl_vertex_group2, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  0, 0x0),
    gsSP2Triangles( 5,  4,  3, 0x0,  6,  7,  5, 0x0),
    gsSP2Triangles( 1,  7,  6, 0x0,  2,  1,  6, 0x0),
    gsSP2Triangles( 6,  5,  8, 0x0,  8,  5,  3, 0x0),
    gsSP2Triangles( 3,  0,  9, 0x0,  9,  0,  2, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 12, 13, 14, 0x0),
    gsSPVertex(luigi_left_arm_shared_dl_vertex_group3, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  4, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  2,  4,  7, 0x0),
    gsSP2Triangles( 0,  2,  8, 0x0,  9,  0, 10, 0x0),
    gsSP2Triangles( 6,  9, 11, 0x0,  4,  6, 12, 0x0),
    gsSP1Triangle(13,  5,  3, 0x0),
    gsSPVertex(luigi_left_arm_shared_dl_vertex_group4, 9, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 3,  4,  1, 0x0,  5,  6,  7, 0x0),
    gsSP1Triangle( 6,  8,  7, 0x0),
    gsSPEndDisplayList(),
};

// 0x0400D1D8 - 0x0400D1F8
const Gfx luigi_left_arm[] = {
    gsSPLight(&luigi_green_lights_group.l, 1),
    gsSPLight(&luigi_green_lights_group.a, 2),
    gsSPDisplayList(luigi_left_arm_shared_dl),
    gsSPEndDisplayList(),
};

// 0x0400D1F8
static const Vtx luigi_left_forearm_shared_dl_vertex[] = {
{{{    -2,     17,     14}, 0, {     0,      0},  {0xDB, 0x61, 0x48, 0x00}}},
{{{    47,     12,     11}, 0, {     0,      0},  {0x44, 0x44, 0x51, 0x00}}},
{{{    47,     14,    -17}, 0, {     0,      0},  {0x45, 0x61, 0xD6, 0x00}}},
{{{    -3,    -15,     23}, 0, {     0,      0},  {0xD7, 0xDB, 0x71, 0x00}}},
{{{    46,    -15,     19}, 0, {     0,      0},  {0x41, 0xC7, 0x5C, 0x00}}},
{{{    -3,    -34,     -3}, 0, {     0,      0},  {0xD4, 0x89, 0xFE, 0x00}}},
{{{    45,    -30,     -3}, 0, {     0,      0},  {0x3F, 0x95, 0xE8, 0x00}}},
{{{    -3,    -12,    -30}, 0, {     0,      0},  {0xD7, 0xDE, 0x8E, 0x00}}},
{{{    46,    -12,    -27}, 0, {     0,      0},  {0x42, 0xF4, 0x95, 0x00}}},
{{{    -2,     18,    -18}, 0, {     0,      0},  {0xDB, 0x63, 0xBB, 0x00}}},
{{{   -14,     11,    -13}, 0, {     0,      0},  {0x93, 0x2C, 0xD3, 0x00}}},
{{{   -14,      9,      9}, 0, {     0,      0},  {0x93, 0x3B, 0x19, 0x00}}},
{{{   -15,     -9,    -21}, 0, {     0,      0},  {0x9A, 0xDE, 0xBE, 0x00}}},
{{{   -15,    -24,     -3}, 0, {     0,      0},  {0x8B, 0xD2, 0x0A, 0x00}}},
{{{   -15,    -11,     15}, 0, {     0,      0},  {0x9B, 0xFB, 0x4C, 0x00}}},
{{{    58,     -6,     -2}, 0, {     0,      0},  {0x7E, 0xFC, 0x00, 0x00}}},
};

// 0x0400D2F8 - 0x0400D3E8
const Gfx luigi_left_forearm_shared_dl[] = {
    gsSPVertex(luigi_left_forearm_shared_dl_vertex, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  1, 0x0),
    gsSP2Triangles( 5,  6,  4, 0x0,  7,  8,  6, 0x0),
    gsSP2Triangles( 9,  2,  8, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles( 7, 12, 10, 0x0,  5, 13, 12, 0x0),
    gsSP2Triangles( 3, 14, 13, 0x0,  0, 11, 14, 0x0),
    gsSP2Triangles( 8, 15,  6, 0x0,  6, 15,  4, 0x0),
    gsSP2Triangles( 4, 15,  1, 0x0,  1, 15,  2, 0x0),
    gsSP2Triangles( 2, 15,  8, 0x0,  0, 14,  3, 0x0),
    gsSP2Triangles( 3, 13,  5, 0x0,  5, 12,  7, 0x0),
    gsSP2Triangles( 7, 10,  9, 0x0,  9, 11,  0, 0x0),
    gsSP2Triangles( 7,  9,  8, 0x0,  5,  7,  6, 0x0),
    gsSP2Triangles( 3,  5,  4, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 9,  0,  2, 0x0, 12, 13, 10, 0x0),
    gsSP2Triangles(13, 11, 10, 0x0, 13, 14, 11, 0x0),
    gsSPEndDisplayList(),
};

// 0x0400D3E8
static const Vtx luigi_left_hand_closed_shared_dl_vertex_group1[] = {
{{{    32,      5,     37}, 0, {     0,      0},  {0xE1, 0xF0, 0x79, 0x00}}},
{{{    15,      0,     24}, 0, {     0,      0},  {0x00, 0xFD, 0x7F, 0x00}}},
{{{    30,    -36,      2}, 0, {     0,      0},  {0x42, 0xA3, 0x36, 0x00}}},
{{{    23,    -22,    -28}, 0, {     0,      0},  {0x09, 0xC7, 0x8F, 0x00}}},
{{{     3,     21,    -27}, 0, {     0,      0},  {0xD5, 0x3F, 0x9C, 0x00}}},
{{{    29,      6,    -39}, 0, {     0,      0},  {0xC6, 0xFE, 0x90, 0x00}}},
{{{     0,     35,      4}, 0, {     0,      0},  {0xEA, 0x6E, 0x3A, 0x00}}},
{{{     4,     -5,     32}, 0, {     0,      0},  {0x44, 0x1B, 0x67, 0x00}}},
{{{    -9,     23,    -34}, 0, {     0,      0},  {0xF0, 0x41, 0x95, 0x00}}},
{{{    15,    -34,    -35}, 0, {     0,      0},  {0x1A, 0xB7, 0x9D, 0x00}}},
{{{    77,     26,     36}, 0, {     0,      0},  {0x4B, 0x20, 0x60, 0x00}}},
{{{    53,     72,      7}, 0, {     0,      0},  {0x11, 0x7A, 0x1D, 0x00}}},
{{{    96,    -23,      3}, 0, {     0,      0},  {0x67, 0xC5, 0x2B, 0x00}}},
{{{    54,     10,    -54}, 0, {     0,      0},  {0x00, 0x21, 0x86, 0x00}}},
{{{    81,     15,    -41}, 0, {     0,      0},  {0x43, 0x35, 0xA3, 0x00}}},
{{{    90,     -5,    -41}, 0, {     0,      0},  {0x63, 0x0A, 0xB3, 0x00}}},
};

// 0x0400D4E8
static const Vtx luigi_left_hand_closed_shared_dl_vertex_group2[] = {
{{{    81,     15,    -41}, 0, {     0,      0},  {0x43, 0x35, 0xA3, 0x00}}},
{{{    51,     49,    -33}, 0, {     0,      0},  {0x22, 0x54, 0xA9, 0x00}}},
{{{    89,     36,    -14}, 0, {     0,      0},  {0x6C, 0x3C, 0xE5, 0x00}}},
{{{    28,     56,    -25}, 0, {     0,      0},  {0xD0, 0x4F, 0xAA, 0x00}}},
{{{    10,     53,      9}, 0, {     0,      0},  {0xAA, 0x58, 0x1B, 0x00}}},
{{{    53,     72,      7}, 0, {     0,      0},  {0x11, 0x7A, 0x1D, 0x00}}},
{{{    72,    -27,    -54}, 0, {     0,      0},  {0x0C, 0xB2, 0x9D, 0x00}}},
{{{    90,     -5,    -41}, 0, {     0,      0},  {0x63, 0x0A, 0xB3, 0x00}}},
{{{    96,    -23,      3}, 0, {     0,      0},  {0x67, 0xC5, 0x2B, 0x00}}},
{{{    54,     10,    -54}, 0, {     0,      0},  {0x00, 0x21, 0x86, 0x00}}},
{{{    29,      6,    -39}, 0, {     0,      0},  {0xC6, 0xFE, 0x90, 0x00}}},
{{{    77,     26,     36}, 0, {     0,      0},  {0x4B, 0x20, 0x60, 0x00}}},
{{{    52,    -40,      6}, 0, {     0,      0},  {0x01, 0x85, 0x1C, 0x00}}},
{{{    32,      5,     37}, 0, {     0,      0},  {0xE1, 0xF0, 0x79, 0x00}}},
};

// 0x0400D5C8
static const Vtx luigi_left_hand_closed_shared_dl_vertex_group3[] = {
{{{    24,    -52,      5}, 0, {     0,      0},  {0xA3, 0xAD, 0x12, 0x00}}},
{{{   -12,    -12,     -3}, 0, {     0,      0},  {0x8C, 0xCD, 0x02, 0x00}}},
{{{    15,    -34,    -35}, 0, {     0,      0},  {0x1A, 0xB7, 0x9D, 0x00}}},
{{{    -9,     23,    -34}, 0, {     0,      0},  {0xF0, 0x41, 0x95, 0x00}}},
{{{   -16,     40,      7}, 0, {     0,      0},  {0x84, 0xF3, 0x13, 0x00}}},
{{{     4,     -5,     32}, 0, {     0,      0},  {0x99, 0xD2, 0x38, 0x00}}},
{{{    30,    -36,      2}, 0, {     0,      0},  {0x42, 0xA3, 0x36, 0x00}}},
{{{    24,    -52,      5}, 0, {     0,      0},  {0x73, 0xD5, 0x1D, 0x00}}},
{{{    23,    -22,    -28}, 0, {     0,      0},  {0x09, 0xC7, 0x8F, 0x00}}},
{{{   -16,     40,      7}, 0, {     0,      0},  {0x2D, 0x71, 0x21, 0x00}}},
{{{     0,     35,      4}, 0, {     0,      0},  {0xEA, 0x6E, 0x3A, 0x00}}},
{{{     4,     -5,     32}, 0, {     0,      0},  {0x44, 0x1B, 0x67, 0x00}}},
{{{    32,      5,     37}, 0, {     0,      0},  {0xE1, 0xF0, 0x79, 0x00}}},
{{{    10,     53,      9}, 0, {     0,      0},  {0xAA, 0x58, 0x1B, 0x00}}},
{{{    52,    -40,      6}, 0, {     0,      0},  {0x01, 0x85, 0x1C, 0x00}}},
};

// 0x0400D6B8
static const Vtx luigi_left_hand_closed_shared_dl_vertex_group4[] = {
{{{    23,    -22,    -28}, 0, {     0,      0},  {0x09, 0xC7, 0x8F, 0x00}}},
{{{    29,      6,    -39}, 0, {     0,      0},  {0xC6, 0xFE, 0x90, 0x00}}},
{{{    72,    -27,    -54}, 0, {     0,      0},  {0x0C, 0xB2, 0x9D, 0x00}}},
{{{    52,    -40,      6}, 0, {     0,      0},  {0x01, 0x85, 0x1C, 0x00}}},
{{{    30,    -36,      2}, 0, {     0,      0},  {0x42, 0xA3, 0x36, 0x00}}},
{{{    54,     10,    -54}, 0, {     0,      0},  {0x00, 0x21, 0x86, 0x00}}},
{{{    10,     53,      9}, 0, {     0,      0},  {0xAA, 0x58, 0x1B, 0x00}}},
{{{    28,     56,    -25}, 0, {     0,      0},  {0xD0, 0x4F, 0xAA, 0x00}}},
{{{     3,     21,    -27}, 0, {     0,      0},  {0xD5, 0x3F, 0x9C, 0x00}}},
{{{     0,     35,      4}, 0, {     0,      0},  {0xEA, 0x6E, 0x3A, 0x00}}},
};

// 0x0400D758 - 0x0400D8F0
const Gfx luigi_left_hand_closed_shared_dl[] = {
    gsSPVertex(luigi_left_hand_closed_shared_dl_vertex_group1, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  1,  0, 0x0,  2,  1,  7, 0x0),
    gsSP2Triangles( 7,  1,  6, 0x0,  6,  4,  8, 0x0),
    gsSP2Triangles( 8,  4,  3, 0x0,  9,  3,  2, 0x0),
    gsSP2Triangles( 0, 10, 11, 0x0, 12, 10,  0, 0x0),
    gsSP1Triangle(13, 14, 15, 0x0),
    gsSPVertex(luigi_left_hand_closed_shared_dl_vertex_group2, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 5,  1,  3, 0x0,  6,  7,  8, 0x0),
    gsSP2Triangles( 9, 10,  3, 0x0,  1,  0,  9, 0x0),
    gsSP2Triangles( 9,  3,  1, 0x0,  5,  2,  1, 0x0),
    gsSP2Triangles( 0,  2,  7, 0x0,  7,  2,  8, 0x0),
    gsSP2Triangles( 8,  2, 11, 0x0, 11,  2,  5, 0x0),
    gsSP2Triangles( 9,  7,  6, 0x0,  6,  8, 12, 0x0),
    gsSP2Triangles(12,  8, 13, 0x0, 13,  5,  4, 0x0),
    gsSPVertex(luigi_left_hand_closed_shared_dl_vertex_group3, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 3,  1,  4, 0x0,  4,  1,  5, 0x0),
    gsSP2Triangles( 5,  1,  0, 0x0,  6,  7,  2, 0x0),
    gsSP2Triangles( 8,  2,  3, 0x0,  3,  9, 10, 0x0),
    gsSP2Triangles(10,  9, 11, 0x0, 11,  7,  6, 0x0),
    gsSP2Triangles(10, 12, 13, 0x0,  6, 14, 12, 0x0),
    gsSPVertex(luigi_left_hand_closed_shared_dl_vertex_group4, 10, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  0, 0x0),
    gsSP2Triangles( 1,  5,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  8,  9,  6, 0x0),
    gsSP1Triangle( 7,  1,  8, 0x0),
    gsSPEndDisplayList(),
};

// 0x0400D8F0 - 0x0400D910
const Gfx luigi_left_hand_closed[] = {
    gsSPLight(&luigi_white_lights_group.l, 1),
    gsSPLight(&luigi_white_lights_group.a, 2),
    gsSPDisplayList(luigi_left_hand_closed_shared_dl),
    gsSPEndDisplayList(),
};

// 0x0400D910
static const Vtx luigi_right_arm_shared_dl_vertex_group1[] = {
{{{    57,    -12,    -19}, 0, {     0,      0},  {0x33, 0xCF, 0x97, 0x00}}},
{{{     5,    -39,      4}, 0, {     0,      0},  {0xD3, 0x8A, 0xF7, 0x00}}},
{{{     6,    -13,    -27}, 0, {     0,      0},  {0xD6, 0xE6, 0x8C, 0x00}}},
{{{    57,    -34,      5}, 0, {     0,      0},  {0x3E, 0x93, 0x07, 0x00}}},
{{{     6,    -17,     39}, 0, {     0,      0},  {0xD5, 0xD4, 0x6E, 0x00}}},
{{{    57,    -15,     33}, 0, {     0,      0},  {0x33, 0xE8, 0x71, 0x00}}},
{{{     7,     22,     28}, 0, {     0,      0},  {0xD9, 0x5C, 0x4D, 0x00}}},
{{{    58,     15,     24}, 0, {     0,      0},  {0x44, 0x59, 0x39, 0x00}}},
{{{     7,     24,    -11}, 0, {     0,      0},  {0xDA, 0x67, 0xC2, 0x00}}},
{{{    58,     17,     -8}, 0, {     0,      0},  {0x3E, 0x4A, 0xAF, 0x00}}},
{{{    -9,    -25,      5}, 0, {     0,      0},  {0x96, 0xBF, 0xEC, 0x00}}},
{{{    -9,     -9,    -13}, 0, {     0,      0},  {0x8F, 0x01, 0xC7, 0x00}}},
{{{    -8,     13,     -4}, 0, {     0,      0},  {0x91, 0x39, 0xED, 0x00}}},
{{{    -8,     12,     19}, 0, {     0,      0},  {0x99, 0x2E, 0x38, 0x00}}},
{{{    -9,    -11,     27}, 0, {     0,      0},  {0x8A, 0xE9, 0x26, 0x00}}},
{{{    67,    -10,    -11}, 0, {     0,      0},  {0x68, 0xEB, 0xBC, 0x00}}},
};

// 0x0400DA10
static const Vtx luigi_right_arm_shared_dl_vertex_group2[] = {
{{{    57,    -34,      5}, 0, {     0,      0},  {0x3E, 0x93, 0x07, 0x00}}},
{{{    67,    -12,     25}, 0, {     0,      0},  {0x6F, 0xE8, 0x37, 0x00}}},
{{{    57,    -15,     33}, 0, {     0,      0},  {0x33, 0xE8, 0x71, 0x00}}},
{{{    58,     15,     24}, 0, {     0,      0},  {0x44, 0x59, 0x39, 0x00}}},
{{{    67,      9,     -3}, 0, {     0,      0},  {0x78, 0x26, 0xF1, 0x00}}},
{{{    58,     17,     -8}, 0, {     0,      0},  {0x3E, 0x4A, 0xAF, 0x00}}},
{{{    67,      9,     18}, 0, {     0,      0},  {0x71, 0x2A, 0x25, 0x00}}},
{{{    66,    -25,      5}, 0, {     0,      0},  {0x75, 0xD1, 0xFE, 0x00}}},
{{{    67,    -10,    -11}, 0, {     0,      0},  {0x68, 0xEB, 0xBC, 0x00}}},
{{{    -9,    -11,     27}, 0, {     0,      0},  {0x8A, 0xE9, 0x26, 0x00}}},
{{{    -9,    -25,      5}, 0, {     0,      0},  {0x96, 0xBF, 0xEC, 0x00}}},
{{{     5,    -39,      4}, 0, {     0,      0},  {0xD3, 0x8A, 0xF7, 0x00}}},
{{{    -8,     12,     19}, 0, {     0,      0},  {0x99, 0x2E, 0x38, 0x00}}},
{{{     6,    -17,     39}, 0, {     0,      0},  {0xD5, 0xD4, 0x6E, 0x00}}},
{{{    -8,     13,     -4}, 0, {     0,      0},  {0x91, 0x39, 0xED, 0x00}}},
{{{     7,     22,     28}, 0, {     0,      0},  {0xD9, 0x5C, 0x4D, 0x00}}},
};

// 0x0400DB10
static const Vtx luigi_right_arm_shared_dl_vertex_group3[] = {
{{{    -9,     -9,    -13}, 0, {     0,      0},  {0x8F, 0x01, 0xC7, 0x00}}},
{{{    -8,     13,     -4}, 0, {     0,      0},  {0x91, 0x39, 0xED, 0x00}}},
{{{     7,     24,    -11}, 0, {     0,      0},  {0xDA, 0x67, 0xC2, 0x00}}},
{{{    -9,    -25,      5}, 0, {     0,      0},  {0x96, 0xBF, 0xEC, 0x00}}},
{{{     6,    -13,    -27}, 0, {     0,      0},  {0xD6, 0xE6, 0x8C, 0x00}}},
{{{    58,     17,     -8}, 0, {     0,      0},  {0x3E, 0x4A, 0xAF, 0x00}}},
{{{    57,    -12,    -19}, 0, {     0,      0},  {0x33, 0xCF, 0x97, 0x00}}},
{{{    58,     15,     24}, 0, {     0,      0},  {0x44, 0x59, 0x39, 0x00}}},
{{{    57,    -15,     33}, 0, {     0,      0},  {0x33, 0xE8, 0x71, 0x00}}},
{{{     7,     22,     28}, 0, {     0,      0},  {0xD9, 0x5C, 0x4D, 0x00}}},
{{{    57,    -34,      5}, 0, {     0,      0},  {0x3E, 0x93, 0x07, 0x00}}},
{{{     6,    -17,     39}, 0, {     0,      0},  {0xD5, 0xD4, 0x6E, 0x00}}},
{{{     5,    -39,      4}, 0, {     0,      0},  {0xD3, 0x8A, 0xF7, 0x00}}},
{{{    67,    -10,    -11}, 0, {     0,      0},  {0x68, 0xEB, 0xBC, 0x00}}},
{{{    67,      9,     -3}, 0, {     0,      0},  {0x78, 0x26, 0xF1, 0x00}}},
{{{    66,    -25,      5}, 0, {     0,      0},  {0x75, 0xD1, 0xFE, 0x00}}},
};

// 0x0400DC10
static const Vtx luigi_right_arm_shared_dl_vertex_group4[] = {
{{{    -9,     -9,    -13}, 0, {     0,      0},  {0x8F, 0x01, 0xC7, 0x00}}},
{{{    -9,    -25,      5}, 0, {     0,      0},  {0x96, 0xBF, 0xEC, 0x00}}},
{{{    -9,    -11,     27}, 0, {     0,      0},  {0x8A, 0xE9, 0x26, 0x00}}},
{{{    -8,     13,     -4}, 0, {     0,      0},  {0x91, 0x39, 0xED, 0x00}}},
{{{    -8,     12,     19}, 0, {     0,      0},  {0x99, 0x2E, 0x38, 0x00}}},
{{{    67,      9,     -3}, 0, {     0,      0},  {0x78, 0x26, 0xF1, 0x00}}},
{{{    67,    -12,     25}, 0, {     0,      0},  {0x6F, 0xE8, 0x37, 0x00}}},
{{{    66,    -25,      5}, 0, {     0,      0},  {0x75, 0xD1, 0xFE, 0x00}}},
{{{    67,      9,     18}, 0, {     0,      0},  {0x71, 0x2A, 0x25, 0x00}}},
};

// 0x0400DCA0 - 0x0400DDE8
const Gfx luigi_right_arm_shared_dl[] = {
    gsSPVertex(luigi_right_arm_shared_dl_vertex_group1, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  1, 0x0),
    gsSP2Triangles( 5,  6,  4, 0x0,  7,  8,  6, 0x0),
    gsSP2Triangles( 9,  2,  8, 0x0,  1, 10,  2, 0x0),
    gsSP2Triangles( 2, 11,  8, 0x0,  8, 12,  6, 0x0),
    gsSP2Triangles( 6, 13,  4, 0x0,  4, 14,  1, 0x0),
    gsSP2Triangles( 9, 15,  0, 0x0,  0, 15,  3, 0x0),
    gsSPVertex(luigi_right_arm_shared_dl_vertex_group2, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 3,  4,  5, 0x0,  3,  6,  4, 0x0),
    gsSP2Triangles( 1,  6,  3, 0x0,  0,  7,  1, 0x0),
    gsSP2Triangles( 8,  7,  0, 0x0,  5,  4,  8, 0x0),
    gsSP2Triangles( 9, 10, 11, 0x0, 12,  9, 13, 0x0),
    gsSP1Triangle(14, 12, 15, 0x0),
    gsSPVertex(luigi_right_arm_shared_dl_vertex_group3, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  4, 0x0),
    gsSP2Triangles( 5,  6,  4, 0x0,  7,  5,  2, 0x0),
    gsSP2Triangles( 8,  7,  9, 0x0, 10,  8, 11, 0x0),
    gsSP2Triangles( 6, 10, 12, 0x0, 13, 14, 15, 0x0),
    gsSPVertex(luigi_right_arm_shared_dl_vertex_group4, 9, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  0, 0x0),
    gsSP2Triangles( 2,  4,  3, 0x0,  5,  6,  7, 0x0),
    gsSP1Triangle( 5,  8,  6, 0x0),
    gsSPEndDisplayList(),
};

// 0x0400DDE8 - 0x0400DE08
const Gfx luigi_right_arm[] = {
    gsSPLight(&luigi_green_lights_group.l, 1),
    gsSPLight(&luigi_green_lights_group.a, 2),
    gsSPDisplayList(luigi_right_arm_shared_dl),
    gsSPEndDisplayList(),
};

// 0x0400DE08
static const Vtx luigi_right_forearm_shared_dl_vertex[] = {
{{{    47,    -13,    -17}, 0, {     0,      0},  {0x41, 0xCF, 0x9F, 0x00}}},
{{{    -3,    -35,      5}, 0, {     0,      0},  {0xD4, 0x8A, 0xF8, 0x00}}},
{{{    -2,    -13,    -20}, 0, {     0,      0},  {0xD7, 0xE5, 0x8C, 0x00}}},
{{{    46,    -32,      5}, 0, {     0,      0},  {0x3F, 0x94, 0x0F, 0x00}}},
{{{    -2,    -16,     34}, 0, {     0,      0},  {0xD6, 0xD5, 0x6F, 0x00}}},
{{{    47,    -15,     30}, 0, {     0,      0},  {0x42, 0xEC, 0x6A, 0x00}}},
{{{    -1,     16,     25}, 0, {     0,      0},  {0xDB, 0x5D, 0x4D, 0x00}}},
{{{    48,     11,     22}, 0, {     0,      0},  {0x45, 0x5D, 0x32, 0x00}}},
{{{    -1,     18,     -8}, 0, {     0,      0},  {0xDB, 0x67, 0xC1, 0x00}}},
{{{    48,     13,     -6}, 0, {     0,      0},  {0x45, 0x4C, 0xB6, 0x00}}},
{{{   -14,    -25,      5}, 0, {     0,      0},  {0x90, 0xC9, 0xEF, 0x00}}},
{{{   -14,    -10,    -11}, 0, {     0,      0},  {0x91, 0x01, 0xC3, 0x00}}},
{{{   -13,     10,     -3}, 0, {     0,      0},  {0x9E, 0x4B, 0xE7, 0x00}}},
{{{   -13,      9,     18}, 0, {     0,      0},  {0x8D, 0x22, 0x28, 0x00}}},
{{{   -14,    -12,     25}, 0, {     0,      0},  {0x9A, 0xD8, 0x3F, 0x00}}},
{{{    59,     -7,      6}, 0, {     0,      0},  {0x7F, 0xFD, 0x00, 0x00}}},
};

// 0x0400DF08 - 0x0400DFF8
const Gfx luigi_right_forearm_shared_dl[] = {
    gsSPVertex(luigi_right_forearm_shared_dl_vertex, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  1, 0x0),
    gsSP2Triangles( 5,  6,  4, 0x0,  7,  8,  6, 0x0),
    gsSP2Triangles( 9,  2,  8, 0x0,  1, 10,  2, 0x0),
    gsSP2Triangles( 2, 11,  8, 0x0,  8, 12,  6, 0x0),
    gsSP2Triangles( 6, 13,  4, 0x0,  4, 14,  1, 0x0),
    gsSP2Triangles( 9, 15,  0, 0x0,  0, 15,  3, 0x0),
    gsSP2Triangles( 3, 15,  5, 0x0,  5, 15,  7, 0x0),
    gsSP2Triangles( 7, 15,  9, 0x0, 14, 10,  1, 0x0),
    gsSP2Triangles(13, 14,  4, 0x0, 12, 13,  6, 0x0),
    gsSP2Triangles(11, 12,  8, 0x0, 10, 11,  2, 0x0),
    gsSP2Triangles( 9,  0,  2, 0x0,  7,  9,  8, 0x0),
    gsSP2Triangles( 5,  7,  6, 0x0,  3,  5,  4, 0x0),
    gsSP2Triangles( 0,  3,  1, 0x0, 11, 13, 12, 0x0),
    gsSP2Triangles(11, 10, 13, 0x0, 10, 14, 13, 0x0),
    gsSPEndDisplayList(),
};

// 0x0400DFF8
static const Vtx luigi_right_hand_closed_dl_vertex_group1[] = {
{{{    31,      8,    -33}, 0, {     0,      0},  {0xE5, 0xF5, 0x85, 0x00}}},
{{{    49,    -39,     -3}, 0, {     0,      0},  {0x00, 0x86, 0xDF, 0x00}}},
{{{    27,    -36,      0}, 0, {     0,      0},  {0x43, 0xA4, 0xC9, 0x00}}},
{{{     9,     54,     -3}, 0, {     0,      0},  {0xAC, 0x5A, 0xE5, 0x00}}},
{{{    -1,     36,      0}, 0, {     0,      0},  {0xED, 0x70, 0xC9, 0x00}}},
{{{    21,    -51,     -3}, 0, {     0,      0},  {0x73, 0xD4, 0xE6, 0x00}}},
{{{     3,     -2,    -29}, 0, {     0,      0},  {0x48, 0x1E, 0x9D, 0x00}}},
{{{   -17,     42,     -3}, 0, {     0,      0},  {0x30, 0x72, 0xE5, 0x00}}},
{{{   -12,     23,     36}, 0, {     0,      0},  {0xED, 0x3D, 0x6D, 0x00}}},
{{{    11,    -34,     36}, 0, {     0,      0},  {0x15, 0xB3, 0x61, 0x00}}},
{{{    20,    -23,     31}, 0, {     0,      0},  {0x04, 0xC3, 0x6E, 0x00}}},
{{{    21,    -51,     -3}, 0, {     0,      0},  {0xA2, 0xAF, 0xE7, 0x00}}},
{{{   -14,    -10,      5}, 0, {     0,      0},  {0x8C, 0xCF, 0xF8, 0x00}}},
{{{     3,     -2,    -29}, 0, {     0,      0},  {0x9B, 0xD5, 0xC2, 0x00}}},
{{{   -17,     42,     -3}, 0, {     0,      0},  {0x85, 0xF5, 0xE7, 0x00}}},
{{{    52,     72,      0}, 0, {     0,      0},  {0x14, 0x7B, 0xE9, 0x00}}},
};

// 0x0400E0F8
static const Vtx luigi_right_hand_closed_dl_vertex_group2[] = {
{{{    31,      8,    -33}, 0, {     0,      0},  {0xE5, 0xF5, 0x85, 0x00}}},
{{{    93,    -23,      0}, 0, {     0,      0},  {0x68, 0xC5, 0xD7, 0x00}}},
{{{    49,    -39,     -3}, 0, {     0,      0},  {0x00, 0x86, 0xDF, 0x00}}},
{{{    67,    -29,     59}, 0, {     0,      0},  {0x08, 0xAF, 0x60, 0x00}}},
{{{    86,     -7,     46}, 0, {     0,      0},  {0x60, 0x06, 0x51, 0x00}}},
{{{    51,      9,     59}, 0, {     0,      0},  {0xFD, 0x1C, 0x7B, 0x00}}},
{{{    52,     72,      0}, 0, {     0,      0},  {0x14, 0x7B, 0xE9, 0x00}}},
{{{    87,     35,     21}, 0, {     0,      0},  {0x6B, 0x3A, 0x21, 0x00}}},
{{{    77,     27,    -29}, 0, {     0,      0},  {0x4F, 0x22, 0xA4, 0x00}}},
{{{    77,     13,     46}, 0, {     0,      0},  {0x40, 0x30, 0x61, 0x00}}},
{{{    48,     48,     39}, 0, {     0,      0},  {0x20, 0x51, 0x5C, 0x00}}},
{{{    26,     55,     30}, 0, {     0,      0},  {0xCE, 0x4C, 0x57, 0x00}}},
{{{    26,      5,     44}, 0, {     0,      0},  {0xC2, 0xFA, 0x6E, 0x00}}},
{{{     9,     54,     -3}, 0, {     0,      0},  {0xAC, 0x5A, 0xE5, 0x00}}},
};

// 0x0400E1D8
static const Vtx luigi_right_hand_closed_dl_vertex_group3[] = {
{{{    27,    -36,      0}, 0, {     0,      0},  {0x43, 0xA4, 0xC9, 0x00}}},
{{{    20,    -23,     31}, 0, {     0,      0},  {0x04, 0xC3, 0x6E, 0x00}}},
{{{    11,    -34,     36}, 0, {     0,      0},  {0x15, 0xB3, 0x61, 0x00}}},
{{{     0,     21,     31}, 0, {     0,      0},  {0xD2, 0x3C, 0x65, 0x00}}},
{{{   -12,     23,     36}, 0, {     0,      0},  {0xED, 0x3D, 0x6D, 0x00}}},
{{{    -1,     36,      0}, 0, {     0,      0},  {0xED, 0x70, 0xC9, 0x00}}},
{{{    13,      0,    -20}, 0, {     0,      0},  {0x04, 0x01, 0x82, 0x00}}},
{{{     3,     -2,    -29}, 0, {     0,      0},  {0x48, 0x1E, 0x9D, 0x00}}},
{{{    31,      8,    -33}, 0, {     0,      0},  {0xE5, 0xF5, 0x85, 0x00}}},
{{{    26,      5,     44}, 0, {     0,      0},  {0xC2, 0xFA, 0x6E, 0x00}}},
{{{    49,    -39,     -3}, 0, {     0,      0},  {0x00, 0x86, 0xDF, 0x00}}},
{{{    67,    -29,     59}, 0, {     0,      0},  {0x08, 0xAF, 0x60, 0x00}}},
{{{    51,      9,     59}, 0, {     0,      0},  {0xFD, 0x1C, 0x7B, 0x00}}},
{{{     9,     54,     -3}, 0, {     0,      0},  {0xAC, 0x5A, 0xE5, 0x00}}},
{{{    26,     55,     30}, 0, {     0,      0},  {0xCE, 0x4C, 0x57, 0x00}}},
};

// 0x0400E2C8 - 0x0400E458
const Gfx luigi_right_hand_closed_dl[] = {
    gsSPVertex(luigi_right_hand_closed_dl_vertex_group1, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  4, 0x0),
    gsSP2Triangles( 2,  5,  6, 0x0,  6,  7,  4, 0x0),
    gsSP2Triangles( 4,  7,  8, 0x0,  8,  9, 10, 0x0),
    gsSP2Triangles( 9,  5,  2, 0x0, 11, 12, 13, 0x0),
    gsSP2Triangles(13, 12, 14, 0x0, 14, 12,  8, 0x0),
    gsSP2Triangles( 8, 12,  9, 0x0,  9, 12, 11, 0x0),
    gsSP1Triangle( 3, 15,  0, 0x0),
    gsSPVertex(luigi_right_hand_closed_dl_vertex_group2, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 3,  4,  5, 0x0,  6,  7,  8, 0x0),
    gsSP2Triangles( 8,  7,  1, 0x0,  1,  7,  4, 0x0),
    gsSP2Triangles( 4,  7,  9, 0x0, 10,  7,  6, 0x0),
    gsSP2Triangles( 9, 10,  5, 0x0, 10, 11,  5, 0x0),
    gsSP2Triangles(11, 12,  5, 0x0,  1,  4,  3, 0x0),
    gsSP2Triangles(11, 10,  6, 0x0,  6, 13, 11, 0x0),
    gsSP2Triangles( 7, 10,  9, 0x0,  4,  9,  5, 0x0),
    gsSP2Triangles( 0,  8,  1, 0x0,  6,  8,  0, 0x0),
    gsSPVertex(luigi_right_hand_closed_dl_vertex_group3, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  4, 0x0),
    gsSP2Triangles( 4,  3,  5, 0x0,  5,  6,  7, 0x0),
    gsSP2Triangles( 7,  6,  0, 0x0,  8,  6,  5, 0x0),
    gsSP2Triangles( 9,  3,  1, 0x0,  0,  6,  8, 0x0),
    gsSP2Triangles(10, 11,  1, 0x0, 11,  9,  1, 0x0),
    gsSP2Triangles(11, 12,  9, 0x0,  1,  0, 10, 0x0),
    gsSP2Triangles(13,  5,  3, 0x0,  3,  9, 14, 0x0),
    gsSP1Triangle(14, 13,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x0400E458 - 0x0400E478
const Gfx luigi_right_hand_closed[] = {
    gsSPLight(&luigi_white_lights_group.l, 1),
    gsSPLight(&luigi_white_lights_group.a, 2),
    gsSPDisplayList(luigi_right_hand_closed_dl),
    gsSPEndDisplayList(),
};

// 0x0400E478 - 0x0400E4A8
const Gfx luigi_metal_right_hand_closed[] = {
    gsSPDisplayList(luigi_right_hand_closed_dl),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_GEN),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPTexture(0x0F80, 0x07C0, 0, G_TX_RENDERTILE, G_OFF),
    gsSPEndDisplayList(),
};

// 0x0400E4A8
static const Vtx luigi_left_thigh_dl_vertex_group1[] = {
{{{     1,    -39,      7}, 0, {     0,      0},  {0xAB, 0xA2, 0x00, 0x00}}},
{{{   -15,      0,      6}, 0, {     0,      0},  {0x82, 0xF7, 0xFF, 0x00}}},
{{{     0,    -11,    -28}, 0, {     0,      0},  {0x9F, 0xE1, 0xB5, 0x00}}},
{{{    -4,     33,    -15}, 0, {     0,      0},  {0x9E, 0x30, 0xC0, 0x00}}},
{{{    -5,     33,     27}, 0, {     0,      0},  {0xA0, 0x3F, 0x34, 0x00}}},
{{{    -1,    -10,     42}, 0, {     0,      0},  {0x9E, 0xE3, 0x49, 0x00}}},
{{{    95,     -4,     43}, 0, {     0,      0},  {0x4E, 0xE9, 0x60, 0x00}}},
{{{   116,      9,      7}, 0, {     0,      0},  {0x7E, 0x09, 0x01, 0x00}}},
{{{    91,     40,     28}, 0, {     0,      0},  {0x3C, 0x4E, 0x4F, 0x00}}},
{{{    92,     40,    -14}, 0, {     0,      0},  {0x35, 0x5D, 0xBD, 0x00}}},
{{{    96,     -4,    -27}, 0, {     0,      0},  {0x50, 0xE8, 0xA1, 0x00}}},
{{{    98,    -33,      7}, 0, {     0,      0},  {0x46, 0x97, 0x01, 0x00}}},
{{{    19,    -13,    -37}, 0, {     0,      0},  {0xEC, 0xD9, 0x8A, 0x00}}},
{{{    14,     43,    -20}, 0, {     0,      0},  {0xD7, 0x67, 0xC5, 0x00}}},
{{{    13,     43,     34}, 0, {     0,      0},  {0xE7, 0x6D, 0x3A, 0x00}}},
{{{    18,    -13,     52}, 0, {     0,      0},  {0xEA, 0xDA, 0x76, 0x00}}},
};

// 0x0400E5A8
static const Vtx luigi_left_thigh_dl_vertex_group2[] = {
{{{    18,    -13,     52}, 0, {     0,      0},  {0xEA, 0xDA, 0x76, 0x00}}},
{{{     1,    -39,      7}, 0, {     0,      0},  {0xAB, 0xA2, 0x00, 0x00}}},
{{{    21,    -48,      7}, 0, {     0,      0},  {0xF0, 0x83, 0x00, 0x00}}},
{{{    19,    -13,    -37}, 0, {     0,      0},  {0xEC, 0xD9, 0x8A, 0x00}}},
{{{    -1,    -10,     42}, 0, {     0,      0},  {0x9E, 0xE3, 0x49, 0x00}}},
{{{   -15,      0,      6}, 0, {     0,      0},  {0x82, 0xF7, 0xFF, 0x00}}},
{{{    98,    -33,      7}, 0, {     0,      0},  {0x46, 0x97, 0x01, 0x00}}},
{{{    13,     43,     34}, 0, {     0,      0},  {0xE7, 0x6D, 0x3A, 0x00}}},
{{{    91,     40,     28}, 0, {     0,      0},  {0x3C, 0x4E, 0x4F, 0x00}}},
{{{    14,     43,    -20}, 0, {     0,      0},  {0xD7, 0x67, 0xC5, 0x00}}},
{{{    92,     40,    -14}, 0, {     0,      0},  {0x35, 0x5D, 0xBD, 0x00}}},
{{{    96,     -4,    -27}, 0, {     0,      0},  {0x50, 0xE8, 0xA1, 0x00}}},
{{{    95,     -4,     43}, 0, {     0,      0},  {0x4E, 0xE9, 0x60, 0x00}}},
{{{     0,    -11,    -28}, 0, {     0,      0},  {0x9F, 0xE1, 0xB5, 0x00}}},
{{{    -5,     33,     27}, 0, {     0,      0},  {0xA0, 0x3F, 0x34, 0x00}}},
{{{    -4,     33,    -15}, 0, {     0,      0},  {0x9E, 0x30, 0xC0, 0x00}}},
};

// 0x0400E6A8 - 0x0400E7B0
const Gfx luigi_left_thigh_dl[] = {
    gsSPVertex(luigi_left_thigh_dl_vertex_group1, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 3,  1,  4, 0x0,  4,  1,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  8,  7,  9, 0x0),
    gsSP2Triangles( 9,  7, 10, 0x0, 10,  7, 11, 0x0),
    gsSP2Triangles(11,  7,  6, 0x0, 12,  3, 13, 0x0),
    gsSP2Triangles(13,  4, 14, 0x0, 14,  4, 15, 0x0),
    gsSPVertex(luigi_left_thigh_dl_vertex_group2, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 4,  5,  1, 0x0,  0,  2,  6, 0x0),
    gsSP2Triangles( 7,  0,  8, 0x0,  9,  7, 10, 0x0),
    gsSP2Triangles( 3,  9, 10, 0x0,  2,  3,  6, 0x0),
    gsSP2Triangles( 3, 11,  6, 0x0, 10, 11,  3, 0x0),
    gsSP2Triangles( 7,  8, 10, 0x0,  0, 12,  8, 0x0),
    gsSP2Triangles( 6, 12,  0, 0x0,  1, 13,  3, 0x0),
    gsSP2Triangles( 0,  4,  1, 0x0, 14,  4,  0, 0x0),
    gsSP2Triangles( 9, 15, 14, 0x0,  3, 13, 15, 0x0),
    gsSPEndDisplayList(),
};

// 0x0400E7B0 - 0x0400E7E0
const Gfx luigi_left_thigh[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPLight(&luigi_blue_lights_group.l, 1),
    gsSPLight(&luigi_blue_lights_group.a, 2),
    gsSPDisplayList(luigi_left_thigh_dl),
    gsSPEndDisplayList(),
};

// 0x0400E7E0 - 0x0400E858
const Gfx luigi_metal_left_thigh[] = {
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_GEN),
    gsDPSetCombineMode(G_CC_DECALFADE, G_CC_DECALFADE),
    gsDPLoadTextureBlock(player_texture_metal, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTexture(0x0F80, 0x07C0, 0, G_TX_RENDERTILE, G_ON),
    gsSPLight(&luigi_white_lights_group.l, 1),
    gsSPLight(&luigi_white_lights_group.a, 2),
    gsSPDisplayList(luigi_left_thigh_dl),
    gsSPEndDisplayList(),
};

// 0x0400E858
static const Vtx luigi_left_leg_shared_dl_vertex[] = {
{{{     4,    -33,      8}, 0, {     0,      0},  {0xC1, 0x93, 0x00, 0x00}}},
{{{    64,    -41,      8}, 0, {     0,      0},  {0x4B, 0x9A, 0x01, 0x00}}},
{{{    65,     -9,     48}, 0, {     0,      0},  {0x2D, 0xDB, 0x70, 0x00}}},
{{{     8,     39,     29}, 0, {     0,      0},  {0xCC, 0x5E, 0x43, 0x00}}},
{{{    68,     40,     33}, 0, {     0,      0},  {0x52, 0x4B, 0x3C, 0x00}}},
{{{    69,     40,    -16}, 0, {     0,      0},  {0x42, 0x61, 0xD1, 0x00}}},
{{{     9,     39,    -14}, 0, {     0,      0},  {0xC4, 0x4D, 0xAF, 0x00}}},
{{{    66,     -9,    -32}, 0, {     0,      0},  {0x2E, 0xDA, 0x91, 0x00}}},
{{{     6,     -5,    -27}, 0, {     0,      0},  {0xB4, 0xE5, 0x9F, 0x00}}},
{{{     6,     -5,     44}, 0, {     0,      0},  {0xB3, 0xE7, 0x60, 0x00}}},
{{{   -14,      7,      7}, 0, {     0,      0},  {0x82, 0x06, 0xFF, 0x00}}},
{{{    81,      2,      8}, 0, {     0,      0},  {0x7E, 0xFA, 0x01, 0x00}}},
};

// 0x0400E918 - 0x0400E9C8
const Gfx luigi_left_leg_shared_dl[] = {
    gsSPVertex(luigi_left_leg_shared_dl_vertex, 12, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  2,  4, 0x0),
    gsSP2Triangles( 3,  4,  5, 0x0,  6,  5,  7, 0x0),
    gsSP2Triangles( 0,  7,  1, 0x0,  0,  8,  7, 0x0),
    gsSP2Triangles( 7,  8,  6, 0x0,  5,  6,  3, 0x0),
    gsSP2Triangles( 3,  9,  2, 0x0,  2,  9,  0, 0x0),
    gsSP2Triangles( 3, 10,  9, 0x0,  5, 11,  7, 0x0),
    gsSP2Triangles( 7, 11,  1, 0x0,  1, 11,  2, 0x0),
    gsSP2Triangles( 2, 11,  4, 0x0,  4, 11,  5, 0x0),
    gsSP2Triangles( 9, 10,  0, 0x0,  0, 10,  8, 0x0),
    gsSP2Triangles( 8, 10,  6, 0x0,  6, 10,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x0400E9C8
static const Vtx luigi_left_foot_shared_dl_vertex_group1[] = {
{{{    99,     13,     31}, 0, {     0,      0},  {0x2B, 0x77, 0xFF, 0x00}}},
{{{    99,     12,    -18}, 0, {     0,      0},  {0x2B, 0x77, 0xFF, 0x00}}},
{{{    68,     23,    -36}, 0, {     0,      0},  {0x2B, 0x77, 0xFF, 0x00}}},
{{{    70,     23,     54}, 0, {     0,      0},  {0x2B, 0x77, 0xFF, 0x00}}},
{{{   -10,     52,    -28}, 0, {     0,      0},  {0x2B, 0x77, 0xFF, 0x00}}},
{{{    -9,     53,     47}, 0, {     0,      0},  {0x2B, 0x77, 0xFF, 0x00}}},
{{{   -35,     62,     -7}, 0, {     0,      0},  {0x2B, 0x77, 0xFF, 0x00}}},
{{{   -36,     63,     23}, 0, {     0,      0},  {0x2B, 0x77, 0xFF, 0x00}}},
{{{    38,    -11,     48}, 0, {     0,      0},  {0x07, 0xB3, 0x64, 0x00}}},
{{{    70,     23,     54}, 0, {     0,      0},  {0x15, 0xDB, 0x77, 0x00}}},
{{{    -9,     53,     47}, 0, {     0,      0},  {0xD9, 0x00, 0x78, 0x00}}},
{{{    39,     -5,    -29}, 0, {     0,      0},  {0x01, 0xB7, 0x99, 0x00}}},
{{{   -31,     14,    -18}, 0, {     0,      0},  {0xB5, 0xD2, 0xA5, 0x00}}},
{{{   -10,     52,    -28}, 0, {     0,      0},  {0xD7, 0xFD, 0x89, 0x00}}},
{{{   -30,     15,     39}, 0, {     0,      0},  {0xB2, 0xD2, 0x58, 0x00}}},
{{{    68,     23,    -36}, 0, {     0,      0},  {0x0C, 0xD8, 0x89, 0x00}}},
};

// 0x0400EAC8
static const Vtx luigi_left_foot_shared_dl_vertex_group2[] = {
{{{    39,     -5,    -29}, 0, {     0,      0},  {0x01, 0xB7, 0x99, 0x00}}},
{{{    68,     23,    -36}, 0, {     0,      0},  {0x0C, 0xD8, 0x89, 0x00}}},
{{{    99,     12,    -18}, 0, {     0,      0},  {0x44, 0xAD, 0xBE, 0x00}}},
{{{    72,    -22,      6}, 0, {     0,      0},  {0x34, 0x8D, 0xFB, 0x00}}},
{{{    99,     13,     31}, 0, {     0,      0},  {0x4C, 0xAF, 0x3C, 0x00}}},
{{{    70,     23,     54}, 0, {     0,      0},  {0x15, 0xDB, 0x77, 0x00}}},
{{{    38,    -11,     48}, 0, {     0,      0},  {0x07, 0xB3, 0x64, 0x00}}},
{{{   -30,     15,     39}, 0, {     0,      0},  {0xB2, 0xD2, 0x58, 0x00}}},
{{{    -9,     53,     47}, 0, {     0,      0},  {0xD9, 0x00, 0x78, 0x00}}},
{{{   -36,     63,     23}, 0, {     0,      0},  {0x90, 0x17, 0x35, 0x00}}},
{{{   -35,     62,     -7}, 0, {     0,      0},  {0x93, 0x16, 0xC4, 0x00}}},
{{{   -31,     14,    -18}, 0, {     0,      0},  {0xB5, 0xD2, 0xA5, 0x00}}},
{{{   -48,     18,      7}, 0, {     0,      0},  {0x88, 0xD8, 0xFD, 0x00}}},
{{{   -10,     52,    -28}, 0, {     0,      0},  {0xD7, 0xFD, 0x89, 0x00}}},
{{{    24,    -26,      9}, 0, {     0,      0},  {0xDB, 0x87, 0xFC, 0x00}}},
};

// 0x0400EBB8 - 0x0400ECA0
const Gfx luigi_left_foot_shared_dl[] = {
    gsSPVertex(luigi_left_foot_shared_dl_vertex_group1, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSP2Triangles( 3,  2,  4, 0x0,  5,  3,  4, 0x0),
    gsSP2Triangles( 5,  4,  6, 0x0,  5,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0, 11, 12, 13, 0x0),
    gsSP2Triangles(14,  8, 10, 0x0, 11, 13, 15, 0x0),
    gsSPVertex(luigi_left_foot_shared_dl_vertex_group2, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  2,  4, 0x0),
    gsSP2Triangles( 2,  3,  0, 0x0,  4,  5,  6, 0x0),
    gsSP2Triangles( 6,  3,  4, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 10, 13, 11, 0x0),
    gsSP2Triangles(12,  9, 10, 0x0,  9, 12,  7, 0x0),
    gsSP2Triangles(14,  0,  3, 0x0, 11,  0, 14, 0x0),
    gsSP2Triangles( 3,  6, 14, 0x0, 14,  6,  7, 0x0),
    gsSP2Triangles(14,  7, 12, 0x0, 12, 11, 14, 0x0),
    gsSPEndDisplayList(),
};

// 0x0400ECA0 - 0x0400ECC0
const Gfx luigi_left_foot[] = {
    gsSPLight(&luigi_brown1_lights_group.l, 1),
    gsSPLight(&luigi_brown1_lights_group.a, 2),
    gsSPDisplayList(luigi_left_foot_shared_dl),
    gsSPEndDisplayList(),
};

// 0x0400ECC0
static const Vtx luigi_right_thigh_shared_dl_vertex_group1[] = {
{{{    98,    -31,     -9}, 0, {     0,      0},  {0x47, 0x97, 0xFC, 0x00}}},
{{{    19,    -14,     36}, 0, {     0,      0},  {0xEE, 0xD6, 0x76, 0x00}}},
{{{    22,    -48,     -8}, 0, {     0,      0},  {0xF2, 0x82, 0xFD, 0x00}}},
{{{    91,     41,     14}, 0, {     0,      0},  {0x35, 0x5C, 0x44, 0x00}}},
{{{    13,     43,     21}, 0, {     0,      0},  {0xD6, 0x66, 0x3E, 0x00}}},
{{{    12,     44,    -33}, 0, {     0,      0},  {0xE5, 0x6E, 0xC9, 0x00}}},
{{{    90,     42,    -28}, 0, {     0,      0},  {0x3B, 0x50, 0xB2, 0x00}}},
{{{    18,    -11,    -52}, 0, {     0,      0},  {0xEA, 0xDC, 0x89, 0x00}}},
{{{     1,    -39,     -8}, 0, {     0,      0},  {0xAD, 0xA1, 0xFF, 0x00}}},
{{{   -15,      0,     -6}, 0, {     0,      0},  {0x82, 0xF5, 0x02, 0x00}}},
{{{    -1,     -9,    -42}, 0, {     0,      0},  {0x9D, 0xE3, 0xB7, 0x00}}},
{{{    -6,     34,    -27}, 0, {     0,      0},  {0x9E, 0x3F, 0xCF, 0x00}}},
{{{    -5,     32,     16}, 0, {     0,      0},  {0x9E, 0x2D, 0x42, 0x00}}},
{{{    95,     -2,    -44}, 0, {     0,      0},  {0x4D, 0xEC, 0x9E, 0x00}}},
{{{   116,      9,     -8}, 0, {     0,      0},  {0x7E, 0x0B, 0xFE, 0x00}}},
{{{    96,     -4,     27}, 0, {     0,      0},  {0x51, 0xE7, 0x5D, 0x00}}},
};

// 0x0400EDC0
static const Vtx luigi_right_thigh_shared_dl_vertex_group2[] = {
{{{    -5,     32,     16}, 0, {     0,      0},  {0x9E, 0x2D, 0x42, 0x00}}},
{{{   -15,      0,     -6}, 0, {     0,      0},  {0x82, 0xF5, 0x02, 0x00}}},
{{{     0,    -12,     27}, 0, {     0,      0},  {0xA0, 0xDF, 0x4B, 0x00}}},
{{{     1,    -39,     -8}, 0, {     0,      0},  {0xAD, 0xA1, 0xFF, 0x00}}},
{{{    19,    -14,     36}, 0, {     0,      0},  {0xEE, 0xD6, 0x76, 0x00}}},
{{{    -6,     34,    -27}, 0, {     0,      0},  {0x9E, 0x3F, 0xCF, 0x00}}},
{{{    13,     43,     21}, 0, {     0,      0},  {0xD6, 0x66, 0x3E, 0x00}}},
{{{    18,    -11,    -52}, 0, {     0,      0},  {0xEA, 0xDC, 0x89, 0x00}}},
{{{    -1,     -9,    -42}, 0, {     0,      0},  {0x9D, 0xE3, 0xB7, 0x00}}},
{{{    95,     -2,    -44}, 0, {     0,      0},  {0x4D, 0xEC, 0x9E, 0x00}}},
{{{    98,    -31,     -9}, 0, {     0,      0},  {0x47, 0x97, 0xFC, 0x00}}},
{{{    90,     42,    -28}, 0, {     0,      0},  {0x3B, 0x50, 0xB2, 0x00}}},
{{{    91,     41,     14}, 0, {     0,      0},  {0x35, 0x5C, 0x44, 0x00}}},
{{{    12,     44,    -33}, 0, {     0,      0},  {0xE5, 0x6E, 0xC9, 0x00}}},
{{{    96,     -4,     27}, 0, {     0,      0},  {0x51, 0xE7, 0x5D, 0x00}}},
};

// 0x0400EEB0 - 0x0400EFB8
const Gfx luigi_right_thigh_shared_dl[] = {
    gsSPVertex(luigi_right_thigh_shared_dl_vertex_group1, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  1, 0x0),
    gsSP2Triangles( 3,  5,  4, 0x0,  6,  7,  5, 0x0),
    gsSP2Triangles( 0,  2,  7, 0x0,  8,  9, 10, 0x0),
    gsSP2Triangles( 1,  8,  2, 0x0,  2,  8,  7, 0x0),
    gsSP2Triangles( 7, 11,  5, 0x0,  5, 11,  4, 0x0),
    gsSP2Triangles( 4, 12,  1, 0x0, 13, 14,  0, 0x0),
    gsSP2Triangles( 0, 14, 15, 0x0, 15, 14,  3, 0x0),
    gsSP2Triangles( 3, 14,  6, 0x0,  6, 14, 13, 0x0),
    gsSP2Triangles(10,  9, 11, 0x0, 11,  9, 12, 0x0),
    gsSPVertex(luigi_right_thigh_shared_dl_vertex_group2, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 0,  2,  4, 0x0,  5,  0,  6, 0x0),
    gsSP2Triangles( 7,  8,  5, 0x0,  3,  8,  7, 0x0),
    gsSP2Triangles( 4,  2,  3, 0x0,  7,  9, 10, 0x0),
    gsSP2Triangles(11,  9,  7, 0x0, 12, 11, 13, 0x0),
    gsSP2Triangles( 4, 14, 12, 0x0, 10, 14,  4, 0x0),
    gsSPEndDisplayList(),
};

// 0x0400EFB8 - 0x0400EFD8
const Gfx luigi_right_thigh[] = {
    gsSPLight(&luigi_blue_lights_group.l, 1),
    gsSPLight(&luigi_blue_lights_group.a, 2),
    gsSPDisplayList(luigi_right_thigh_shared_dl),
    gsSPEndDisplayList(),
};

// 0x0400EFD8
static const Vtx luigi_right_leg_shared_dl_vertex_group1[] = {
{{{    63,    -40,    -10}, 0, {     0,      0},  {0xF2, 0x9B, 0x4A, 0x00}}},
{{{    66,     -9,     30}, 0, {     0,      0},  {0xF2, 0x9B, 0x4A, 0x00}}},
{{{     4,    -32,     -9}, 0, {     0,      0},  {0xC0, 0x93, 0xFE, 0x00}}},
{{{    66,     -9,     30}, 0, {     0,      0},  {0xFB, 0x22, 0x7A, 0x00}}},
{{{    69,     40,     16}, 0, {     0,      0},  {0xFC, 0x22, 0x7A, 0x00}}},
{{{     9,     39,     14}, 0, {     0,      0},  {0xC6, 0x4B, 0x53, 0x00}}},
{{{    69,     40,     16}, 0, {     0,      0},  {0xFF, 0x7F, 0x03, 0x00}}},
{{{    69,     41,    -33}, 0, {     0,      0},  {0xFF, 0x7F, 0x03, 0x00}}},
{{{     9,     41,    -29}, 0, {     0,      0},  {0xCD, 0x60, 0xC0, 0x00}}},
{{{    69,     41,    -33}, 0, {     0,      0},  {0xF7, 0x27, 0x88, 0x00}}},
{{{    65,     -8,    -50}, 0, {     0,      0},  {0xF8, 0x28, 0x88, 0x00}}},
{{{    65,     -8,    -50}, 0, {     0,      0},  {0xEF, 0xA0, 0xB0, 0x00}}},
{{{    63,    -40,    -10}, 0, {     0,      0},  {0xEF, 0xA0, 0xB0, 0x00}}},
{{{     6,     -5,     27}, 0, {     0,      0},  {0xB4, 0xE4, 0x61, 0x00}}},
{{{   -13,      9,     -8}, 0, {     0,      0},  {0x82, 0x08, 0x02, 0x00}}},
{{{     5,     -2,    -45}, 0, {     0,      0},  {0xB2, 0xEA, 0xA0, 0x00}}},
};

// 0x0400F0D8
static const Vtx luigi_right_leg_shared_dl_vertex_group2[] = {
{{{    65,     -8,    -50}, 0, {     0,      0},  {0x75, 0xEE, 0xD5, 0x00}}},
{{{    83,      3,     -9}, 0, {     0,      0},  {0x7E, 0xF9, 0xFE, 0x00}}},
{{{    63,    -40,    -10}, 0, {     0,      0},  {0x75, 0xD1, 0xFD, 0x00}}},
{{{    66,     -9,     30}, 0, {     0,      0},  {0x77, 0xEC, 0x26, 0x00}}},
{{{    69,     40,     16}, 0, {     0,      0},  {0x7A, 0x18, 0x17, 0x00}}},
{{{    69,     41,    -33}, 0, {     0,      0},  {0x79, 0x19, 0xE6, 0x00}}},
{{{     4,    -32,     -9}, 0, {     0,      0},  {0xC0, 0x93, 0xFE, 0x00}}},
{{{     5,     -2,    -45}, 0, {     0,      0},  {0xB2, 0xEA, 0xA0, 0x00}}},
{{{    65,     -8,    -50}, 0, {     0,      0},  {0xEF, 0xA0, 0xB0, 0x00}}},
{{{    65,     -8,    -50}, 0, {     0,      0},  {0xF8, 0x28, 0x88, 0x00}}},
{{{     9,     41,    -29}, 0, {     0,      0},  {0xCD, 0x60, 0xC0, 0x00}}},
{{{     9,     39,     14}, 0, {     0,      0},  {0xC6, 0x4B, 0x53, 0x00}}},
{{{    69,     40,     16}, 0, {     0,      0},  {0xFF, 0x7F, 0x03, 0x00}}},
{{{     6,     -5,     27}, 0, {     0,      0},  {0xB4, 0xE4, 0x61, 0x00}}},
{{{    66,     -9,     30}, 0, {     0,      0},  {0xFB, 0x22, 0x7A, 0x00}}},
{{{    66,     -9,     30}, 0, {     0,      0},  {0xF2, 0x9B, 0x4A, 0x00}}},
};

// 0x0400F1D8 - 0x0400F290
const Gfx luigi_right_leg_shared_dl[] = {
    gsSPVertex(luigi_right_leg_shared_dl_vertex_group1, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9, 10,  8, 0x0),
    gsSP2Triangles(11, 12,  2, 0x0, 13, 14,  2, 0x0),
    gsSP2Triangles( 2, 14, 15, 0x0, 15, 14,  8, 0x0),
    gsSP2Triangles( 8, 14,  5, 0x0,  5, 14, 13, 0x0),
    gsSPVertex(luigi_right_leg_shared_dl_vertex_group2, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 3,  1,  4, 0x0,  4,  1,  5, 0x0),
    gsSP2Triangles( 5,  1,  0, 0x0,  6,  7,  8, 0x0),
    gsSP2Triangles( 9,  7, 10, 0x0, 10, 11, 12, 0x0),
    gsSP2Triangles(11, 13, 14, 0x0, 15, 13,  6, 0x0),
    gsSPEndDisplayList(),
};

// 0x0400F290
static const Vtx luigi_right_foot_dl_vertex_group1[] = {
{{{    24,    -26,     -9}, 0, {     0,      0},  {0xDC, 0x87, 0x06, 0x00}}},
{{{   -32,     14,     17}, 0, {     0,      0},  {0xB5, 0xD3, 0x5B, 0x00}}},
{{{   -48,     17,     -9}, 0, {     0,      0},  {0x89, 0xD6, 0x03, 0x00}}},
{{{   -30,     14,    -41}, 0, {     0,      0},  {0xB4, 0xD0, 0xA8, 0x00}}},
{{{    38,    -11,    -49}, 0, {     0,      0},  {0x0A, 0xB2, 0x9D, 0x00}}},
{{{    72,    -21,     -6}, 0, {     0,      0},  {0x36, 0x8E, 0x08, 0x00}}},
{{{    39,     -4,     28}, 0, {     0,      0},  {0x01, 0xB8, 0x68, 0x00}}},
{{{   -37,     62,    -26}, 0, {     0,      0},  {0x90, 0x14, 0xC9, 0x00}}},
{{{   -36,     61,      4}, 0, {     0,      0},  {0x92, 0x15, 0x3B, 0x00}}},
{{{   -12,     53,     26}, 0, {     0,      0},  {0xD5, 0xFE, 0x77, 0x00}}},
{{{    -9,     52,    -50}, 0, {     0,      0},  {0xDA, 0xFE, 0x87, 0x00}}},
{{{    99,     14,    -32}, 0, {     0,      0},  {0x4E, 0xB0, 0xC6, 0x00}}},
{{{    70,     24,    -54}, 0, {     0,      0},  {0x17, 0xD9, 0x8A, 0x00}}},
{{{    98,     14,     18}, 0, {     0,      0},  {0x45, 0xAF, 0x44, 0x00}}},
{{{    67,     25,     36}, 0, {     0,      0},  {0x0B, 0xDA, 0x78, 0x00}}},
};

// 0x0400F380
static const Vtx luigi_right_foot_dl_vertex_group2[] = {
{{{   -37,     62,    -26}, 0, {     0,      0},  {0x29, 0x77, 0x00, 0x00}}},
{{{   -36,     61,      4}, 0, {     0,      0},  {0x29, 0x77, 0x00, 0x00}}},
{{{    -9,     52,    -50}, 0, {     0,      0},  {0x29, 0x77, 0x00, 0x00}}},
{{{   -12,     53,     26}, 0, {     0,      0},  {0x29, 0x77, 0x00, 0x00}}},
{{{    70,     24,    -54}, 0, {     0,      0},  {0x29, 0x77, 0x00, 0x00}}},
{{{    67,     25,     36}, 0, {     0,      0},  {0x29, 0x77, 0x00, 0x00}}},
{{{    99,     14,    -32}, 0, {     0,      0},  {0x29, 0x77, 0x00, 0x00}}},
{{{    98,     14,     18}, 0, {     0,      0},  {0x29, 0x77, 0x00, 0x00}}},
};

// 0x0400F400 - 0x0400F4E8
const Gfx luigi_right_foot_dl[] = {
    gsSPVertex(luigi_right_foot_dl_vertex_group1, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  0, 0x0),
    gsSP2Triangles( 3,  4,  0, 0x0,  0,  4,  5, 0x0),
    gsSP2Triangles( 0,  6,  1, 0x0,  5,  6,  0, 0x0),
    gsSP2Triangles( 3,  2,  7, 0x0,  8,  7,  2, 0x0),
    gsSP2Triangles( 1,  9,  8, 0x0,  2,  1,  8, 0x0),
    gsSP2Triangles( 7, 10,  3, 0x0, 11,  5,  4, 0x0),
    gsSP2Triangles( 4, 12, 11, 0x0,  6,  5, 13, 0x0),
    gsSP2Triangles(11, 13,  5, 0x0, 13, 14,  6, 0x0),
    gsSP2Triangles(14,  9,  6, 0x0, 10,  4,  3, 0x0),
    gsSP2Triangles( 9,  1,  6, 0x0, 10, 12,  4, 0x0),
    gsSPVertex(luigi_right_foot_dl_vertex_group2, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  2, 0x0),
    gsSP2Triangles( 3,  4,  2, 0x0,  3,  5,  4, 0x0),
    gsSP2Triangles( 5,  6,  4, 0x0,  5,  7,  6, 0x0),
    gsSPEndDisplayList(),
};

// 0x0400F4E8 - 0x0400F528
const Gfx luigi_right_foot[] = {
    gsSPLight(&luigi_brown1_lights_group.l, 1),
    gsSPLight(&luigi_brown1_lights_group.a, 2),
    gsSPDisplayList(luigi_right_foot_dl),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

// 0x0400F528 - 0x0400F568
const Gfx luigi_metal_right_foot[] = {
    gsSPDisplayList(luigi_right_foot_dl),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_GEN),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPTexture(0x0F80, 0x07C0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

// 0x0400F568
static const Vtx luigi_yellow_button_dl_vertex[] = {
{{{    14,     72,     35}, 0, {   180,    962},  {0x14, 0x78, 0x23, 0xFF}}},
{{{     9,     64,     54}, 0, {   682,    966},  {0x04, 0x6A, 0x44, 0xFF}}},
{{{    48,     60,     29}, 0, {    34,    106},  {0x39, 0x6A, 0x26, 0xFF}}},
{{{    31,     69,     25}, 0, {   -60,    572},  {0x2C, 0x76, 0x08, 0xFF}}},
{{{    21,     54,     65}, 0, {   966,    590},  {0x19, 0x58, 0x57, 0xFF}}},
{{{    34,     49,     62}, 0, {   902,    252},  {0x29, 0x53, 0x56, 0xFF}}},
{{{    49,     50,     49}, 0, {   548,      0},  {0x4D, 0x51, 0x3A, 0xFF}}},
{{{    14,     72,    -34}, 0, {   776,    920},  {0x10, 0x7B, 0xE7, 0xFF}}},
{{{    31,     69,    -24}, 0, {   990,    512},  {0x2D, 0x75, 0xF2, 0xFF}}},
{{{    48,     60,    -28}, 0, {   850,     72},  {0x3E, 0x6A, 0xE2, 0xFF}}},
{{{     9,     64,    -53}, 0, {   264,    972},  {0x03, 0x6A, 0xBB, 0xFF}}},
{{{    49,     50,    -48}, 0, {   312,      0},  {0x4D, 0x50, 0xC5, 0xFF}}},
{{{    34,     49,    -61}, 0, {   -24,    310},  {0x29, 0x52, 0xA9, 0xFF}}},
{{{    21,     54,    -64}, 0, {   -58,    642},  {0x17, 0x58, 0xA8, 0xFF}}},
};

// 0x0400F648
static const Vtx luigi_tshirt_shared_dl_vertex_group1[] = {
{{{    48,     60,    -28}, 0, {     0,      0},  {0x3E, 0x6A, 0xE2, 0xFF}}},
{{{    48,     60,     29}, 0, {     0,      0},  {0x39, 0x6A, 0x26, 0xFF}}},
{{{    82,     29,     20}, 0, {     0,      0},  {0x66, 0x48, 0x14, 0xFF}}},
{{{    82,     29,    -20}, 0, {     0,      0},  {0x69, 0x43, 0xEC, 0xFF}}},
{{{   100,      1,     18}, 0, {     0,      0},  {0x7A, 0x17, 0x16, 0xFF}}},
{{{   100,      1,    -17}, 0, {     0,      0},  {0x7C, 0x09, 0xEA, 0xFF}}},
{{{     6,     -8,    -77}, 0, {     0,      0},  {0x00, 0xEB, 0x83, 0xFF}}},
{{{    47,      2,    -71}, 0, {     0,      0},  {0x30, 0x09, 0x8B, 0xFF}}},
{{{    46,    -27,    -67}, 0, {     0,      0},  {0x24, 0xC8, 0x95, 0xFF}}},
{{{    12,     27,    -75}, 0, {     0,      0},  {0x11, 0x20, 0x87, 0xFF}}},
{{{    20,    -50,    -55}, 0, {     0,      0},  {0x0A, 0x9A, 0xB7, 0xFF}}},
{{{    66,    -40,    -39}, 0, {     0,      0},  {0x3B, 0x9A, 0xD3, 0xFF}}},
{{{    84,    -21,    -48}, 0, {     0,      0},  {0x5F, 0xDE, 0xB4, 0xFF}}},
{{{    20,    -50,     56}, 0, {     0,      0},  {0x0A, 0x99, 0x49, 0xFF}}},
{{{    66,    -40,     40}, 0, {     0,      0},  {0x3B, 0x9A, 0x2D, 0xFF}}},
{{{    46,    -27,     68}, 0, {     0,      0},  {0x24, 0xC8, 0x6B, 0xFF}}},
};

// 0x0400F748
static const Vtx luigi_tshirt_shared_dl_vertex_group2[] = {
{{{    20,    -50,     56}, 0, {     0,      0},  {0x0A, 0x99, 0x49, 0xFF}}},
{{{    46,    -27,     68}, 0, {     0,      0},  {0x24, 0xC8, 0x6B, 0xFF}}},
{{{     6,     -8,     78}, 0, {     0,      0},  {0x00, 0xEA, 0x7C, 0xFF}}},
{{{    47,      2,     72}, 0, {     0,      0},  {0x30, 0x08, 0x75, 0xFF}}},
{{{    84,    -21,     49}, 0, {     0,      0},  {0x5F, 0xDE, 0x4C, 0xFF}}},
{{{    66,    -40,     40}, 0, {     0,      0},  {0x3B, 0x9A, 0x2D, 0xFF}}},
{{{    13,     27,     76}, 0, {     0,      0},  {0x12, 0x20, 0x79, 0xFF}}},
{{{   100,      1,    -17}, 0, {     0,      0},  {0x7C, 0x09, 0xEA, 0xFF}}},
{{{   100,      1,     18}, 0, {     0,      0},  {0x7A, 0x17, 0x16, 0xFF}}},
{{{    93,    -27,     20}, 0, {     0,      0},  {0x6B, 0xBF, 0x0D, 0xFF}}},
{{{    93,    -27,    -19}, 0, {     0,      0},  {0x66, 0xB7, 0xF0, 0xFF}}},
{{{    54,    -50,      0}, 0, {     0,      0},  {0x30, 0x8B, 0x00, 0xFF}}},
{{{    80,     11,     48}, 0, {     0,      0},  {0x60, 0x28, 0x47, 0xFF}}},
{{{    44,     41,     60}, 0, {     0,      0},  {0x3C, 0x34, 0x62, 0xFF}}},
};

// 0x0400F828
static const Vtx luigi_tshirt_shared_dl_vertex_group3[] = {
{{{    80,     11,    -47}, 0, {     0,      0},  {0x60, 0x28, 0xB8, 0xFF}}},
{{{    47,      2,    -71}, 0, {     0,      0},  {0x30, 0x09, 0x8B, 0xFF}}},
{{{    43,     41,    -60}, 0, {     0,      0},  {0x3C, 0x32, 0x9D, 0xFF}}},
{{{    84,    -21,    -48}, 0, {     0,      0},  {0x5F, 0xDE, 0xB4, 0xFF}}},
{{{    12,     27,    -75}, 0, {     0,      0},  {0x11, 0x20, 0x87, 0xFF}}},
};

// 0x0400F878
static const Vtx luigi_pants_overalls_shared_dl_vertex_group1[] = {
{{{    48,     60,    -28}, 0, {     0,      0},  {0x3E, 0x6A, 0xE2, 0xFF}}},
{{{    31,     69,     25}, 0, {     0,      0},  {0x2C, 0x76, 0x08, 0xFF}}},
{{{    48,     60,     29}, 0, {     0,      0},  {0x39, 0x6A, 0x26, 0xFF}}},
{{{    31,     69,    -24}, 0, {     0,      0},  {0x2D, 0x75, 0xF2, 0xFF}}},
{{{    14,     72,     35}, 0, {     0,      0},  {0x14, 0x78, 0x23, 0xFF}}},
{{{    14,     72,    -34}, 0, {     0,      0},  {0x10, 0x7B, 0xE7, 0xFF}}},
{{{   -15,     75,     29}, 0, {     0,      0},  {0xEC, 0x7A, 0x1C, 0xFF}}},
{{{   -15,     74,    -29}, 0, {     0,      0},  {0xEA, 0x76, 0xDA, 0xFF}}},
{{{     9,     64,    -53}, 0, {     0,      0},  {0x03, 0x6A, 0xBB, 0xFF}}},
{{{   -43,     71,    -20}, 0, {     0,      0},  {0xCC, 0x72, 0xEE, 0xFF}}},
{{{   -28,     54,    -63}, 0, {     0,      0},  {0xD1, 0x4F, 0xAA, 0xFF}}},
{{{   -40,     62,    -46}, 0, {     0,      0},  {0xC5, 0x5F, 0xC6, 0xFF}}},
{{{   -40,     62,     47}, 0, {     0,      0},  {0xC4, 0x5E, 0x3A, 0xFF}}},
{{{   -43,     71,     21}, 0, {     0,      0},  {0xBC, 0x69, 0x11, 0xFF}}},
{{{   -28,     54,     64}, 0, {     0,      0},  {0xD0, 0x50, 0x55, 0xFF}}},
};

// 0x0400F968
static const Vtx luigi_pants_overalls_shared_dl_vertex_group2[] = {
{{{    80,     11,    -47}, 0, {     0,      0},  {0x60, 0x28, 0xB8, 0xFF}}},
{{{    43,     41,    -60}, 0, {     0,      0},  {0x3C, 0x32, 0x9D, 0xFF}}},
{{{    49,     50,    -48}, 0, {     0,      0},  {0x4D, 0x50, 0xC5, 0xFF}}},
{{{     9,     64,     54}, 0, {     0,      0},  {0x04, 0x6A, 0x44, 0xFF}}},
{{{    14,     72,     35}, 0, {     0,      0},  {0x14, 0x78, 0x23, 0xFF}}},
{{{   -15,     75,     29}, 0, {     0,      0},  {0xEC, 0x7A, 0x1C, 0xFF}}},
{{{    48,     60,     29}, 0, {     0,      0},  {0x39, 0x6A, 0x26, 0xFF}}},
{{{    49,     50,     49}, 0, {     0,      0},  {0x4D, 0x51, 0x3A, 0xFF}}},
{{{    82,     29,     20}, 0, {     0,      0},  {0x66, 0x48, 0x14, 0xFF}}},
{{{    34,     49,     62}, 0, {     0,      0},  {0x29, 0x53, 0x56, 0xFF}}},
{{{    44,     41,     60}, 0, {     0,      0},  {0x3C, 0x34, 0x62, 0xFF}}},
{{{    80,     11,     48}, 0, {     0,      0},  {0x60, 0x28, 0x47, 0xFF}}},
{{{   100,      1,     18}, 0, {     0,      0},  {0x7A, 0x17, 0x16, 0xFF}}},
{{{    82,     29,    -20}, 0, {     0,      0},  {0x69, 0x43, 0xEC, 0xFF}}},
{{{    34,     49,    -61}, 0, {     0,      0},  {0x29, 0x52, 0xA9, 0xFF}}},
{{{    48,     60,    -28}, 0, {     0,      0},  {0x3E, 0x6A, 0xE2, 0xFF}}},
};

// 0x0400FA68
static const Vtx luigi_pants_overalls_shared_dl_vertex_group3[] = {
{{{    80,     11,    -47}, 0, {     0,      0},  {0x60, 0x28, 0xB8, 0xFF}}},
{{{    82,     29,    -20}, 0, {     0,      0},  {0x69, 0x43, 0xEC, 0xFF}}},
{{{   100,      1,    -17}, 0, {     0,      0},  {0x7C, 0x09, 0xEA, 0xFF}}},
{{{    20,    -50,    -55}, 0, {     0,      0},  {0x0A, 0x9A, 0xB7, 0xFF}}},
{{{    66,    -40,    -39}, 0, {     0,      0},  {0x3B, 0x9A, 0xD3, 0xFF}}},
{{{    54,    -50,      0}, 0, {     0,      0},  {0x30, 0x8B, 0x00, 0xFF}}},
{{{   -27,    -21,    -73}, 0, {     0,      0},  {0xCB, 0xD5, 0x96, 0xFF}}},
{{{     6,     -8,    -77}, 0, {     0,      0},  {0x00, 0xEB, 0x83, 0xFF}}},
{{{   -29,    -49,    -50}, 0, {     0,      0},  {0xC9, 0x9A, 0xCF, 0xFF}}},
{{{     8,    -62,      0}, 0, {     0,      0},  {0xFD, 0x82, 0x00, 0xFF}}},
{{{   -59,    -24,    -32}, 0, {     0,      0},  {0x90, 0xD5, 0xD9, 0xFF}}},
{{{   -30,    -56,      0}, 0, {     0,      0},  {0xB8, 0x98, 0x00, 0xFF}}},
{{{   -27,     22,    -76}, 0, {     0,      0},  {0xC7, 0x0F, 0x90, 0xFF}}},
{{{    12,     27,    -75}, 0, {     0,      0},  {0x11, 0x20, 0x87, 0xFF}}},
{{{    20,    -50,     56}, 0, {     0,      0},  {0x0A, 0x99, 0x49, 0xFF}}},
{{{    66,    -40,     40}, 0, {     0,      0},  {0x3B, 0x9A, 0x2D, 0xFF}}},
};

// 0x0400FB68
static const Vtx luigi_pants_overalls_shared_dl_vertex_group4[] = {
{{{    10,    -62,     -1}, 0, {     0,      0},  {0xFD, 0x82, 0x00, 0xFF}}},
{{{    20,    -50,     56}, 0, {     0,      0},  {0x0A, 0x99, 0x49, 0xFF}}},
{{{   -29,    -49,     50}, 0, {     0,      0},  {0xC8, 0x99, 0x30, 0xFF}}},
{{{   -27,    -21,     74}, 0, {     0,      0},  {0xCB, 0xD3, 0x69, 0xFF}}},
{{{     6,     -8,     78}, 0, {     0,      0},  {0x00, 0xEA, 0x7C, 0xFF}}},
{{{   -27,     22,     78}, 0, {     0,      0},  {0xC8, 0x0E, 0x70, 0xFF}}},
{{{    13,     27,     76}, 0, {     0,      0},  {0x12, 0x20, 0x79, 0xFF}}},
{{{   -59,    -24,     32}, 0, {     0,      0},  {0x8D, 0xD8, 0x21, 0xFF}}},
{{{   -30,    -56,      0}, 0, {     0,      0},  {0xB8, 0x98, 0x00, 0xFF}}},
{{{   -28,     54,    -63}, 0, {     0,      0},  {0xD1, 0x4F, 0xAA, 0xFF}}},
{{{   -27,     22,    -76}, 0, {     0,      0},  {0xC7, 0x0F, 0x90, 0xFF}}},
{{{   -71,     46,    -25}, 0, {     0,      0},  {0x8F, 0x2A, 0xDA, 0xFF}}},
{{{   -59,    -24,    -32}, 0, {     0,      0},  {0x90, 0xD5, 0xD9, 0xFF}}},
{{{   -71,     46,     26}, 0, {     0,      0},  {0x94, 0x2A, 0x31, 0xFF}}},
{{{   -43,     71,     21}, 0, {     0,      0},  {0xBC, 0x69, 0x11, 0xFF}}},
{{{   -43,     71,    -20}, 0, {     0,      0},  {0xCC, 0x72, 0xEE, 0xFF}}},
};

// 0x0400FC68
static const Vtx luigi_pants_overalls_shared_dl_vertex_group5[] = {
{{{   -71,     46,    -25}, 0, {     0,      0},  {0x8F, 0x2A, 0xDA, 0xFF}}},
{{{   -43,     71,    -20}, 0, {     0,      0},  {0xCC, 0x72, 0xEE, 0xFF}}},
{{{   -40,     62,    -46}, 0, {     0,      0},  {0xC5, 0x5F, 0xC6, 0xFF}}},
{{{   -59,    -24,    -32}, 0, {     0,      0},  {0x90, 0xD5, 0xD9, 0xFF}}},
{{{   -59,    -24,     32}, 0, {     0,      0},  {0x8D, 0xD8, 0x21, 0xFF}}},
{{{   -28,     54,    -63}, 0, {     0,      0},  {0xD1, 0x4F, 0xAA, 0xFF}}},
{{{   -43,     71,     21}, 0, {     0,      0},  {0xBC, 0x69, 0x11, 0xFF}}},
{{{   -71,     46,     26}, 0, {     0,      0},  {0x94, 0x2A, 0x31, 0xFF}}},
{{{   -30,    -56,      0}, 0, {     0,      0},  {0xB8, 0x98, 0x00, 0xFF}}},
{{{   -27,     22,     78}, 0, {     0,      0},  {0xC8, 0x0E, 0x70, 0xFF}}},
{{{   -28,     54,     64}, 0, {     0,      0},  {0xD0, 0x50, 0x55, 0xFF}}},
{{{   -40,     62,     47}, 0, {     0,      0},  {0xC4, 0x5E, 0x3A, 0xFF}}},
{{{    13,     27,     76}, 0, {     0,      0},  {0x12, 0x20, 0x79, 0xFF}}},
{{{    -4,     49,     71}, 0, {     0,      0},  {0xFB, 0x43, 0x6B, 0xFF}}},
};

// 0x0400FD48
static const Vtx luigi_pants_overalls_shared_dl_vertex_group6[] = {
{{{   -27,     22,    -76}, 0, {     0,      0},  {0xC7, 0x0F, 0x90, 0xFF}}},
{{{    -4,     49,    -69}, 0, {     0,      0},  {0xF9, 0x42, 0x94, 0xFF}}},
{{{    12,     27,    -75}, 0, {     0,      0},  {0x11, 0x20, 0x87, 0xFF}}},
{{{   -28,     54,    -63}, 0, {     0,      0},  {0xD1, 0x4F, 0xAA, 0xFF}}},
{{{    80,     11,    -47}, 0, {     0,      0},  {0x60, 0x28, 0xB8, 0xFF}}},
{{{   100,      1,    -17}, 0, {     0,      0},  {0x7C, 0x09, 0xEA, 0xFF}}},
{{{    84,    -21,    -48}, 0, {     0,      0},  {0x5F, 0xDE, 0xB4, 0xFF}}},
{{{    93,    -27,    -19}, 0, {     0,      0},  {0x66, 0xB7, 0xF0, 0xFF}}},
{{{    66,    -40,    -39}, 0, {     0,      0},  {0x3B, 0x9A, 0xD3, 0xFF}}},
{{{    54,    -50,      0}, 0, {     0,      0},  {0x30, 0x8B, 0x00, 0xFF}}},
{{{    66,    -40,     40}, 0, {     0,      0},  {0x3B, 0x9A, 0x2D, 0xFF}}},
{{{    93,    -27,     20}, 0, {     0,      0},  {0x6B, 0xBF, 0x0D, 0xFF}}},
{{{    84,    -21,     49}, 0, {     0,      0},  {0x5F, 0xDE, 0x4C, 0xFF}}},
{{{   100,      1,     18}, 0, {     0,      0},  {0x7A, 0x17, 0x16, 0xFF}}},
{{{    80,     11,     48}, 0, {     0,      0},  {0x60, 0x28, 0x47, 0xFF}}},
};

// 0x0400FE38
static const Vtx luigi_pants_overalls_shared_dl_vertex_group7[] = {
{{{    21,     54,    -64}, 0, {     0,      0},  {0x17, 0x58, 0xA8, 0xFF}}},
{{{    -4,     49,    -69}, 0, {     0,      0},  {0xF9, 0x42, 0x94, 0xFF}}},
{{{     9,     64,    -53}, 0, {     0,      0},  {0x03, 0x6A, 0xBB, 0xFF}}},
{{{   -28,     54,    -63}, 0, {     0,      0},  {0xD1, 0x4F, 0xAA, 0xFF}}},
{{{    34,     49,     62}, 0, {     0,      0},  {0x29, 0x53, 0x56, 0xFF}}},
{{{    21,     54,     65}, 0, {     0,      0},  {0x19, 0x58, 0x57, 0xFF}}},
{{{    13,     27,     76}, 0, {     0,      0},  {0x12, 0x20, 0x79, 0xFF}}},
{{{   -28,     54,     64}, 0, {     0,      0},  {0xD0, 0x50, 0x55, 0xFF}}},
{{{    -4,     49,     71}, 0, {     0,      0},  {0xFB, 0x43, 0x6B, 0xFF}}},
{{{     9,     64,     54}, 0, {     0,      0},  {0x04, 0x6A, 0x44, 0xFF}}},
{{{   -15,     75,     29}, 0, {     0,      0},  {0xEC, 0x7A, 0x1C, 0xFF}}},
{{{    12,     27,    -75}, 0, {     0,      0},  {0x11, 0x20, 0x87, 0xFF}}},
{{{    34,     49,    -61}, 0, {     0,      0},  {0x29, 0x52, 0xA9, 0xFF}}},
{{{    43,     41,    -60}, 0, {     0,      0},  {0x3C, 0x32, 0x9D, 0xFF}}},
{{{    44,     41,     60}, 0, {     0,      0},  {0x3C, 0x34, 0x62, 0xFF}}},
};

// 0x0400FF28 - 0x0400FF88
const Gfx luigi_yellow_button_dl[] = {
    gsSPVertex(luigi_yellow_button_dl_vertex, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  0, 0x0),
    gsSP2Triangles( 1,  4,  2, 0x0,  5,  6,  2, 0x0),
    gsSP2Triangles( 4,  5,  2, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles(10,  7,  9, 0x0,  9, 11, 12, 0x0),
    gsSP2Triangles(12, 13,  9, 0x0, 13, 10,  9, 0x0),
    gsSPEndDisplayList(),
};

// 0x0400FF88 - 0x04010260
const Gfx luigi_pants_overalls_shared_dl[] = {
    gsSPVertex(luigi_pants_overalls_shared_dl_vertex_group1, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  1,  5, 0x0,  1,  3,  5, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  5,  7,  6, 0x0),
    gsSP2Triangles( 7,  5,  8, 0x0,  9,  6,  7, 0x0),
    gsSP2Triangles( 7,  8, 10, 0x0, 10, 11,  7, 0x0),
    gsSP2Triangles( 9,  7, 11, 0x0, 12,  6, 13, 0x0),
    gsSP2Triangles( 9, 13,  6, 0x0,  6, 12, 14, 0x0),
    gsSPVertex(luigi_pants_overalls_shared_dl_vertex_group2, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9, 10,  7, 0x0),
    gsSP2Triangles( 7, 10, 11, 0x0, 11,  8,  7, 0x0),
    gsSP2Triangles(12,  8, 11, 0x0, 13,  0,  2, 0x0),
    gsSP2Triangles( 2,  1, 14, 0x0,  2, 15, 13, 0x0),
    gsSPVertex(luigi_pants_overalls_shared_dl_vertex_group3, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  6,  7, 0x0,  3,  8,  6, 0x0),
    gsSP2Triangles( 5,  9,  3, 0x0,  8,  3,  9, 0x0),
    gsSP2Triangles( 6,  8, 10, 0x0, 11, 10,  8, 0x0),
    gsSP2Triangles( 9, 11,  8, 0x0,  6, 12,  7, 0x0),
    gsSP2Triangles(12,  6, 10, 0x0,  7, 12, 13, 0x0),
    gsSP2Triangles(14,  5, 15, 0x0, 14,  9,  5, 0x0),
    gsSPVertex(luigi_pants_overalls_shared_dl_vertex_group4, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 1,  4,  3, 0x0,  5,  4,  6, 0x0),
    gsSP2Triangles( 4,  5,  3, 0x0,  2,  3,  7, 0x0),
    gsSP2Triangles( 7,  3,  5, 0x0,  8,  2,  7, 0x0),
    gsSP2Triangles( 2,  8,  0, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles(12, 11, 10, 0x0, 11,  7, 13, 0x0),
    gsSP1Triangle(14, 15, 11, 0x0),
    gsSPVertex(luigi_pants_overalls_shared_dl_vertex_group5, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  4, 0x0),
    gsSP2Triangles( 2,  5,  0, 0x0,  6,  0,  7, 0x0),
    gsSP2Triangles( 4,  3,  8, 0x0,  9,  7,  4, 0x0),
    gsSP2Triangles( 7, 10, 11, 0x0, 11,  6,  7, 0x0),
    gsSP2Triangles( 9, 12, 13, 0x0, 10,  9, 13, 0x0),
    gsSP1Triangle( 7,  9, 10, 0x0),
    gsSPVertex(luigi_pants_overalls_shared_dl_vertex_group6, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  5,  7,  6, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9,  8,  7, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 12, 11, 13, 0x0),
    gsSP2Triangles(14, 12, 13, 0x0, 11, 10,  9, 0x0),
    gsSPVertex(luigi_pants_overalls_shared_dl_vertex_group7, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  2,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles(10,  7,  9, 0x0,  9,  8,  5, 0x0),
    gsSP2Triangles( 5,  8,  6, 0x0, 11,  1,  0, 0x0),
    gsSP2Triangles(11, 12, 13, 0x0,  6, 14,  4, 0x0),
    gsSP1Triangle(11,  0, 12, 0x0),
    gsSPEndDisplayList(),
};

// 0x04010260 - 0x04010348
const Gfx luigi_tshirt_shared_dl[] = {
    gsSPVertex(luigi_tshirt_shared_dl_vertex_group1, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  3,  2, 0x0,  4,  5,  3, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  6,  9,  7, 0x0),
    gsSP2Triangles( 6,  8, 10, 0x0, 11,  8, 12, 0x0),
    gsSP2Triangles(12,  8,  7, 0x0,  8, 11, 10, 0x0),
    gsSP1Triangle(13, 14, 15, 0x0),
    gsSPVertex(luigi_tshirt_shared_dl_vertex_group2, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  2, 0x0),
    gsSP2Triangles( 3,  1,  4, 0x0,  4,  1,  5, 0x0),
    gsSP2Triangles( 6,  2,  3, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles( 7,  9, 10, 0x0, 11, 10,  9, 0x0),
    gsSP2Triangles(12,  3,  4, 0x0, 13,  3, 12, 0x0),
    gsSP1Triangle( 6,  3, 13, 0x0),
    gsSPVertex(luigi_tshirt_shared_dl_vertex_group3, 5, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  0, 0x0),
    gsSP1Triangle( 1,  4,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x04010348 - 0x04010370
const Gfx luigi_torso_dl[] = {
    gsSPDisplayList(luigi_pants_overalls_shared_dl),
    gsSPLight(&luigi_green_lights_group.l, 1),
    gsSPLight(&luigi_green_lights_group.a, 2),
    gsSPDisplayList(luigi_tshirt_shared_dl),
    gsSPEndDisplayList(),
};

// 0x04010370 - 0x040103F0
const Gfx luigi_torso[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_yellow_button),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_yellow_button_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_torso_dl),
    gsSPEndDisplayList(),
};

// 0x040103F0 - 0x04010410
const Gfx luigi_metal_torso_shared_dl[] = {
    gsSPDisplayList(luigi_yellow_button_dl),
    gsSPDisplayList(luigi_pants_overalls_shared_dl),
    gsSPDisplayList(luigi_tshirt_shared_dl),
    gsSPEndDisplayList(),
};

// 0x04010410
static const Vtx luigi_m_logo_dl_vertex[] = {
{{{   186,     81,     26}, 0, {   744,    732},  {0x51, 0x54, 0x30, 0xFF}}},
{{{   147,     27,     77}, 0, {  1250,   1066},  {0x04, 0x46, 0x69, 0xFF}}},
{{{   237,     56,     59}, 0, {  1032,    152},  {0x39, 0x4A, 0x55, 0xFF}}},
{{{   256,     77,      0}, 0, {   472,    -16},  {0x5F, 0x54, 0x00, 0xFF}}},
{{{   237,     56,    -58}, 0, {   -78,    158},  {0x39, 0x4A, 0xAB, 0xFF}}},
{{{   186,     81,    -25}, 0, {   232,    736},  {0x51, 0x54, 0xCF, 0xFF}}},
{{{   147,     27,    -76}, 0, {  -258,   1076},  {0x03, 0x46, 0x97, 0xFF}}},
};

// 0x04010480
static const Vtx luigi_eyes_cap_on_dl_vertex[] = {
{{{   139,     85,      0}, 0, {   480,    446},  {0x13, 0x7D, 0x00, 0xFF}}},
{{{   105,     86,      0}, 0, {   488,    854},  {0x69, 0x46, 0x00, 0xFF}}},
{{{    95,     84,     18}, 0, {   724,    958},  {0x40, 0x5A, 0x3D, 0xFF}}},
{{{    95,     84,    -18}, 0, {   256,    970},  {0x40, 0x5A, 0xC3, 0xFF}}},
{{{   167,     78,    -30}, 0, {   106,    130},  {0xC6, 0x6D, 0xE7, 0xFF}}},
{{{   138,     70,    -52}, 0, {  -146,    460},  {0x19, 0x5B, 0xAD, 0xFF}}},
{{{   101,     71,    -53}, 0, {  -160,    898},  {0x30, 0x5C, 0xB7, 0xFF}}},
{{{   167,     78,     31}, 0, {   842,    112},  {0xC6, 0x6D, 0x19, 0xFF}}},
{{{   147,     27,    -76}, 0, {  -404,    342},  {0x03, 0x46, 0x97, 0xFF}}},
{{{   101,     71,     54}, 0, {  1138,    864},  {0x30, 0x5C, 0x49, 0xFF}}},
{{{   138,     70,     53}, 0, {  1108,    428},  {0x19, 0x5B, 0x53, 0xFF}}},
{{{   147,     27,     77}, 0, {  1362,    296},  {0x04, 0x46, 0x69, 0xFF}}},
};

// 0x04010540
static const Vtx luigi_hair_sideburn_cap_on_dl_vertex[] = {
{{{   116,     -9,    -88}, 0, {   916,    184},  {0xED, 0x24, 0x88, 0xFF}}},
{{{    94,     39,    -73}, 0, {   -70,    700},  {0x11, 0x27, 0x89, 0xFF}}},
{{{   147,     27,    -76}, 0, {    90,    -58},  {0x03, 0x46, 0x97, 0xFF}}},
{{{    84,    -18,    -87}, 0, {  1150,    582},  {0x06, 0x59, 0xA6, 0xFF}}},
{{{    44,      0,    -75}, 0, {   842,   1210},  {0xC3, 0x05, 0x92, 0xFF}}},
{{{    46,     34,    -70}, 0, {   118,   1334},  {0xDA, 0x21, 0x8C, 0xFF}}},
{{{    94,     39,     74}, 0, {   -74,    726},  {0x10, 0x28, 0x77, 0xFF}}},
{{{    46,     34,     71}, 0, {   196,   1366},  {0xDA, 0x21, 0x74, 0xFF}}},
{{{    44,      0,     75}, 0, {   968,   1192},  {0xC3, 0x05, 0x6E, 0xFF}}},
{{{    84,    -18,     88}, 0, {  1238,    518},  {0x04, 0x58, 0x5A, 0xFF}}},
{{{   116,     -9,     89}, 0, {   922,    122},  {0xED, 0x24, 0x78, 0xFF}}},
{{{   147,     27,     77}, 0, {    22,    -68},  {0x04, 0x46, 0x69, 0xFF}}},
};

// 0x04010600
static const Vtx luigi_mustache_cap_on_dl_vertex_group1[] = {
{{{    76,     87,     25}, 0, {   342,    368},  {0x0E, 0x16, 0x7C, 0xFF}}},
{{{    90,     68,     65}, 0, {   898,    -18},  {0x23, 0x59, 0x53, 0xFF}}},
{{{    95,     84,     18}, 0, {   224,    146},  {0x40, 0x5A, 0x3D, 0xFF}}},
{{{    49,     71,     58}, 0, {   888,    564},  {0xD7, 0x60, 0x47, 0xFF}}},
{{{    55,     88,     20}, 0, {   354,    690},  {0xA8, 0x33, 0x4B, 0xFF}}},
{{{    30,     78,     21}, 0, {   442,    982},  {0xB1, 0x60, 0x16, 0xFF}}},
{{{    46,     86,      0}, 0, {    70,    924},  {0x95, 0x44, 0x00, 0xFF}}},
{{{    46,     34,     71}, 0, {  1296,    438},  {0xDA, 0x21, 0x74, 0xFF}}},
{{{    -3,     40,     34}, 0, {   892,   1090},  {0x95, 0x1D, 0x3C, 0xFF}}},
{{{    55,     88,    -20}, 0, {   340,    684},  {0xA8, 0x32, 0xB5, 0xFF}}},
{{{    49,     71,    -56}, 0, {   856,    608},  {0xD7, 0x60, 0xB9, 0xFF}}},
{{{    30,     78,    -20}, 0, {   394,    998},  {0xB1, 0x60, 0xEA, 0xFF}}},
{{{    -3,     40,    -33}, 0, {   806,   1162},  {0x95, 0x1D, 0xC4, 0xFF}}},
{{{    46,     34,    -70}, 0, {  1250,    518},  {0xDA, 0x21, 0x8C, 0xFF}}},
{{{    76,     87,    -24}, 0, {   362,    344},  {0x0E, 0x16, 0x84, 0xFF}}},
{{{    46,     86,      0}, 0, {    50,    900},  {0x95, 0x44, 0x00, 0xFF}}},
};

// 0x04010700
static const Vtx luigi_mustache_cap_on_dl_vertex_group2[] = {
{{{    49,     71,    -56}, 0, {   856,    608},  {0xD7, 0x60, 0xB9, 0xFF}}},
{{{    76,     87,    -24}, 0, {   362,    344},  {0x0E, 0x16, 0x84, 0xFF}}},
{{{    90,     68,    -64}, 0, {   922,     -4},  {0x23, 0x59, 0xAD, 0xFF}}},
{{{    95,     84,    -18}, 0, {   274,    100},  {0x40, 0x5A, 0xC3, 0xFF}}},
{{{    46,     34,    -70}, 0, {  1250,    518},  {0xDA, 0x21, 0x8C, 0xFF}}},
};

// 0x04010750
static const Vtx luigi_face_cap_dl_vertex_group1[] = {
{{{   157,    -76,    -60}, 0, {     0,      0},  {0x51, 0xA9, 0xD5, 0xFF}}},
{{{   118,   -117,    -37}, 0, {     0,      0},  {0x28, 0x94, 0xCD, 0xFF}}},
{{{   126,    -46,   -100}, 0, {     0,      0},  {0xDE, 0xD4, 0x8F, 0xFF}}},
{{{   178,     -5,   -112}, 0, {     0,      0},  {0x1E, 0x04, 0x85, 0xFF}}},
{{{   116,     -9,    -88}, 0, {     0,      0},  {0xED, 0x24, 0x88, 0xFF}}},
{{{    89,    -43,    -66}, 0, {     0,      0},  {0xD9, 0xB0, 0xA7, 0xFF}}},
{{{    76,   -112,    -37}, 0, {     0,      0},  {0xBC, 0x9E, 0xD8, 0xFF}}},
{{{    64,    -82,    -38}, 0, {     0,      0},  {0xDE, 0x94, 0xC7, 0xFF}}},
{{{   118,   -117,     38}, 0, {     0,      0},  {0x2D, 0x8F, 0x22, 0xFF}}},
{{{    76,   -112,     38}, 0, {     0,      0},  {0xC1, 0xA4, 0x3C, 0xFF}}},
{{{    64,    -82,     38}, 0, {     0,      0},  {0xC9, 0x9A, 0x31, 0xFF}}},
{{{   126,    -46,    101}, 0, {     0,      0},  {0xDF, 0xD3, 0x71, 0xFF}}},
{{{   157,    -76,     60}, 0, {     0,      0},  {0x4E, 0xA6, 0x2B, 0xFF}}},
{{{    89,    -43,     67}, 0, {     0,      0},  {0xD9, 0xAF, 0x59, 0xFF}}},
{{{   178,     -5,    112}, 0, {     0,      0},  {0x1F, 0x04, 0x7A, 0xFF}}},
{{{   116,     -9,     89}, 0, {     0,      0},  {0xED, 0x24, 0x78, 0xFF}}},
};

// 0x04010850
static const Vtx luigi_face_cap_dl_vertex_group2[] = {
{{{   147,     27,    -76}, 0, {     0,      0},  {0x03, 0x46, 0x97, 0xFF}}},
{{{   178,     -5,   -112}, 0, {     0,      0},  {0x1E, 0x04, 0x85, 0xFF}}},
{{{   116,     -9,    -88}, 0, {     0,      0},  {0xED, 0x24, 0x88, 0xFF}}},
{{{   167,     78,    -30}, 0, {     0,      0},  {0xC6, 0x6D, 0xE7, 0xFF}}},
{{{   165,    118,    -52}, 0, {     0,      0},  {0xDA, 0x5A, 0xB0, 0xFF}}},
{{{   186,     81,    -25}, 0, {     0,      0},  {0x51, 0x54, 0xCF, 0xFF}}},
{{{   237,     56,    -58}, 0, {     0,      0},  {0x39, 0x4A, 0xAB, 0xFF}}},
{{{   157,    -76,    -60}, 0, {     0,      0},  {0x51, 0xA9, 0xD5, 0xFF}}},
{{{   255,      0,    -34}, 0, {     0,      0},  {0x6E, 0xCF, 0xDC, 0xFF}}},
{{{   178,     -5,    112}, 0, {     0,      0},  {0x1F, 0x04, 0x7A, 0xFF}}},
{{{   147,     27,     77}, 0, {     0,      0},  {0x04, 0x46, 0x69, 0xFF}}},
{{{   116,     -9,     89}, 0, {     0,      0},  {0xED, 0x24, 0x78, 0xFF}}},
{{{   237,     56,     59}, 0, {     0,      0},  {0x39, 0x4A, 0x55, 0xFF}}},
{{{   255,      0,     35}, 0, {     0,      0},  {0x71, 0xDC, 0x2B, 0xFF}}},
{{{   157,    -76,     60}, 0, {     0,      0},  {0x4E, 0xA6, 0x2B, 0xFF}}},
};

// 0x04010940
static const Vtx luigi_face_cap_dl_vertex_group3[] = {
{{{   186,     81,     26}, 0, {     0,      0},  {0x51, 0x54, 0x30, 0xFF}}},
{{{   165,    118,     53}, 0, {     0,      0},  {0xDA, 0x5A, 0x50, 0xFF}}},
{{{   147,     27,     77}, 0, {     0,      0},  {0x04, 0x46, 0x69, 0xFF}}},
{{{   167,     78,     31}, 0, {     0,      0},  {0xC6, 0x6D, 0x19, 0xFF}}},
{{{   157,    -76,    -60}, 0, {     0,      0},  {0x51, 0xA9, 0xD5, 0xFF}}},
{{{   255,      0,    -34}, 0, {     0,      0},  {0x6E, 0xCF, 0xDC, 0xFF}}},
{{{   157,    -76,     60}, 0, {     0,      0},  {0x4E, 0xA6, 0x2B, 0xFF}}},
{{{   255,      0,     35}, 0, {     0,      0},  {0x71, 0xDC, 0x2B, 0xFF}}},
{{{   237,     56,    -58}, 0, {     0,      0},  {0x39, 0x4A, 0xAB, 0xFF}}},
{{{   256,     77,      0}, 0, {     0,      0},  {0x5F, 0x54, 0x00, 0xFF}}},
{{{   174,    139,      0}, 0, {     0,      0},  {0xED, 0x7D, 0x00, 0xFF}}},
{{{   186,     81,    -25}, 0, {     0,      0},  {0x51, 0x54, 0xCF, 0xFF}}},
{{{   167,     78,    -30}, 0, {     0,      0},  {0xC6, 0x6D, 0xE7, 0xFF}}},
{{{   165,    118,    -52}, 0, {     0,      0},  {0xDA, 0x5A, 0xB0, 0xFF}}},
{{{   237,     56,     59}, 0, {     0,      0},  {0x39, 0x4A, 0x55, 0xFF}}},
};

// 0x04010A30
static const Vtx luigi_face_part_cap_on_dl_vertex_group1[] = {
{{{    46,     86,      0}, 0, {     0,      0},  {0x95, 0x44, 0x00, 0xFF}}},
{{{    30,     78,    -20}, 0, {     0,      0},  {0xB1, 0x60, 0xEA, 0xFF}}},
{{{    30,     78,     21}, 0, {     0,      0},  {0xB1, 0x60, 0x16, 0xFF}}},
{{{   -12,     46,      0}, 0, {     0,      0},  {0x85, 0x1D, 0x00, 0xFF}}},
{{{    -3,     40,     34}, 0, {     0,      0},  {0x95, 0x1D, 0x3C, 0xFF}}},
{{{    -3,     40,    -33}, 0, {     0,      0},  {0x95, 0x1D, 0xC4, 0xFF}}},
{{{    13,    -39,    -33}, 0, {     0,      0},  {0x89, 0xF8, 0xD7, 0xFF}}},
{{{    13,    -39,     34}, 0, {     0,      0},  {0x89, 0xF8, 0x29, 0xFF}}},
{{{    44,      0,     75}, 0, {     0,      0},  {0xC3, 0x05, 0x6E, 0xFF}}},
{{{    46,     34,     71}, 0, {     0,      0},  {0xDA, 0x21, 0x74, 0xFF}}},
{{{    44,      0,    -75}, 0, {     0,      0},  {0xC3, 0x05, 0x92, 0xFF}}},
{{{    46,     34,    -70}, 0, {     0,      0},  {0xDA, 0x21, 0x8C, 0xFF}}},
{{{    62,    -19,    108}, 0, {     0,      0},  {0xCC, 0xE5, 0x70, 0xFF}}},
{{{    89,    -43,     67}, 0, {     0,      0},  {0xD9, 0xAF, 0x59, 0xFF}}},
{{{    99,    -26,    109}, 0, {     0,      0},  {0x30, 0x18, 0x72, 0xFF}}},
};

// 0x04010B20
static const Vtx luigi_face_part_cap_on_dl_vertex_group2[] = {
{{{    99,    -26,   -109}, 0, {     0,      0},  {0x32, 0x19, 0x8F, 0xFF}}},
{{{   116,     -9,    -88}, 0, {     0,      0},  {0xED, 0x24, 0x88, 0xFF}}},
{{{    89,    -43,    -66}, 0, {     0,      0},  {0xD9, 0xB0, 0xA7, 0xFF}}},
{{{    62,    -19,    108}, 0, {     0,      0},  {0xCC, 0xE5, 0x70, 0xFF}}},
{{{    57,    -35,     58}, 0, {     0,      0},  {0xE3, 0xCA, 0x6E, 0xFF}}},
{{{    89,    -43,     67}, 0, {     0,      0},  {0xD9, 0xAF, 0x59, 0xFF}}},
{{{   116,     -9,     89}, 0, {     0,      0},  {0xED, 0x24, 0x78, 0xFF}}},
{{{    84,    -18,     88}, 0, {     0,      0},  {0x04, 0x58, 0x5A, 0xFF}}},
{{{    99,    -26,    109}, 0, {     0,      0},  {0x30, 0x18, 0x72, 0xFF}}},
{{{    44,      0,     75}, 0, {     0,      0},  {0xC3, 0x05, 0x6E, 0xFF}}},
{{{    84,    -18,    -87}, 0, {     0,      0},  {0x06, 0x59, 0xA6, 0xFF}}},
{{{    62,    -19,   -107}, 0, {     0,      0},  {0xCC, 0xE5, 0x90, 0xFF}}},
{{{    44,      0,    -75}, 0, {     0,      0},  {0xC3, 0x05, 0x92, 0xFF}}},
{{{    41,    141,      0}, 0, {     0,      0},  {0x8F, 0x38, 0x09, 0xFF}}},
{{{    57,    141,    -31}, 0, {     0,      0},  {0xB8, 0x34, 0xA6, 0xFF}}},
{{{    39,    104,      0}, 0, {     0,      0},  {0x84, 0xE8, 0xF8, 0xFF}}},
};

// 0x04010C20
static const Vtx luigi_face_part_cap_on_dl_vertex_group3[] = {
{{{    57,    -35,    -57}, 0, {     0,      0},  {0xE3, 0xCA, 0x92, 0xFF}}},
{{{    62,    -19,   -107}, 0, {     0,      0},  {0xCC, 0xE5, 0x90, 0xFF}}},
{{{    89,    -43,    -66}, 0, {     0,      0},  {0xD9, 0xB0, 0xA7, 0xFF}}},
{{{    44,      0,    -75}, 0, {     0,      0},  {0xC3, 0x05, 0x92, 0xFF}}},
{{{    13,    -39,     34}, 0, {     0,      0},  {0x89, 0xF8, 0x29, 0xFF}}},
{{{    57,    -35,     58}, 0, {     0,      0},  {0xE3, 0xCA, 0x6E, 0xFF}}},
{{{    44,      0,     75}, 0, {     0,      0},  {0xC3, 0x05, 0x6E, 0xFF}}},
{{{    13,    -39,    -33}, 0, {     0,      0},  {0x89, 0xF8, 0xD7, 0xFF}}},
{{{    39,    104,      0}, 0, {     0,      0},  {0x84, 0xE8, 0xF8, 0xFF}}},
{{{    54,    104,     32}, 0, {     0,      0},  {0xB0, 0xE4, 0x5E, 0xFF}}},
{{{    41,    141,      0}, 0, {     0,      0},  {0x8F, 0x38, 0x09, 0xFF}}},
{{{    55,     88,     20}, 0, {     0,      0},  {0xA8, 0x33, 0x4B, 0xFF}}},
{{{    55,     88,    -20}, 0, {     0,      0},  {0xA8, 0x32, 0xB5, 0xFF}}},
{{{    46,     86,      0}, 0, {     0,      0},  {0x95, 0x44, 0x00, 0xFF}}},
{{{    76,     87,     25}, 0, {     0,      0},  {0x0E, 0x16, 0x7C, 0xFF}}},
};

// 0x04010D10
static const Vtx luigi_face_part_cap_on_dl_vertex_group4[] = {
{{{    90,     68,     65}, 0, {     0,      0},  {0x23, 0x59, 0x53, 0xFF}}},
{{{   101,     71,     54}, 0, {     0,      0},  {0x30, 0x5C, 0x49, 0xFF}}},
{{{    95,     84,     18}, 0, {     0,      0},  {0x40, 0x5A, 0x3D, 0xFF}}},
{{{   112,    107,      0}, 0, {     0,      0},  {0x7A, 0xE1, 0x06, 0xFF}}},
{{{    99,    106,     34}, 0, {     0,      0},  {0x45, 0xD6, 0x61, 0xFF}}},
{{{    76,     87,     25}, 0, {     0,      0},  {0x0E, 0x16, 0x7C, 0xFF}}},
{{{   105,     86,      0}, 0, {     0,      0},  {0x69, 0x46, 0x00, 0xFF}}},
{{{    95,     84,    -18}, 0, {     0,      0},  {0x40, 0x5A, 0xC3, 0xFF}}},
{{{   116,    135,      0}, 0, {     0,      0},  {0x79, 0x23, 0xF6, 0xFF}}},
{{{   103,    135,     34}, 0, {     0,      0},  {0x52, 0x27, 0x58, 0xFF}}},
{{{    99,    106,    -32}, 0, {     0,      0},  {0x50, 0xDC, 0xA6, 0xFF}}},
{{{    75,    105,     37}, 0, {     0,      0},  {0x00, 0xEC, 0x7D, 0xFF}}},
{{{    80,    136,     37}, 0, {     0,      0},  {0x03, 0x55, 0x5D, 0xFF}}},
{{{   102,    151,      0}, 0, {     0,      0},  {0x27, 0x78, 0x00, 0xFF}}},
{{{    57,    139,     32}, 0, {     0,      0},  {0xC8, 0x3D, 0x5F, 0xFF}}},
{{{    54,    104,     32}, 0, {     0,      0},  {0xB0, 0xE4, 0x5E, 0xFF}}},
};

// 0x04010E10
static const Vtx luigi_face_part_cap_on_dl_vertex_group5[] = {
{{{    54,    104,     32}, 0, {     0,      0},  {0xB0, 0xE4, 0x5E, 0xFF}}},
{{{    57,    139,     32}, 0, {     0,      0},  {0xC8, 0x3D, 0x5F, 0xFF}}},
{{{    41,    141,      0}, 0, {     0,      0},  {0x8F, 0x38, 0x09, 0xFF}}},
{{{    75,    105,     37}, 0, {     0,      0},  {0x00, 0xEC, 0x7D, 0xFF}}},
{{{    76,     87,     25}, 0, {     0,      0},  {0x0E, 0x16, 0x7C, 0xFF}}},
{{{    80,    136,     37}, 0, {     0,      0},  {0x03, 0x55, 0x5D, 0xFF}}},
{{{    66,    155,      0}, 0, {     0,      0},  {0xEA, 0x7C, 0x00, 0xFF}}},
{{{    57,    141,    -31}, 0, {     0,      0},  {0xB8, 0x34, 0xA6, 0xFF}}},
{{{    94,     39,     74}, 0, {     0,      0},  {0x10, 0x28, 0x77, 0xFF}}},
{{{   147,     27,     77}, 0, {     0,      0},  {0x04, 0x46, 0x69, 0xFF}}},
{{{   138,     70,     53}, 0, {     0,      0},  {0x19, 0x5B, 0x53, 0xFF}}},
{{{   102,    151,      0}, 0, {     0,      0},  {0x27, 0x78, 0x00, 0xFF}}},
{{{   101,     71,     54}, 0, {     0,      0},  {0x30, 0x5C, 0x49, 0xFF}}},
{{{    90,     68,     65}, 0, {     0,      0},  {0x23, 0x59, 0x53, 0xFF}}},
{{{    46,     34,     71}, 0, {     0,      0},  {0xDA, 0x21, 0x74, 0xFF}}},
};

// 0x04010F00
static const Vtx luigi_face_part_cap_on_dl_vertex_group6[] = {
{{{    13,    -39,    -33}, 0, {     0,      0},  {0x89, 0xF8, 0xD7, 0xFF}}},
{{{    30,    -65,      0}, 0, {     0,      0},  {0xA0, 0xAE, 0x00, 0xFF}}},
{{{    13,    -39,     34}, 0, {     0,      0},  {0x89, 0xF8, 0x29, 0xFF}}},
{{{   138,     70,    -52}, 0, {     0,      0},  {0x19, 0x5B, 0xAD, 0xFF}}},
{{{   147,     27,    -76}, 0, {     0,      0},  {0x03, 0x46, 0x97, 0xFF}}},
{{{    94,     39,    -73}, 0, {     0,      0},  {0x11, 0x27, 0x89, 0xFF}}},
{{{    90,     68,    -64}, 0, {     0,      0},  {0x23, 0x59, 0xAD, 0xFF}}},
{{{   101,     71,    -53}, 0, {     0,      0},  {0x30, 0x5C, 0xB7, 0xFF}}},
{{{    46,     34,    -70}, 0, {     0,      0},  {0xDA, 0x21, 0x8C, 0xFF}}},
{{{    75,    105,    -36}, 0, {     0,      0},  {0x00, 0xEC, 0x83, 0xFF}}},
{{{    80,    138,    -36}, 0, {     0,      0},  {0x03, 0x54, 0xA2, 0xFF}}},
{{{   103,    137,    -33}, 0, {     0,      0},  {0x44, 0x31, 0xA1, 0xFF}}},
{{{    95,     84,    -18}, 0, {     0,      0},  {0x40, 0x5A, 0xC3, 0xFF}}},
{{{    57,    141,    -31}, 0, {     0,      0},  {0xB8, 0x34, 0xA6, 0xFF}}},
{{{    54,    104,    -31}, 0, {     0,      0},  {0xBC, 0xDE, 0x9C, 0xFF}}},
{{{    66,    155,      0}, 0, {     0,      0},  {0xEA, 0x7C, 0x00, 0xFF}}},
};

// 0x04011000
static const Vtx luigi_face_part_cap_on_dl_vertex_group7[] = {
{{{    57,    141,    -31}, 0, {     0,      0},  {0xB8, 0x34, 0xA6, 0xFF}}},
{{{    54,    104,    -31}, 0, {     0,      0},  {0xBC, 0xDE, 0x9C, 0xFF}}},
{{{    39,    104,      0}, 0, {     0,      0},  {0x84, 0xE8, 0xF8, 0xFF}}},
{{{    76,     87,    -24}, 0, {     0,      0},  {0x0E, 0x16, 0x84, 0xFF}}},
{{{    55,     88,    -20}, 0, {     0,      0},  {0xA8, 0x32, 0xB5, 0xFF}}},
{{{    75,    105,    -36}, 0, {     0,      0},  {0x00, 0xEC, 0x83, 0xFF}}},
{{{   103,    137,    -33}, 0, {     0,      0},  {0x44, 0x31, 0xA1, 0xFF}}},
{{{    99,    106,    -32}, 0, {     0,      0},  {0x50, 0xDC, 0xA6, 0xFF}}},
{{{   116,    135,      0}, 0, {     0,      0},  {0x79, 0x23, 0xF6, 0xFF}}},
{{{    95,     84,    -18}, 0, {     0,      0},  {0x40, 0x5A, 0xC3, 0xFF}}},
{{{    80,    138,    -36}, 0, {     0,      0},  {0x03, 0x54, 0xA2, 0xFF}}},
{{{    66,    155,      0}, 0, {     0,      0},  {0xEA, 0x7C, 0x00, 0xFF}}},
{{{   102,    151,      0}, 0, {     0,      0},  {0x27, 0x78, 0x00, 0xFF}}},
};

// 0x040110D0
static const Vtx luigi_face_back_hair_cap_on_dl_vertex_group1[] = {
{{{    30,    -65,      0}, 0, {     0,      0},  {0xA0, 0xAE, 0x00, 0xFF}}},
{{{    34,    -91,    -25}, 0, {     0,      0},  {0xFB, 0x8E, 0x37, 0xFF}}},
{{{    64,    -82,    -38}, 0, {     0,      0},  {0xDE, 0x94, 0xC7, 0xFF}}},
{{{    30,    -66,     65}, 0, {     0,      0},  {0xDB, 0xFD, 0x79, 0xFF}}},
{{{    33,    -94,     50}, 0, {     0,      0},  {0xDA, 0x94, 0x35, 0xFF}}},
{{{    55,    -91,     45}, 0, {     0,      0},  {0x57, 0xB4, 0x32, 0xFF}}},
{{{    64,    -82,     38}, 0, {     0,      0},  {0xC9, 0x9A, 0x31, 0xFF}}},
{{{    57,    -35,     58}, 0, {     0,      0},  {0xE3, 0xCA, 0x6E, 0xFF}}},
{{{    34,    -91,     26}, 0, {     0,      0},  {0xFB, 0x8E, 0xC9, 0xFF}}},
{{{    89,    -43,     67}, 0, {     0,      0},  {0xD9, 0xAF, 0x59, 0xFF}}},
{{{    13,    -39,     34}, 0, {     0,      0},  {0x89, 0xF8, 0x29, 0xFF}}},
{{{    33,    -94,    -49}, 0, {     0,      0},  {0xDA, 0x94, 0xCB, 0xFF}}},
{{{    55,    -91,    -44}, 0, {     0,      0},  {0x57, 0xB4, 0xCE, 0xFF}}},
{{{    26,    -66,    -65}, 0, {     0,      0},  {0xDB, 0xFD, 0x87, 0xFF}}},
{{{    57,    -35,    -57}, 0, {     0,      0},  {0xE3, 0xCA, 0x92, 0xFF}}},
{{{    13,    -39,    -33}, 0, {     0,      0},  {0x89, 0xF8, 0xD7, 0xFF}}},
};

// 0x040111D0
static const Vtx luigi_face_back_hair_cap_on_dl_vertex_group2[] = {
{{{    26,    -66,    -65}, 0, {     0,      0},  {0xDB, 0xFD, 0x87, 0xFF}}},
{{{    33,    -94,    -49}, 0, {     0,      0},  {0xDA, 0x94, 0xCB, 0xFF}}},
{{{     5,    -67,    -42}, 0, {     0,      0},  {0x87, 0xDF, 0xF5, 0xFF}}},
{{{    13,    -39,    -33}, 0, {     0,      0},  {0x89, 0xF8, 0xD7, 0xFF}}},
{{{    57,    -35,    -57}, 0, {     0,      0},  {0xE3, 0xCA, 0x92, 0xFF}}},
{{{    89,    -43,    -66}, 0, {     0,      0},  {0xD9, 0xB0, 0xA7, 0xFF}}},
{{{    64,    -82,    -38}, 0, {     0,      0},  {0xDE, 0x94, 0xC7, 0xFF}}},
{{{    30,    -65,      0}, 0, {     0,      0},  {0xA0, 0xAE, 0x00, 0xFF}}},
{{{    34,    -91,     26}, 0, {     0,      0},  {0xFB, 0x8E, 0xC9, 0xFF}}},
{{{     5,    -67,     42}, 0, {     0,      0},  {0x87, 0xDF, 0x0B, 0xFF}}},
{{{    13,    -39,     34}, 0, {     0,      0},  {0x89, 0xF8, 0x29, 0xFF}}},
{{{    34,    -91,    -25}, 0, {     0,      0},  {0xFB, 0x8E, 0x37, 0xFF}}},
{{{    33,    -94,     50}, 0, {     0,      0},  {0xDA, 0x94, 0x35, 0xFF}}},
{{{    30,    -66,     65}, 0, {     0,      0},  {0xDB, 0xFD, 0x79, 0xFF}}},
};

// 0x040112B0 - 0x040112E8
const Gfx luigi_m_logo_dl[] = {
    gsSPVertex(luigi_m_logo_dl_vertex, 7, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 2,  3,  0, 0x0,  3,  5,  0, 0x0),
    gsSP1Triangle( 4,  6,  5, 0x0),
    gsSPEndDisplayList(),
};

// 0x040112E8 - 0x04011350
const Gfx luigi_eyes_cap_on_dl[] = {
    gsSPVertex(luigi_eyes_cap_on_dl_vertex, 12, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  0,  4, 0x0,  6,  3,  5, 0x0),
    gsSP2Triangles( 3,  1,  0, 0x0,  4,  0,  7, 0x0),
    gsSP2Triangles( 5,  4,  8, 0x0,  2,  9, 10, 0x0),
    gsSP2Triangles(10,  7,  2, 0x0, 11,  7, 10, 0x0),
    gsSP1Triangle( 7,  0,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x04011350 - 0x040113A0
const Gfx luigi_hair_sideburn_cap_on_dl[] = {
    gsSPVertex(luigi_hair_sideburn_cap_on_dl_vertex, 12, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  4, 0x0),
    gsSP2Triangles( 4,  5,  1, 0x0,  3,  1,  0, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  8,  9,  6, 0x0),
    gsSP2Triangles( 9, 10,  6, 0x0, 11,  6, 10, 0x0),
    gsSPEndDisplayList(),
};

// 0x040113A0 - 0x04011438
const Gfx luigi_mustache_cap_on_dl[] = {
    gsSPVertex(luigi_mustache_cap_on_dl_vertex_group1, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  0,  3, 0x0),
    gsSP2Triangles( 0,  4,  3, 0x0,  5,  3,  4, 0x0),
    gsSP2Triangles( 5,  4,  6, 0x0,  7,  3,  8, 0x0),
    gsSP2Triangles( 8,  3,  5, 0x0,  3,  7,  1, 0x0),
    gsSP2Triangles( 9, 10, 11, 0x0, 12, 10, 13, 0x0),
    gsSP2Triangles(11, 10, 12, 0x0, 10,  9, 14, 0x0),
    gsSP1Triangle(15,  9, 11, 0x0),
    gsSPVertex(luigi_mustache_cap_on_dl_vertex_group2, 5, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP1Triangle( 2,  4,  0, 0x0),
    gsSPEndDisplayList(),
};

// 0x04011438 - 0x040116F8
const Gfx luigi_face_part_cap_on_dl[] = {
    gsSPVertex(luigi_face_part_cap_on_dl_vertex_group1, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 3,  4,  2, 0x0,  1,  5,  3, 0x0),
    gsSP2Triangles( 6,  7,  3, 0x0,  7,  4,  3, 0x0),
    gsSP2Triangles( 6,  3,  5, 0x0,  4,  7,  8, 0x0),
    gsSP2Triangles( 9,  4,  8, 0x0, 10,  6,  5, 0x0),
    gsSP2Triangles(10,  5, 11, 0x0, 12, 13, 14, 0x0),
    gsSPVertex(luigi_face_part_cap_on_dl_vertex_group2, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  5,  6,  8, 0x0),
    gsSP2Triangles( 3,  8,  7, 0x0,  9,  3,  7, 0x0),
    gsSP2Triangles( 3,  9,  4, 0x0, 10, 11, 12, 0x0),
    gsSP2Triangles( 0, 10,  1, 0x0, 10,  0, 11, 0x0),
    gsSP2Triangles(11,  0,  2, 0x0, 13, 14, 15, 0x0),
    gsSPVertex(luigi_face_part_cap_on_dl_vertex_group3, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  0, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  3,  0,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0, 11,  9,  8, 0x0),
    gsSP2Triangles(12, 13,  8, 0x0,  8, 13, 11, 0x0),
    gsSP1Triangle( 9, 11, 14, 0x0),
    gsSPVertex(luigi_face_part_cap_on_dl_vertex_group4, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  2, 0x0),
    gsSP2Triangles( 5,  2,  4, 0x0,  2,  6,  3, 0x0),
    gsSP2Triangles( 3,  6,  7, 0x0,  8,  9,  3, 0x0),
    gsSP2Triangles( 9,  4,  3, 0x0,  7, 10,  3, 0x0),
    gsSP2Triangles( 3, 10,  8, 0x0, 11,  4,  9, 0x0),
    gsSP2Triangles(12, 11,  9, 0x0, 13,  9,  8, 0x0),
    gsSP2Triangles( 9, 13, 12, 0x0,  4, 11,  5, 0x0),
    gsSP1Triangle(14, 15, 11, 0x0),
    gsSPVertex(luigi_face_part_cap_on_dl_vertex_group5, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  4, 0x0),
    gsSP2Triangles( 1,  5,  6, 0x0,  1,  3,  5, 0x0),
    gsSP2Triangles( 2,  1,  6, 0x0,  2,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  6,  5, 11, 0x0),
    gsSP2Triangles(12, 13,  8, 0x0, 10, 12,  8, 0x0),
    gsSP1Triangle(14,  8, 13, 0x0),
    gsSPVertex(luigi_face_part_cap_on_dl_vertex_group6, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 5,  6,  7, 0x0,  6,  5,  8, 0x0),
    gsSP2Triangles( 5,  7,  3, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles( 6, 12,  7, 0x0, 13, 10,  9, 0x0),
    gsSP2Triangles(14, 13,  9, 0x0, 15, 10, 13, 0x0),
    gsSPVertex(luigi_face_part_cap_on_dl_vertex_group7, 13, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  1, 0x0),
    gsSP2Triangles( 1,  5,  3, 0x0,  2,  1,  4, 0x0),
    gsSP2Triangles( 5,  6,  7, 0x0,  7,  6,  8, 0x0),
    gsSP2Triangles( 7,  9,  3, 0x0,  5,  7,  3, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 12,  6, 10, 0x0),
    gsSP1Triangle(12,  8,  6, 0x0),
    gsSPEndDisplayList(),
};

// 0x040116F8 - 0x04011870
const Gfx luigi_face_cap_dl[] = {
    gsSPVertex(luigi_face_cap_dl_vertex_group1, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  2,  4, 0x0),
    gsSP2Triangles( 4,  2,  5, 0x0,  3,  0,  2, 0x0),
    gsSP2Triangles( 2,  1,  6, 0x0,  6,  7,  2, 0x0),
    gsSP2Triangles( 5,  2,  7, 0x0,  6,  1,  8, 0x0),
    gsSP2Triangles( 8,  1,  0, 0x0,  6,  8,  9, 0x0),
    gsSP2Triangles(10,  7,  6, 0x0,  9, 10,  6, 0x0),
    gsSP2Triangles(11, 10,  9, 0x0,  9,  8, 11, 0x0),
    gsSP2Triangles(11,  8, 12, 0x0,  0, 12,  8, 0x0),
    gsSP2Triangles(13, 10, 11, 0x0, 11, 12, 14, 0x0),
    gsSP2Triangles(15, 11, 14, 0x0, 13, 11, 15, 0x0),
    gsSPVertex(luigi_face_cap_dl_vertex_group2, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  0, 0x0),
    gsSP2Triangles( 4,  5,  0, 0x0,  0,  6,  1, 0x0),
    gsSP2Triangles( 7,  1,  8, 0x0,  8,  1,  6, 0x0),
    gsSP2Triangles( 9, 10, 11, 0x0,  9, 12, 10, 0x0),
    gsSP2Triangles(12,  9, 13, 0x0, 13,  9, 14, 0x0),
    gsSPVertex(luigi_face_cap_dl_vertex_group3, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  5,  7,  6, 0x0),
    gsSP2Triangles( 8,  9,  5, 0x0,  0, 10,  1, 0x0),
    gsSP2Triangles( 1, 10,  3, 0x0, 11, 10,  0, 0x0),
    gsSP2Triangles(12,  3, 10, 0x0, 12, 10, 13, 0x0),
    gsSP2Triangles(13, 10, 11, 0x0,  5,  9,  7, 0x0),
    gsSP1Triangle( 7,  9, 14, 0x0),
    gsSPEndDisplayList(),
};

// 0x04011870 - 0x04011960
const Gfx luigi_face_back_hair_cap_on_dl[] = {
    gsSPVertex(luigi_face_back_hair_cap_on_dl_vertex_group1, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 5,  6,  7, 0x0,  5,  8,  6, 0x0),
    gsSP2Triangles( 5,  4,  8, 0x0,  7,  3,  5, 0x0),
    gsSP2Triangles( 0,  2,  6, 0x0,  6,  9,  7, 0x0),
    gsSP2Triangles( 0,  6,  8, 0x0,  3,  7, 10, 0x0),
    gsSP2Triangles( 1, 11, 12, 0x0, 12, 13, 14, 0x0),
    gsSP2Triangles(11, 13, 12, 0x0,  1, 12,  2, 0x0),
    gsSP2Triangles(14,  2, 12, 0x0, 15, 14, 13, 0x0),
    gsSPVertex(luigi_face_back_hair_cap_on_dl_vertex_group2, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  7,  3,  2, 0x0),
    gsSP2Triangles( 7,  8,  9, 0x0,  9, 10,  7, 0x0),
    gsSP2Triangles( 2,  1, 11, 0x0,  2, 11,  7, 0x0),
    gsSP2Triangles( 9, 12, 13, 0x0, 10,  9, 13, 0x0),
    gsSP1Triangle( 8, 12,  9, 0x0),
    gsSPEndDisplayList(),
};

// 0x04011960 - 0x040119A0
const Gfx luigi_face_cap_on_dl[] = {
    gsSPDisplayList(luigi_face_part_cap_on_dl),
    gsSPLight(&luigi_green_lights_group.l, 1),
    gsSPLight(&luigi_green_lights_group.a, 2),
    gsSPDisplayList(luigi_face_cap_dl),
    gsSPLight(&luigi_brown2_lights_group.l, 1),
    gsSPLight(&luigi_brown2_lights_group.a, 2),
    gsSPDisplayList(luigi_face_back_hair_cap_on_dl),
    gsSPEndDisplayList(),
};

// 0x040119A0 - 0x04011A90
const Gfx luigi_cap_on_eyes_front[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, luigi_texture_l_logo),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_m_logo_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_front),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_on_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_on_dl),
    gsSPEndDisplayList(),
};

// 0x04011A90 - 0x04011B80
const Gfx luigi_cap_on_eyes_half_closed[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, luigi_texture_l_logo),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_m_logo_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_half_closed),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_on_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_on_dl),
    gsSPEndDisplayList(),
};

// 0x04011B80 - 0x04011C70
const Gfx luigi_cap_on_eyes_closed[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, luigi_texture_l_logo),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_m_logo_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_closed),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_on_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_on_dl),
    gsSPEndDisplayList(),
};

// 0x04011C70 - 0x04011D60
const Gfx luigi_cap_on_eyes_right[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, luigi_texture_l_logo),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_m_logo_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_right),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_on_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_on_dl),
    gsSPEndDisplayList(),
};

// 0x04011D60 - 0x04011E50
const Gfx luigi_cap_on_eyes_left[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, luigi_texture_l_logo),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_m_logo_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_left),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_on_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_on_dl),
    gsSPEndDisplayList(),
};

// 0x04011E50 - 0x04011F40
const Gfx luigi_cap_on_eyes_up[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, luigi_texture_l_logo),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_m_logo_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_up),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_on_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_on_dl),
    gsSPEndDisplayList(),
};

// 0x04011F40 - 0x04012030
const Gfx luigi_cap_on_eyes_down[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, luigi_texture_l_logo),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_m_logo_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_down),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_on_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_on_dl),
    gsSPEndDisplayList(),
};

// 0x04012030 - 0x04012120
const Gfx luigi_cap_on_eyes_dead[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, luigi_texture_l_logo),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_m_logo_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_dead),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_on_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_on_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_on_dl),
    gsSPEndDisplayList(),
};

// 0x04012120 - 0x04012160
const Gfx luigi_metal_cap_on_shared_dl[] = {
    gsSPDisplayList(luigi_m_logo_dl),
    gsSPDisplayList(luigi_eyes_cap_on_dl),
    gsSPDisplayList(luigi_hair_sideburn_cap_on_dl),
    gsSPDisplayList(luigi_mustache_cap_on_dl),
    gsSPDisplayList(luigi_face_part_cap_on_dl),
    gsSPDisplayList(luigi_face_cap_dl),
    gsSPDisplayList(luigi_face_back_hair_cap_on_dl),
    gsSPEndDisplayList(),
};

// 0x04012190
static const Vtx luigi_eyes_cap_off_dl_vertex[] = {
{{{   104,     87,    -69}, 0, {  -160,    898},  {0x30, 0x5C, 0xB7, 0xFF}}},
{{{    97,    103,    -24}, 0, {   256,    970},  {0x40, 0x5A, 0xC3, 0xFF}}},
{{{   144,     83,    -66}, 0, {  -146,    460},  {0x19, 0x5B, 0xAD, 0xFF}}},
{{{   153,     33,     95}, 0, {  1362,    296},  {0x05, 0x38, 0x71, 0xFF}}},
{{{   175,     91,     39}, 0, {   842,    112},  {0x01, 0x75, 0x2F, 0xFF}}},
{{{   144,     83,     67}, 0, {  1108,    428},  {0x19, 0x5B, 0x53, 0xFF}}},
{{{   145,    101,      0}, 0, {   480,    446},  {0x13, 0x7D, 0x00, 0xFF}}},
{{{    97,    103,     25}, 0, {   724,    958},  {0x40, 0x5A, 0x3D, 0xFF}}},
{{{   175,     91,    -38}, 0, {   106,    130},  {0xF5, 0x73, 0xCC, 0xFF}}},
{{{   104,     87,     70}, 0, {  1138,    864},  {0x30, 0x5C, 0x49, 0xFF}}},
{{{   153,     33,    -94}, 0, {  -404,    342},  {0xFE, 0x36, 0x8E, 0xFF}}},
{{{   108,    105,      0}, 0, {   488,    854},  {0x69, 0x46, 0x00, 0xFF}}},
};

// 0x04012250
static const Vtx luigi_hair_sideburn_cap_off_dl_vertex[] = {
{{{    44,      0,     75}, 0, {   968,   1192},  {0xC3, 0x05, 0x6E, 0xFF}}},
{{{    84,    -18,     88}, 0, {  1238,    518},  {0x04, 0x58, 0x5A, 0xFF}}},
{{{    94,     39,     74}, 0, {   -74,    726},  {0x10, 0x28, 0x77, 0xFF}}},
{{{    46,     34,     71}, 0, {   196,   1366},  {0xDA, 0x21, 0x74, 0xFF}}},
{{{   147,     27,     77}, 0, {    22,    -68},  {0x05, 0x38, 0x71, 0xFF}}},
{{{   116,     -9,     89}, 0, {   922,    122},  {0xFF, 0x13, 0x7D, 0xFF}}},
{{{    44,      0,    -75}, 0, {   842,   1210},  {0xC3, 0x05, 0x92, 0xFF}}},
{{{    46,     34,    -70}, 0, {   118,   1334},  {0xDA, 0x21, 0x8C, 0xFF}}},
{{{    94,     39,    -73}, 0, {   -70,    700},  {0x11, 0x27, 0x89, 0xFF}}},
{{{    84,    -18,    -87}, 0, {  1150,    582},  {0x06, 0x59, 0xA6, 0xFF}}},
{{{   116,     -9,    -88}, 0, {   916,    184},  {0xFF, 0x13, 0x83, 0xFF}}},
{{{   147,     27,    -76}, 0, {    90,    -58},  {0xFE, 0x36, 0x8E, 0xFF}}},
};

// 0x04012310
static const Vtx luigi_mustache_cap_off_dl_vertex_group1[] = {
{{{    90,     68,    -64}, 0, {   992,    -10},  {0x23, 0x59, 0xAD, 0xFF}}},
{{{    76,     87,    -24}, 0, {   360,    296},  {0x0E, 0x16, 0x84, 0xFF}}},
{{{    95,     84,    -18}, 0, {   298,     20},  {0x40, 0x5A, 0xC3, 0xFF}}},
{{{    49,     71,    -56}, 0, {   844,    640},  {0xD7, 0x60, 0xB9, 0xFF}}},
{{{    46,     34,    -70}, 0, {  1272,    592},  {0xDA, 0x21, 0x8C, 0xFF}}},
{{{    55,     88,    -20}, 0, {   294,    656},  {0xA8, 0x32, 0xB5, 0xFF}}},
{{{    90,     68,     65}, 0, {   948,     -8},  {0x23, 0x59, 0x53, 0xFF}}},
{{{    76,     87,     25}, 0, {   330,    316},  {0x0E, 0x16, 0x7C, 0xFF}}},
{{{    49,     71,     58}, 0, {   848,    630},  {0xD7, 0x60, 0x47, 0xFF}}},
{{{    95,     84,     18}, 0, {   248,     50},  {0x40, 0x5A, 0x3D, 0xFF}}},
{{{    55,     88,     20}, 0, {   292,    670},  {0xA8, 0x33, 0x4B, 0xFF}}},
{{{    46,     34,     71}, 0, {  1276,    566},  {0xDA, 0x21, 0x74, 0xFF}}},
{{{    -3,     40,     34}, 0, {   768,   1210},  {0x95, 0x1D, 0x3C, 0xFF}}},
{{{    30,     78,     21}, 0, {   336,   1006},  {0xB1, 0x60, 0x16, 0xFF}}},
{{{    -3,     40,    -33}, 0, {   720,   1228},  {0x95, 0x1D, 0xC4, 0xFF}}},
{{{    46,     86,      0}, 0, {   -30,    876},  {0x95, 0x44, 0x00, 0xFF}}},
};

// 0x04012410
static const Vtx luigi_mustache_cap_off_dl_vertex_group2[] = {
{{{    46,     86,      0}, 0, {   -38,    852},  {0x95, 0x44, 0x00, 0xFF}}},
{{{    55,     88,    -20}, 0, {   294,    656},  {0xA8, 0x32, 0xB5, 0xFF}}},
{{{    30,     78,    -20}, 0, {   310,   1002},  {0xB1, 0x60, 0xEA, 0xFF}}},
{{{    49,     71,    -56}, 0, {   844,    640},  {0xD7, 0x60, 0xB9, 0xFF}}},
{{{    -3,     40,    -33}, 0, {   720,   1228},  {0x95, 0x1D, 0xC4, 0xFF}}},
};

// 0x04012460
static const Vtx luigi_face_part_cap_off_dl_vertex_group1[] = {
{{{    95,     84,     18}, 0, {     0,      0},  {0x40, 0x5A, 0x3D, 0xFF}}},
{{{   105,     86,      0}, 0, {     0,      0},  {0x69, 0x46, 0x00, 0xFF}}},
{{{   112,    107,      0}, 0, {     0,      0},  {0x7A, 0xE1, 0x06, 0xFF}}},
{{{    90,     68,    -64}, 0, {     0,      0},  {0x23, 0x59, 0xAD, 0xFF}}},
{{{    95,     84,    -18}, 0, {     0,      0},  {0x40, 0x5A, 0xC3, 0xFF}}},
{{{   101,     71,    -53}, 0, {     0,      0},  {0x30, 0x5C, 0xB7, 0xFF}}},
{{{    94,     39,    -73}, 0, {     0,      0},  {0x11, 0x27, 0x89, 0xFF}}},
{{{    46,     34,    -70}, 0, {     0,      0},  {0xDA, 0x21, 0x8C, 0xFF}}},
{{{    99,    106,    -32}, 0, {     0,      0},  {0x50, 0xDC, 0xA6, 0xFF}}},
{{{    76,     87,    -24}, 0, {     0,      0},  {0x0E, 0x16, 0x84, 0xFF}}},
{{{   138,     70,    -52}, 0, {     0,      0},  {0x19, 0x5B, 0xAD, 0xFF}}},
{{{    46,     34,     71}, 0, {     0,      0},  {0xDA, 0x21, 0x74, 0xFF}}},
{{{    94,     39,     74}, 0, {     0,      0},  {0x10, 0x28, 0x77, 0xFF}}},
{{{    90,     68,     65}, 0, {     0,      0},  {0x23, 0x59, 0x53, 0xFF}}},
{{{   101,     71,     54}, 0, {     0,      0},  {0x30, 0x5C, 0x49, 0xFF}}},
};

// 0x04012550
static const Vtx luigi_face_part_cap_off_dl_vertex_group2[] = {
{{{   -12,     46,      0}, 0, {     0,      0},  {0x85, 0x1D, 0x00, 0xFF}}},
{{{    -3,     40,     34}, 0, {     0,      0},  {0x95, 0x1D, 0x3C, 0xFF}}},
{{{    30,     78,     21}, 0, {     0,      0},  {0xB1, 0x60, 0x16, 0xFF}}},
{{{   138,     70,     53}, 0, {     0,      0},  {0x19, 0x5B, 0x53, 0xFF}}},
{{{   101,     71,     54}, 0, {     0,      0},  {0x30, 0x5C, 0x49, 0xFF}}},
{{{    94,     39,     74}, 0, {     0,      0},  {0x10, 0x28, 0x77, 0xFF}}},
{{{   112,    107,      0}, 0, {     0,      0},  {0x7A, 0xE1, 0x06, 0xFF}}},
{{{    99,    106,     34}, 0, {     0,      0},  {0x45, 0xD6, 0x61, 0xFF}}},
{{{    95,     84,     18}, 0, {     0,      0},  {0x40, 0x5A, 0x3D, 0xFF}}},
{{{    76,     87,     25}, 0, {     0,      0},  {0x0E, 0x16, 0x7C, 0xFF}}},
{{{    46,     34,     71}, 0, {     0,      0},  {0xDA, 0x21, 0x74, 0xFF}}},
{{{    44,      0,     75}, 0, {     0,      0},  {0xC3, 0x05, 0x6E, 0xFF}}},
{{{    13,    -39,     34}, 0, {     0,      0},  {0x89, 0xF8, 0x29, 0xFF}}},
{{{    62,    -19,    108}, 0, {     0,      0},  {0xCC, 0xE5, 0x70, 0xFF}}},
{{{    57,    -35,     58}, 0, {     0,      0},  {0xE3, 0xCA, 0x6E, 0xFF}}},
{{{    84,    -18,     88}, 0, {     0,      0},  {0x04, 0x58, 0x5A, 0xFF}}},
};

// 0x04012650
static const Vtx luigi_face_part_cap_off_dl_vertex_group3[] = {
{{{    94,     39,     74}, 0, {     0,      0},  {0x10, 0x28, 0x77, 0xFF}}},
{{{   147,     27,     77}, 0, {     0,      0},  {0x05, 0x38, 0x71, 0xFF}}},
{{{   138,     70,     53}, 0, {     0,      0},  {0x19, 0x5B, 0x53, 0xFF}}},
{{{    62,    -19,    108}, 0, {     0,      0},  {0xCC, 0xE5, 0x70, 0xFF}}},
{{{    89,    -43,     67}, 0, {     0,      0},  {0xE9, 0xA9, 0x59, 0xFF}}},
{{{    99,    -26,    109}, 0, {     0,      0},  {0x30, 0x18, 0x72, 0xFF}}},
{{{    57,    -35,     58}, 0, {     0,      0},  {0xE3, 0xCA, 0x6E, 0xFF}}},
{{{    84,    -18,     88}, 0, {     0,      0},  {0x04, 0x58, 0x5A, 0xFF}}},
{{{   116,     -9,     89}, 0, {     0,      0},  {0xFF, 0x13, 0x7D, 0xFF}}},
{{{    55,     88,    -20}, 0, {     0,      0},  {0xA8, 0x32, 0xB5, 0xFF}}},
{{{    46,     86,      0}, 0, {     0,      0},  {0x95, 0x44, 0x00, 0xFF}}},
{{{    39,    104,      0}, 0, {     0,      0},  {0x84, 0xE8, 0xF8, 0xFF}}},
{{{    84,    -18,    -87}, 0, {     0,      0},  {0x06, 0x59, 0xA6, 0xFF}}},
{{{    62,    -19,   -107}, 0, {     0,      0},  {0xCC, 0xE5, 0x90, 0xFF}}},
{{{    44,      0,    -75}, 0, {     0,      0},  {0xC3, 0x05, 0x92, 0xFF}}},
};

// 0x04012740
static const Vtx luigi_face_part_cap_off_dl_vertex_group4[] = {
{{{    30,     78,     21}, 0, {     0,      0},  {0xB1, 0x60, 0x16, 0xFF}}},
{{{    30,     78,    -20}, 0, {     0,      0},  {0xB1, 0x60, 0xEA, 0xFF}}},
{{{   -12,     46,      0}, 0, {     0,      0},  {0x85, 0x1D, 0x00, 0xFF}}},
{{{    -3,     40,    -33}, 0, {     0,      0},  {0x95, 0x1D, 0xC4, 0xFF}}},
{{{    46,     86,      0}, 0, {     0,      0},  {0x95, 0x44, 0x00, 0xFF}}},
{{{   138,     70,    -52}, 0, {     0,      0},  {0x19, 0x5B, 0xAD, 0xFF}}},
{{{   147,     27,    -76}, 0, {     0,      0},  {0xFE, 0x36, 0x8E, 0xFF}}},
{{{    94,     39,    -73}, 0, {     0,      0},  {0x11, 0x27, 0x89, 0xFF}}},
{{{    44,      0,    -75}, 0, {     0,      0},  {0xC3, 0x05, 0x92, 0xFF}}},
{{{    46,     34,    -70}, 0, {     0,      0},  {0xDA, 0x21, 0x8C, 0xFF}}},
{{{    62,    -19,   -107}, 0, {     0,      0},  {0xCC, 0xE5, 0x90, 0xFF}}},
{{{    99,    -26,   -109}, 0, {     0,      0},  {0x32, 0x19, 0x8F, 0xFF}}},
{{{    89,    -43,    -66}, 0, {     0,      0},  {0xE8, 0xAA, 0xA7, 0xFF}}},
{{{    84,    -18,    -87}, 0, {     0,      0},  {0x06, 0x59, 0xA6, 0xFF}}},
{{{   116,     -9,    -88}, 0, {     0,      0},  {0xFF, 0x13, 0x83, 0xFF}}},
};

// 0x04012830
static const Vtx luigi_face_part_cap_off_dl_vertex_group5[] = {
{{{    41,    141,      0}, 0, {     0,      0},  {0x8F, 0x38, 0x09, 0xFF}}},
{{{    66,    155,      0}, 0, {     0,      0},  {0xEA, 0x7C, 0x00, 0xFF}}},
{{{    57,    141,    -31}, 0, {     0,      0},  {0xB8, 0x34, 0xA6, 0xFF}}},
{{{    99,    -26,   -109}, 0, {     0,      0},  {0x32, 0x19, 0x8F, 0xFF}}},
{{{   116,     -9,    -88}, 0, {     0,      0},  {0xFF, 0x13, 0x83, 0xFF}}},
{{{    89,    -43,    -66}, 0, {     0,      0},  {0xE8, 0xAA, 0xA7, 0xFF}}},
{{{    57,    -35,    -57}, 0, {     0,      0},  {0xE3, 0xCA, 0x92, 0xFF}}},
{{{    62,    -19,   -107}, 0, {     0,      0},  {0xCC, 0xE5, 0x90, 0xFF}}},
{{{    44,      0,    -75}, 0, {     0,      0},  {0xC3, 0x05, 0x92, 0xFF}}},
{{{    13,    -39,    -33}, 0, {     0,      0},  {0x89, 0xF8, 0xD7, 0xFF}}},
{{{    -3,     40,    -33}, 0, {     0,      0},  {0x95, 0x1D, 0xC4, 0xFF}}},
{{{   -12,     46,      0}, 0, {     0,      0},  {0x85, 0x1D, 0x00, 0xFF}}},
{{{    13,    -39,     34}, 0, {     0,      0},  {0x89, 0xF8, 0x29, 0xFF}}},
{{{    57,    139,     32}, 0, {     0,      0},  {0xC8, 0x3D, 0x5F, 0xFF}}},
{{{    80,    136,     37}, 0, {     0,      0},  {0x03, 0x55, 0x5D, 0xFF}}},
{{{   102,    151,      0}, 0, {     0,      0},  {0x27, 0x78, 0x00, 0xFF}}},
};

// 0x04012930
static const Vtx luigi_face_part_cap_off_dl_vertex_group6[] = {
{{{   103,    135,     34}, 0, {     0,      0},  {0x52, 0x27, 0x58, 0xFF}}},
{{{   102,    151,      0}, 0, {     0,      0},  {0x27, 0x78, 0x00, 0xFF}}},
{{{    80,    136,     37}, 0, {     0,      0},  {0x03, 0x55, 0x5D, 0xFF}}},
{{{    57,    139,     32}, 0, {     0,      0},  {0xC8, 0x3D, 0x5F, 0xFF}}},
{{{    75,    105,     37}, 0, {     0,      0},  {0x00, 0xEC, 0x7D, 0xFF}}},
{{{   116,    135,      0}, 0, {     0,      0},  {0x79, 0x23, 0xF6, 0xFF}}},
{{{   103,    137,    -33}, 0, {     0,      0},  {0x44, 0x31, 0xA1, 0xFF}}},
{{{    80,    138,    -36}, 0, {     0,      0},  {0x03, 0x54, 0xA2, 0xFF}}},
{{{    66,    155,      0}, 0, {     0,      0},  {0xEA, 0x7C, 0x00, 0xFF}}},
{{{    54,    104,     32}, 0, {     0,      0},  {0xB0, 0xE4, 0x5E, 0xFF}}},
{{{    41,    141,      0}, 0, {     0,      0},  {0x8F, 0x38, 0x09, 0xFF}}},
{{{    99,    106,     34}, 0, {     0,      0},  {0x45, 0xD6, 0x61, 0xFF}}},
{{{    76,     87,     25}, 0, {     0,      0},  {0x0E, 0x16, 0x7C, 0xFF}}},
{{{    57,    141,    -31}, 0, {     0,      0},  {0xB8, 0x34, 0xA6, 0xFF}}},
{{{    39,    104,      0}, 0, {     0,      0},  {0x84, 0xE8, 0xF8, 0xFF}}},
{{{   112,    107,      0}, 0, {     0,      0},  {0x7A, 0xE1, 0x06, 0xFF}}},
};

// 0x04012A30
static const Vtx luigi_face_part_cap_off_dl_vertex_group7[] = {
{{{    55,     88,     20}, 0, {     0,      0},  {0xA8, 0x33, 0x4B, 0xFF}}},
{{{    54,    104,     32}, 0, {     0,      0},  {0xB0, 0xE4, 0x5E, 0xFF}}},
{{{    39,    104,      0}, 0, {     0,      0},  {0x84, 0xE8, 0xF8, 0xFF}}},
{{{    76,     87,     25}, 0, {     0,      0},  {0x0E, 0x16, 0x7C, 0xFF}}},
{{{    57,    141,    -31}, 0, {     0,      0},  {0xB8, 0x34, 0xA6, 0xFF}}},
{{{    80,    138,    -36}, 0, {     0,      0},  {0x03, 0x54, 0xA2, 0xFF}}},
{{{    75,    105,    -36}, 0, {     0,      0},  {0x00, 0xEC, 0x83, 0xFF}}},
{{{   103,    137,    -33}, 0, {     0,      0},  {0x44, 0x31, 0xA1, 0xFF}}},
{{{    66,    155,      0}, 0, {     0,      0},  {0xEA, 0x7C, 0x00, 0xFF}}},
{{{    13,    -39,    -33}, 0, {     0,      0},  {0x89, 0xF8, 0xD7, 0xFF}}},
{{{    30,    -65,      0}, 0, {     0,      0},  {0xA0, 0xAE, 0x00, 0xFF}}},
{{{    13,    -39,     34}, 0, {     0,      0},  {0x89, 0xF8, 0x29, 0xFF}}},
{{{    46,     86,      0}, 0, {     0,      0},  {0x95, 0x44, 0x00, 0xFF}}},
{{{    54,    104,    -31}, 0, {     0,      0},  {0xBC, 0xDE, 0x9C, 0xFF}}},
{{{    99,    106,    -32}, 0, {     0,      0},  {0x50, 0xDC, 0xA6, 0xFF}}},
{{{    76,     87,    -24}, 0, {     0,      0},  {0x0E, 0x16, 0x84, 0xFF}}},
};

// 0x04012B30
static const Vtx luigi_face_part_cap_off_dl_vertex_group8[] = {
{{{    99,    106,    -32}, 0, {     0,      0},  {0x50, 0xDC, 0xA6, 0xFF}}},
{{{   103,    137,    -33}, 0, {     0,      0},  {0x44, 0x31, 0xA1, 0xFF}}},
{{{   116,    135,      0}, 0, {     0,      0},  {0x79, 0x23, 0xF6, 0xFF}}},
{{{   112,    107,      0}, 0, {     0,      0},  {0x7A, 0xE1, 0x06, 0xFF}}},
{{{    39,    104,      0}, 0, {     0,      0},  {0x84, 0xE8, 0xF8, 0xFF}}},
{{{    54,    104,    -31}, 0, {     0,      0},  {0xBC, 0xDE, 0x9C, 0xFF}}},
{{{    55,     88,    -20}, 0, {     0,      0},  {0xA8, 0x32, 0xB5, 0xFF}}},
{{{    76,     87,    -24}, 0, {     0,      0},  {0x0E, 0x16, 0x84, 0xFF}}},
{{{    57,    141,    -31}, 0, {     0,      0},  {0xB8, 0x34, 0xA6, 0xFF}}},
};

// 0x04012BC0
static const Vtx luigi_face_hair_cap_off_dl_vertex_group1[] = {
{{{   141,     26,    -77}, 0, {     0,      0},  {0xFE, 0x36, 0x8E, 0xFF}}},
{{{   185,     59,    -82}, 0, {     0,      0},  {0x07, 0x48, 0x99, 0xFF}}},
{{{   168,     -7,    -97}, 0, {     0,      0},  {0x2F, 0xFE, 0x8B, 0xFF}}},
{{{   141,     26,     78}, 0, {     0,      0},  {0x05, 0x38, 0x71, 0xFF}}},
{{{   185,     63,     71}, 0, {     0,      0},  {0x10, 0x52, 0x5F, 0xFF}}},
{{{   144,     65,     53}, 0, {     0,      0},  {0xE4, 0x5C, 0x51, 0xFF}}},
{{{   115,     -9,     89}, 0, {     0,      0},  {0xFF, 0x13, 0x7D, 0xFF}}},
{{{   167,     -7,     97}, 0, {     0,      0},  {0x2D, 0x01, 0x76, 0xFF}}},
{{{   167,     78,     31}, 0, {     0,      0},  {0x01, 0x75, 0x2F, 0xFF}}},
{{{   193,     73,     51}, 0, {     0,      0},  {0x38, 0x60, 0x3C, 0xFF}}},
{{{   209,     29,     64}, 0, {     0,      0},  {0x6D, 0x12, 0x3D, 0xFF}}},
{{{   167,     77,    -29}, 0, {     0,      0},  {0xF5, 0x73, 0xCC, 0xFF}}},
{{{   144,     65,    -52}, 0, {     0,      0},  {0xD6, 0x5B, 0xB3, 0xFF}}},
{{{   204,     29,    -62}, 0, {     0,      0},  {0x71, 0x03, 0xC8, 0xFF}}},
{{{   195,     77,    -60}, 0, {     0,      0},  {0x31, 0x46, 0xA3, 0xFF}}},
{{{   209,    -12,    -49}, 0, {     0,      0},  {0x72, 0xF1, 0xCC, 0xFF}}},
};

// 0x04012CC0
static const Vtx luigi_face_hair_cap_off_dl_vertex_group2[] = {
{{{   115,     -9,    -88}, 0, {     0,      0},  {0xFF, 0x13, 0x83, 0xFF}}},
{{{   141,     26,    -77}, 0, {     0,      0},  {0xFE, 0x36, 0x8E, 0xFF}}},
{{{   168,     -7,    -97}, 0, {     0,      0},  {0x2F, 0xFE, 0x8B, 0xFF}}},
{{{   209,    -12,     50}, 0, {     0,      0},  {0x72, 0xEC, 0x32, 0xFF}}},
{{{   222,    -29,      0}, 0, {     0,      0},  {0x7A, 0xE0, 0x00, 0xFF}}},
{{{   218,     55,      0}, 0, {     0,      0},  {0x7E, 0xF9, 0xFF, 0xFF}}},
{{{   174,    -86,     61}, 0, {     0,      0},  {0x50, 0xBB, 0x44, 0xFF}}},
{{{   167,     -7,     97}, 0, {     0,      0},  {0x2D, 0x01, 0x76, 0xFF}}},
{{{   209,     29,     64}, 0, {     0,      0},  {0x6D, 0x12, 0x3D, 0xFF}}},
{{{   174,    -86,    -59}, 0, {     0,      0},  {0x50, 0xB9, 0xBD, 0xFF}}},
{{{   209,    -12,    -49}, 0, {     0,      0},  {0x72, 0xF1, 0xCC, 0xFF}}},
{{{   185,    -99,      0}, 0, {     0,      0},  {0x3F, 0x93, 0x00, 0xFF}}},
{{{   204,     29,    -62}, 0, {     0,      0},  {0x71, 0x03, 0xC8, 0xFF}}},
{{{   233,     90,    -37}, 0, {     0,      0},  {0x76, 0x2C, 0xF3, 0xFF}}},
{{{   213,     69,     28}, 0, {     0,      0},  {0x71, 0x27, 0x2A, 0xFF}}},
};

// 0x04012DB0
static const Vtx luigi_face_hair_cap_off_dl_vertex_group3[] = {
{{{   204,     29,    -62}, 0, {     0,      0},  {0x71, 0x03, 0xC8, 0xFF}}},
{{{   195,     77,    -60}, 0, {     0,      0},  {0x31, 0x46, 0xA3, 0xFF}}},
{{{   214,     59,    -29}, 0, {     0,      0},  {0x72, 0xE4, 0xD1, 0xFF}}},
{{{   218,     55,      0}, 0, {     0,      0},  {0x7E, 0xF9, 0xFF, 0xFF}}},
{{{   167,     77,    -29}, 0, {     0,      0},  {0xF5, 0x73, 0xCC, 0xFF}}},
{{{   186,    106,    -11}, 0, {     0,      0},  {0xE4, 0x7B, 0xFB, 0xFF}}},
{{{   145,     79,      0}, 0, {     0,      0},  {0xB7, 0x67, 0xFE, 0xFF}}},
{{{   174,    -86,    -59}, 0, {     0,      0},  {0x50, 0xB9, 0xBD, 0xFF}}},
{{{   107,   -100,    -53}, 0, {     0,      0},  {0xFC, 0x8F, 0xC8, 0xFF}}},
{{{   134,    -69,    -85}, 0, {     0,      0},  {0xEF, 0xCF, 0x8D, 0xFF}}},
{{{   168,     -7,    -97}, 0, {     0,      0},  {0x2F, 0xFE, 0x8B, 0xFF}}},
{{{   185,    -99,      0}, 0, {     0,      0},  {0x3F, 0x93, 0x00, 0xFF}}},
{{{   174,    -86,     61}, 0, {     0,      0},  {0x50, 0xBB, 0x44, 0xFF}}},
{{{   107,   -102,     54}, 0, {     0,      0},  {0xFB, 0x8F, 0x38, 0xFF}}},
{{{   110,   -109,      0}, 0, {     0,      0},  {0xE8, 0x84, 0xFF, 0xFF}}},
{{{   134,    -68,     86}, 0, {     0,      0},  {0xEF, 0xD0, 0x73, 0xFF}}},
};

// 0x04012EB0
static const Vtx luigi_face_hair_cap_off_dl_vertex_group4[] = {
{{{   134,    -68,     86}, 0, {     0,      0},  {0xEF, 0xD0, 0x73, 0xFF}}},
{{{   174,    -86,     61}, 0, {     0,      0},  {0x50, 0xBB, 0x44, 0xFF}}},
{{{   167,     -7,     97}, 0, {     0,      0},  {0x2D, 0x01, 0x76, 0xFF}}},
{{{   186,    106,    -11}, 0, {     0,      0},  {0xE4, 0x7B, 0xFB, 0xFF}}},
{{{   193,     73,     51}, 0, {     0,      0},  {0x38, 0x60, 0x3C, 0xFF}}},
{{{   233,     90,    -37}, 0, {     0,      0},  {0x76, 0x2C, 0xF3, 0xFF}}},
{{{   213,     69,     28}, 0, {     0,      0},  {0x71, 0x27, 0x2A, 0xFF}}},
{{{   214,     59,    -29}, 0, {     0,      0},  {0x72, 0xE4, 0xD1, 0xFF}}},
{{{   195,     77,    -60}, 0, {     0,      0},  {0x31, 0x46, 0xA3, 0xFF}}},
{{{   218,     55,      0}, 0, {     0,      0},  {0x7E, 0xF9, 0xFF, 0xFF}}},
{{{   209,     29,     64}, 0, {     0,      0},  {0x6D, 0x12, 0x3D, 0xFF}}},
{{{   167,     78,     31}, 0, {     0,      0},  {0x01, 0x75, 0x2F, 0xFF}}},
{{{   145,     79,      0}, 0, {     0,      0},  {0xB7, 0x67, 0xFE, 0xFF}}},
{{{    64,    -82,     38}, 0, {     0,      0},  {0xF3, 0x8B, 0x2E, 0xFF}}},
{{{    64,    -82,    -38}, 0, {     0,      0},  {0xF3, 0x8B, 0xD2, 0xFF}}},
{{{   110,   -109,      0}, 0, {     0,      0},  {0xE8, 0x84, 0xFF, 0xFF}}},
};

// 0x04012FB0
static const Vtx luigi_face_hair_cap_off_dl_vertex_group5[] = {
{{{   134,    -68,     86}, 0, {     0,      0},  {0xEF, 0xD0, 0x73, 0xFF}}},
{{{   167,     -7,     97}, 0, {     0,      0},  {0x2D, 0x01, 0x76, 0xFF}}},
{{{   115,     -9,     89}, 0, {     0,      0},  {0xFF, 0x13, 0x7D, 0xFF}}},
{{{    64,    -82,    -38}, 0, {     0,      0},  {0xF3, 0x8B, 0xD2, 0xFF}}},
{{{   107,   -100,    -53}, 0, {     0,      0},  {0xFC, 0x8F, 0xC8, 0xFF}}},
{{{   110,   -109,      0}, 0, {     0,      0},  {0xE8, 0x84, 0xFF, 0xFF}}},
{{{   134,    -69,    -85}, 0, {     0,      0},  {0xEF, 0xCF, 0x8D, 0xFF}}},
{{{   168,     -7,    -97}, 0, {     0,      0},  {0x2F, 0xFE, 0x8B, 0xFF}}},
{{{   115,     -9,    -88}, 0, {     0,      0},  {0xFF, 0x13, 0x83, 0xFF}}},
{{{    89,    -43,    -66}, 0, {     0,      0},  {0xE8, 0xAA, 0xA7, 0xFF}}},
{{{    64,    -82,     38}, 0, {     0,      0},  {0xF3, 0x8B, 0x2E, 0xFF}}},
{{{   107,   -102,     54}, 0, {     0,      0},  {0xFB, 0x8F, 0x38, 0xFF}}},
{{{    89,    -43,     67}, 0, {     0,      0},  {0xE9, 0xA9, 0x59, 0xFF}}},
{{{    30,    -65,      0}, 0, {     0,      0},  {0xA0, 0xAE, 0x00, 0xFF}}},
{{{    34,    -91,     26}, 0, {     0,      0},  {0xFB, 0x8E, 0xC9, 0xFF}}},
{{{     5,    -67,     42}, 0, {     0,      0},  {0x87, 0xDF, 0x0B, 0xFF}}},
};

// 0x040130B0
static const Vtx luigi_face_hair_cap_off_dl_vertex_group6[] = {
{{{    64,    -82,     38}, 0, {     0,      0},  {0xF3, 0x8B, 0x2E, 0xFF}}},
{{{    89,    -43,     67}, 0, {     0,      0},  {0xE9, 0xA9, 0x59, 0xFF}}},
{{{    56,    -35,     58}, 0, {     0,      0},  {0xE3, 0xCA, 0x6E, 0xFF}}},
{{{    30,    -65,      0}, 0, {     0,      0},  {0xA0, 0xAE, 0x00, 0xFF}}},
{{{    34,    -91,     26}, 0, {     0,      0},  {0xFB, 0x8E, 0xC9, 0xFF}}},
{{{    55,    -91,     45}, 0, {     0,      0},  {0x57, 0xB4, 0x32, 0xFF}}},
{{{    34,    -91,    -25}, 0, {     0,      0},  {0xFB, 0x8E, 0x37, 0xFF}}},
{{{    64,    -82,    -38}, 0, {     0,      0},  {0xF3, 0x8B, 0xD2, 0xFF}}},
{{{    57,    -35,    -57}, 0, {     0,      0},  {0xE3, 0xCA, 0x92, 0xFF}}},
{{{    89,    -43,    -66}, 0, {     0,      0},  {0xE8, 0xAA, 0xA7, 0xFF}}},
{{{    55,    -91,    -44}, 0, {     0,      0},  {0x57, 0xB4, 0xCE, 0xFF}}},
{{{    13,    -38,    -33}, 0, {     0,      0},  {0x89, 0xF8, 0xD7, 0xFF}}},
{{{     5,    -67,    -42}, 0, {     0,      0},  {0x87, 0xDF, 0xF5, 0xFF}}},
{{{     5,    -67,     42}, 0, {     0,      0},  {0x87, 0xDF, 0x0B, 0xFF}}},
{{{    13,    -38,     34}, 0, {     0,      0},  {0x89, 0xF8, 0x29, 0xFF}}},
{{{    33,    -94,    -49}, 0, {     0,      0},  {0xDA, 0x94, 0xCB, 0xFF}}},
};

// 0x040131B0
static const Vtx luigi_face_hair_cap_off_dl_vertex_group7[] = {
{{{    34,    -91,     26}, 0, {     0,      0},  {0xFB, 0x8E, 0xC9, 0xFF}}},
{{{    33,    -94,     50}, 0, {     0,      0},  {0xDA, 0x94, 0x35, 0xFF}}},
{{{     5,    -67,     42}, 0, {     0,      0},  {0x87, 0xDF, 0x0B, 0xFF}}},
{{{    55,    -91,     45}, 0, {     0,      0},  {0x57, 0xB4, 0x32, 0xFF}}},
{{{    33,    -94,    -49}, 0, {     0,      0},  {0xDA, 0x94, 0xCB, 0xFF}}},
{{{    26,    -66,    -65}, 0, {     0,      0},  {0xDB, 0xFD, 0x87, 0xFF}}},
{{{    55,    -91,    -44}, 0, {     0,      0},  {0x57, 0xB4, 0xCE, 0xFF}}},
{{{     5,    -67,    -42}, 0, {     0,      0},  {0x87, 0xDF, 0xF5, 0xFF}}},
{{{    57,    -35,    -57}, 0, {     0,      0},  {0xE3, 0xCA, 0x92, 0xFF}}},
{{{    13,    -38,    -33}, 0, {     0,      0},  {0x89, 0xF8, 0xD7, 0xFF}}},
{{{    30,    -66,     65}, 0, {     0,      0},  {0xDB, 0xFD, 0x79, 0xFF}}},
{{{    56,    -35,     58}, 0, {     0,      0},  {0xE3, 0xCA, 0x6E, 0xFF}}},
{{{    13,    -38,     34}, 0, {     0,      0},  {0x89, 0xF8, 0x29, 0xFF}}},
};

// 0x04013280
static const Vtx luigi_face_part_cap_off_dl_vertex_group9[] = {
{{{    46,     34,     71}, 0, {     0,      0},  {0xDA, 0x21, 0x74, 0xFF}}},
{{{    49,     71,     58}, 0, {     0,      0},  {0xD7, 0x60, 0x47, 0xFF}}},
{{{    -3,     40,     34}, 0, {     0,      0},  {0x95, 0x1D, 0x3C, 0xFF}}},
};

// 0x040132B0 - 0x04013318
const Gfx luigi_eyes_cap_off_dl[] = {
    gsSPVertex(luigi_eyes_cap_off_dl_vertex, 12, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 4,  6,  7, 0x0,  8,  6,  4, 0x0),
    gsSP2Triangles( 5,  4,  7, 0x0,  7,  9,  5, 0x0),
    gsSP2Triangles( 2,  8, 10, 0x0,  1,  6,  8, 0x0),
    gsSP2Triangles( 1,  8,  2, 0x0,  6, 11,  7, 0x0),
    gsSP1Triangle( 1, 11,  6, 0x0),
    gsSPEndDisplayList(),
};

// 0x04013318 - 0x040133A8
const Gfx luigi_mustache_cap_off_dl[] = {
    gsSPVertex(luigi_mustache_cap_off_dl_vertex_group1, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  0, 0x0),
    gsSP2Triangles( 0,  4,  3, 0x0,  3,  5,  1, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  7,  6,  9, 0x0),
    gsSP2Triangles( 7, 10,  8, 0x0,  8, 11,  6, 0x0),
    gsSP2Triangles(12,  8, 13, 0x0, 13,  8, 10, 0x0),
    gsSP2Triangles(14,  3,  4, 0x0, 13, 10, 15, 0x0),
    gsSPVertex(luigi_mustache_cap_off_dl_vertex_group2, 5, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  2, 0x0),
    gsSP1Triangle( 2,  3,  4, 0x0),
    gsSPEndDisplayList(),
};

// 0x040133A8 - 0x040133F8
const Gfx luigi_hair_sideburn_cap_off_dl[] = {
    gsSPVertex(luigi_hair_sideburn_cap_off_dl_vertex, 12, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  0, 0x0),
    gsSP2Triangles( 4,  2,  5, 0x0,  1,  5,  2, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  8,  9,  6, 0x0),
    gsSP2Triangles( 9,  8, 10, 0x0, 10,  8, 11, 0x0),
    gsSPEndDisplayList(),
};

// 0x040133F8 - 0x040136D0
const Gfx luigi_face_part_cap_off_dl[] = {
    gsSPVertex(luigi_face_part_cap_off_dl_vertex_group1, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  3,  5, 0x0,  3,  6,  7, 0x0),
    gsSP2Triangles( 4,  8,  2, 0x0,  8,  4,  9, 0x0),
    gsSP2Triangles( 2,  1,  4, 0x0,  6,  5, 10, 0x0),
    gsSP2Triangles(11, 12, 13, 0x0, 14, 13, 12, 0x0),
    gsSP1Triangle(13, 14,  0, 0x0),
    gsSPVertex(luigi_face_part_cap_off_dl_vertex_group2, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9,  8,  7, 0x0),
    gsSP2Triangles(10,  1, 11, 0x0,  1, 12, 11, 0x0),
    gsSP2Triangles(12,  1,  0, 0x0, 13, 11, 14, 0x0),
    gsSP2Triangles(12, 14, 11, 0x0, 11, 13, 15, 0x0),
    gsSPVertex(luigi_face_part_cap_off_dl_vertex_group3, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  6,  4, 0x0,  3,  5,  7, 0x0),
    gsSP2Triangles( 8,  7,  5, 0x0,  4,  8,  5, 0x0),
    gsSP2Triangles( 9, 10, 11, 0x0, 12, 13, 14, 0x0),
    gsSPVertex(luigi_face_part_cap_off_dl_vertex_group4, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  2, 0x0),
    gsSP2Triangles( 4,  1,  0, 0x0,  5,  6,  7, 0x0),
    gsSP2Triangles( 8,  3,  9, 0x0, 10, 11, 12, 0x0),
    gsSP2Triangles(13, 11, 10, 0x0, 11, 13, 14, 0x0),
    gsSPVertex(luigi_face_part_cap_off_dl_vertex_group5, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  5, 0x0,  8,  7,  6, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8,  6,  9, 0x0),
    gsSP2Triangles( 9, 11, 10, 0x0,  9, 12, 11, 0x0),
    gsSP2Triangles( 0, 13,  1, 0x0, 13, 14,  1, 0x0),
    gsSP1Triangle( 1, 14, 15, 0x0),
    gsSPVertex(luigi_face_part_cap_off_dl_vertex_group6, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  2, 0x0),
    gsSP2Triangles( 2,  4,  0, 0x0,  1,  0,  5, 0x0),
    gsSP2Triangles( 1,  6,  7, 0x0,  1,  5,  6, 0x0),
    gsSP2Triangles( 7,  8,  1, 0x0,  3,  9,  4, 0x0),
    gsSP2Triangles( 9,  3, 10, 0x0,  4, 11,  0, 0x0),
    gsSP2Triangles(11,  4, 12, 0x0,  4,  9, 12, 0x0),
    gsSP2Triangles(10, 13, 14, 0x0,  0, 11, 15, 0x0),
    gsSP2Triangles( 5,  0, 15, 0x0, 14,  9, 10, 0x0),
    gsSPVertex(luigi_face_part_cap_off_dl_vertex_group7, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  0,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  5,  7, 0x0),
    gsSP2Triangles( 8,  5,  4, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles( 2, 12,  0, 0x0, 13,  4,  6, 0x0),
    gsSP2Triangles( 6, 14, 15, 0x0,  6,  7, 14, 0x0),
    gsSP1Triangle(13,  6, 15, 0x0),
    gsSPVertex(luigi_face_part_cap_off_dl_vertex_group8, 9, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  7,  6,  5, 0x0),
    gsSP1Triangle( 8,  5,  4, 0x0),
    gsSPVertex(luigi_face_part_cap_off_dl_vertex_group9, 3, 0),
    gsSP1Triangle( 0,  1,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x040136D0 - 0x040139C0
const Gfx luigi_face_hair_cap_off_dl[] = {
    gsSPVertex(luigi_face_hair_cap_off_dl_vertex_group1, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  6,  7, 0x0,  3,  7,  4, 0x0),
    gsSP2Triangles( 8,  4,  9, 0x0,  7, 10,  4, 0x0),
    gsSP2Triangles( 4, 10,  9, 0x0,  8,  5,  4, 0x0),
    gsSP2Triangles(11,  1, 12, 0x0,  1,  0, 12, 0x0),
    gsSP2Triangles( 1, 13,  2, 0x0,  1, 11, 14, 0x0),
    gsSP2Triangles(13,  1, 14, 0x0, 15,  2, 13, 0x0),
    gsSPVertex(luigi_face_hair_cap_off_dl_vertex_group2, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 4,  3,  6, 0x0,  3,  7,  6, 0x0),
    gsSP2Triangles( 8,  7,  3, 0x0,  5,  8,  3, 0x0),
    gsSP2Triangles( 9, 10,  4, 0x0, 11,  4,  6, 0x0),
    gsSP2Triangles(11,  9,  4, 0x0, 10,  5,  4, 0x0),
    gsSP2Triangles(10, 12,  5, 0x0,  5, 13, 14, 0x0),
    gsSP2Triangles( 8,  5, 14, 0x0,  9,  2, 10, 0x0),
    gsSPVertex(luigi_face_hair_cap_off_dl_vertex_group3, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 1,  4,  5, 0x0,  4,  6,  5, 0x0),
    gsSP2Triangles( 7,  8,  9, 0x0, 10,  7,  9, 0x0),
    gsSP2Triangles( 8,  7, 11, 0x0, 11, 12, 13, 0x0),
    gsSP2Triangles(14, 11, 13, 0x0, 14,  8, 11, 0x0),
    gsSP1Triangle(15, 13, 12, 0x0),
    gsSPVertex(luigi_face_hair_cap_off_dl_vertex_group4, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 4,  6,  5, 0x0,  7,  8,  5, 0x0),
    gsSP2Triangles( 8,  3,  5, 0x0,  9,  7,  5, 0x0),
    gsSP2Triangles(10,  6,  4, 0x0,  4,  3, 11, 0x0),
    gsSP2Triangles( 3, 12, 11, 0x0, 13, 14, 15, 0x0),
    gsSPVertex(luigi_face_hair_cap_off_dl_vertex_group5, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  4,  3, 0x0,  7,  6,  8, 0x0),
    gsSP2Triangles( 9,  6,  3, 0x0,  6,  9,  8, 0x0),
    gsSP2Triangles(10, 11,  0, 0x0, 12,  0,  2, 0x0),
    gsSP2Triangles(10,  0, 12, 0x0, 10,  5, 11, 0x0),
    gsSP2Triangles(13, 14, 15, 0x0, 13,  3, 10, 0x0),
    gsSPVertex(luigi_face_hair_cap_off_dl_vertex_group6, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  4, 0x0),
    gsSP2Triangles( 5,  0,  2, 0x0,  5,  4,  0, 0x0),
    gsSP2Triangles( 3,  6,  7, 0x0,  8,  9,  7, 0x0),
    gsSP2Triangles( 6, 10,  7, 0x0,  8,  7, 10, 0x0),
    gsSP2Triangles( 3, 11, 12, 0x0, 13, 14,  3, 0x0),
    gsSP2Triangles(12,  6,  3, 0x0,  6, 15, 10, 0x0),
    gsSP1Triangle(12, 15,  6, 0x0),
    gsSPVertex(luigi_face_hair_cap_off_dl_vertex_group7, 13, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  0, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  5,  4,  7, 0x0),
    gsSP2Triangles( 6,  5,  8, 0x0,  9,  8,  5, 0x0),
    gsSP2Triangles( 5,  7,  9, 0x0, 10, 11, 12, 0x0),
    gsSP2Triangles(11, 10,  3, 0x0, 12,  2, 10, 0x0),
    gsSP2Triangles( 2,  1, 10, 0x0, 10,  1,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x040139C0 - 0x040139E8
const Gfx luigi_face_cap_off_dl[] = {
    gsSPDisplayList(luigi_face_part_cap_off_dl),
    gsSPLight(&luigi_brown2_lights_group.l, 1),
    gsSPLight(&luigi_brown2_lights_group.a, 2),
    gsSPDisplayList(luigi_face_hair_cap_off_dl),
    gsSPEndDisplayList(),
};

// 0x040139E8 - 0x04013AB8
const Gfx luigi_cap_off_eyes_front[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_front),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_off_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_off_dl),
    gsSPEndDisplayList(),
};

// 0x04013AB8 - 0x04013B88
const Gfx luigi_cap_off_eyes_half_closed[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_half_closed),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_off_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_off_dl),
    gsSPEndDisplayList(),
};

// 0x04013B88 - 0x04013C58
const Gfx luigi_cap_off_eyes_closed[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_closed),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_off_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_off_dl),
    gsSPEndDisplayList(),
};

// 0x04013C58 - 0x04013D28
const Gfx luigi_cap_off_eyes_right[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_right),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_off_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_off_dl),
    gsSPEndDisplayList(),
};

// 0x04013D28 - 0x04013DF8
const Gfx luigi_cap_off_eyes_left[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_left),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_off_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_off_dl),
    gsSPEndDisplayList(),
};

// 0x04013DF8 - 0x04013EC8
const Gfx luigi_cap_off_eyes_up[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_up),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_off_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_off_dl),
    gsSPEndDisplayList(),
};

// 0x04013EC8 - 0x04013F98
const Gfx luigi_cap_off_eyes_down[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_down),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_off_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_off_dl),
    gsSPEndDisplayList(),
};

// 0x04013F98 - 0x04014068
const Gfx luigi_cap_off_eyes_dead[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_eyes_dead),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&luigi_beige_lights_group.l, 1),
    gsSPLight(&luigi_beige_lights_group.a, 2),
    gsSPDisplayList(luigi_eyes_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_mustache),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_mustache_cap_off_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_hair_sideburn),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_hair_sideburn_cap_off_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_face_cap_off_dl),
    gsSPEndDisplayList(),
};

// 0x04014068 - 0x04014098
const Gfx luigi_metal_cap_off_shared_dl[] = {
    gsSPDisplayList(luigi_eyes_cap_off_dl),
    gsSPDisplayList(luigi_mustache_cap_off_dl),
    gsSPDisplayList(luigi_hair_sideburn_cap_off_dl),
    gsSPDisplayList(luigi_face_part_cap_off_dl),
    gsSPDisplayList(luigi_face_hair_cap_off_dl),
    gsSPEndDisplayList(),
};

// 0x04019538
static const Vtx luigi_left_hand_open_shared_dl_vertex_group1[] = {
{{{   121,     73,    -21}, 0, {     0,      0},  {0x47, 0x60, 0x2B, 0x00}}},
{{{    70,     89,    -20}, 0, {     0,      0},  {0xEC, 0x7C, 0xF6, 0x00}}},
{{{    77,     41,     21}, 0, {     0,      0},  {0x1D, 0x2A, 0x74, 0x00}}},
{{{   141,     34,     -7}, 0, {     0,      0},  {0x77, 0x0C, 0x29, 0x00}}},
{{{    78,     59,    -34}, 0, {     0,      0},  {0xFE, 0x0B, 0x82, 0x00}}},
{{{   119,     70,    -42}, 0, {     0,      0},  {0x3D, 0x44, 0xA9, 0x00}}},
{{{   133,     28,    -40}, 0, {     0,      0},  {0x45, 0xC9, 0xA6, 0x00}}},
{{{    83,    -17,     10}, 0, {     0,      0},  {0x4D, 0xBD, 0x4A, 0x00}}},
{{{    26,    -32,      6}, 0, {     0,      0},  {0x34, 0xA6, 0x47, 0x00}}},
{{{    45,    -34,     10}, 0, {     0,      0},  {0xFE, 0x9A, 0x4A, 0x00}}},
{{{    26,     16,     28}, 0, {     0,      0},  {0xDA, 0x0C, 0x78, 0x00}}},
{{{    41,    -37,    -36}, 0, {     0,      0},  {0xD8, 0x9B, 0xBF, 0x00}}},
{{{    20,    -27,    -27}, 0, {     0,      0},  {0x09, 0xBF, 0x94, 0x00}}},
{{{    25,     -1,    -44}, 0, {     0,      0},  {0xE4, 0xE0, 0x89, 0x00}}},
};

// 0x04019618
static const Vtx luigi_left_hand_open_shared_dl_vertex_group2[] = {
{{{    -3,     35,     -9}, 0, {     0,      0},  {0xCD, 0x72, 0x13, 0x00}}},
{{{     6,     53,     -9}, 0, {     0,      0},  {0xAF, 0x61, 0x00, 0x00}}},
{{{    11,     29,    -52}, 0, {     0,      0},  {0xBA, 0x2A, 0xA0, 0x00}}},
{{{    26,     16,     28}, 0, {     0,      0},  {0xDA, 0x0C, 0x78, 0x00}}},
{{{     1,    -33,    -23}, 0, {     0,      0},  {0x9C, 0xBB, 0xE0, 0x00}}},
{{{     6,    -38,      7}, 0, {     0,      0},  {0xAE, 0xAB, 0x2B, 0x00}}},
{{{    -6,     -3,     17}, 0, {     0,      0},  {0x90, 0xDA, 0x2D, 0x00}}},
{{{     2,      3,     26}, 0, {     0,      0},  {0xF5, 0x17, 0x7C, 0x00}}},
{{{    20,    -46,     12}, 0, {     0,      0},  {0x26, 0x9E, 0x45, 0x00}}},
{{{    26,    -32,      6}, 0, {     0,      0},  {0x34, 0xA6, 0x47, 0x00}}},
{{{   -17,     40,     -8}, 0, {     0,      0},  {0xBC, 0x68, 0x16, 0x00}}},
{{{   -10,     14,    -43}, 0, {     0,      0},  {0xD3, 0x19, 0x8D, 0x00}}},
{{{    20,    -27,    -27}, 0, {     0,      0},  {0x09, 0xBF, 0x94, 0x00}}},
{{{    13,    -39,    -31}, 0, {     0,      0},  {0x18, 0x9A, 0xBA, 0x00}}},
{{{   -20,     22,     -7}, 0, {     0,      0},  {0x83, 0x06, 0x14, 0x00}}},
{{{    70,     89,    -20}, 0, {     0,      0},  {0xEC, 0x7C, 0xF6, 0x00}}},
};

// 0x04019718
static const Vtx luigi_left_hand_open_shared_dl_vertex_group3[] = {
{{{    45,    -34,     10}, 0, {     0,      0},  {0xFE, 0x9A, 0x4A, 0x00}}},
{{{    83,    -17,     10}, 0, {     0,      0},  {0x4D, 0xBD, 0x4A, 0x00}}},
{{{    26,     16,     28}, 0, {     0,      0},  {0xDA, 0x0C, 0x78, 0x00}}},
{{{    89,    -47,    -37}, 0, {     0,      0},  {0x56, 0xAA, 0xDF, 0x00}}},
{{{    76,    -18,    -48}, 0, {     0,      0},  {0x27, 0x0A, 0x88, 0x00}}},
{{{    89,     -6,    -27}, 0, {     0,      0},  {0x5C, 0xF5, 0xAB, 0x00}}},
{{{     6,     53,     -9}, 0, {     0,      0},  {0xAF, 0x61, 0x00, 0x00}}},
{{{    26,     41,    -41}, 0, {     0,      0},  {0x05, 0x34, 0x8D, 0x00}}},
{{{    11,     29,    -52}, 0, {     0,      0},  {0xBA, 0x2A, 0xA0, 0x00}}},
{{{   141,     34,     -7}, 0, {     0,      0},  {0x77, 0x0C, 0x29, 0x00}}},
{{{    77,     41,     21}, 0, {     0,      0},  {0x1D, 0x2A, 0x74, 0x00}}},
{{{   133,     28,    -40}, 0, {     0,      0},  {0x45, 0xC9, 0xA6, 0x00}}},
{{{    69,     10,    -36}, 0, {     0,      0},  {0x35, 0x1C, 0x91, 0x00}}},
{{{    78,     59,    -34}, 0, {     0,      0},  {0xFE, 0x0B, 0x82, 0x00}}},
{{{   121,     73,    -21}, 0, {     0,      0},  {0x47, 0x60, 0x2B, 0x00}}},
{{{   119,     70,    -42}, 0, {     0,      0},  {0x3D, 0x44, 0xA9, 0x00}}},
};

// 0x04019818
static const Vtx luigi_left_hand_open_shared_dl_vertex_group4[] = {
{{{    25,     -1,    -44}, 0, {     0,      0},  {0xE4, 0xE0, 0x89, 0x00}}},
{{{    11,     29,    -52}, 0, {     0,      0},  {0xBA, 0x2A, 0xA0, 0x00}}},
{{{    26,     41,    -41}, 0, {     0,      0},  {0x05, 0x34, 0x8D, 0x00}}},
{{{    78,     59,    -34}, 0, {     0,      0},  {0xFE, 0x0B, 0x82, 0x00}}},
{{{    69,     10,    -36}, 0, {     0,      0},  {0x35, 0x1C, 0x91, 0x00}}},
{{{    89,    -47,    -37}, 0, {     0,      0},  {0x56, 0xAA, 0xDF, 0x00}}},
{{{    41,    -37,    -36}, 0, {     0,      0},  {0xD8, 0x9B, 0xBF, 0x00}}},
{{{    76,    -18,    -48}, 0, {     0,      0},  {0x27, 0x0A, 0x88, 0x00}}},
{{{    45,    -34,     10}, 0, {     0,      0},  {0xFE, 0x9A, 0x4A, 0x00}}},
{{{    89,     -6,    -27}, 0, {     0,      0},  {0x5C, 0xF5, 0xAB, 0x00}}},
{{{    83,    -17,     10}, 0, {     0,      0},  {0x4D, 0xBD, 0x4A, 0x00}}},
{{{    70,     89,    -20}, 0, {     0,      0},  {0xEC, 0x7C, 0xF6, 0x00}}},
{{{     6,     53,     -9}, 0, {     0,      0},  {0xAF, 0x61, 0x00, 0x00}}},
{{{   133,     28,    -40}, 0, {     0,      0},  {0x45, 0xC9, 0xA6, 0x00}}},
{{{    77,     41,     21}, 0, {     0,      0},  {0x1D, 0x2A, 0x74, 0x00}}},
{{{    26,     16,     28}, 0, {     0,      0},  {0xDA, 0x0C, 0x78, 0x00}}},
};

// 0x04019918
static const Vtx luigi_left_hand_open_shared_dl_vertex_group5[] = {
{{{     6,    -38,      7}, 0, {     0,      0},  {0xAE, 0xAB, 0x2B, 0x00}}},
{{{     1,    -33,    -23}, 0, {     0,      0},  {0x9C, 0xBB, 0xE0, 0x00}}},
{{{    13,    -39,    -31}, 0, {     0,      0},  {0x18, 0x9A, 0xBA, 0x00}}},
{{{   -15,      4,    -32}, 0, {     0,      0},  {0x89, 0xDD, 0xE7, 0x00}}},
{{{   -10,     14,    -43}, 0, {     0,      0},  {0xD3, 0x19, 0x8D, 0x00}}},
{{{   -20,     22,     -7}, 0, {     0,      0},  {0x83, 0x06, 0x14, 0x00}}},
{{{    -6,     -3,     17}, 0, {     0,      0},  {0x90, 0xDA, 0x2D, 0x00}}},
{{{     2,      3,     26}, 0, {     0,      0},  {0xF5, 0x17, 0x7C, 0x00}}},
{{{    20,    -27,    -27}, 0, {     0,      0},  {0x09, 0xBF, 0x94, 0x00}}},
{{{    26,    -32,      6}, 0, {     0,      0},  {0x34, 0xA6, 0x47, 0x00}}},
{{{     1,     15,    -37}, 0, {     0,      0},  {0xD2, 0x09, 0x8B, 0x00}}},
{{{    -3,     35,     -9}, 0, {     0,      0},  {0xCD, 0x72, 0x13, 0x00}}},
{{{    11,      5,     17}, 0, {     0,      0},  {0xFF, 0x1B, 0x7C, 0x00}}},
{{{    26,     16,     28}, 0, {     0,      0},  {0xDA, 0x0C, 0x78, 0x00}}},
{{{    11,     29,    -52}, 0, {     0,      0},  {0xBA, 0x2A, 0xA0, 0x00}}},
{{{    25,     -1,    -44}, 0, {     0,      0},  {0xE4, 0xE0, 0x89, 0x00}}},
};

// 0x04019A18
static const Vtx luigi_left_hand_open_shared_dl_vertex_group6[] = {
{{{    26,    -32,      6}, 0, {     0,      0},  {0x34, 0xA6, 0x47, 0x00}}},
{{{    20,    -27,    -27}, 0, {     0,      0},  {0x09, 0xBF, 0x94, 0x00}}},
{{{    41,    -37,    -36}, 0, {     0,      0},  {0xD8, 0x9B, 0xBF, 0x00}}},
{{{    26,     16,     28}, 0, {     0,      0},  {0xDA, 0x0C, 0x78, 0x00}}},
{{{    11,      5,     17}, 0, {     0,      0},  {0xFF, 0x1B, 0x7C, 0x00}}},
};

// 0x04019A68 - 0x04019CA0
const Gfx luigi_left_hand_open_shared_dl[] = {
    gsSPVertex(luigi_left_hand_open_shared_dl_vertex_group1, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  3,  7, 0x0),
    gsSP2Triangles( 1,  0,  5, 0x0,  5,  4,  1, 0x0),
    gsSP2Triangles( 5,  3,  6, 0x0,  8,  9, 10, 0x0),
    gsSP2Triangles( 8, 11,  9, 0x0, 12, 13, 11, 0x0),
    gsSPVertex(luigi_left_hand_open_shared_dl_vertex_group2, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles( 0, 10,  7, 0x0, 11, 10,  0, 0x0),
    gsSP2Triangles(12, 13, 11, 0x0,  9,  8, 13, 0x0),
    gsSP2Triangles( 7,  5,  8, 0x0, 10, 14,  7, 0x0),
    gsSP2Triangles(11, 14, 10, 0x0, 13,  4, 11, 0x0),
    gsSP2Triangles( 8,  5, 13, 0x0,  3, 15,  1, 0x0),
    gsSPVertex(luigi_left_hand_open_shared_dl_vertex_group3, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  0, 0x0),
    gsSP2Triangles( 4,  5,  3, 0x0,  6,  7,  8, 0x0),
    gsSP2Triangles( 1,  9, 10, 0x0,  5, 11,  1, 0x0),
    gsSP2Triangles(12, 13,  5, 0x0, 14,  9, 15, 0x0),
    gsSP1Triangle( 4,  7, 12, 0x0),
    gsSPVertex(luigi_left_hand_open_shared_dl_vertex_group4, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  4, 0x0),
    gsSP2Triangles( 5,  6,  7, 0x0,  7,  0,  2, 0x0),
    gsSP2Triangles( 8,  6,  5, 0x0,  5,  9, 10, 0x0),
    gsSP2Triangles(11,  3,  2, 0x0,  2, 12, 11, 0x0),
    gsSP2Triangles( 3, 13,  9, 0x0,  6,  0,  7, 0x0),
    gsSP2Triangles( 7,  4,  9, 0x0, 10, 14, 15, 0x0),
    gsSP1Triangle(15, 14, 11, 0x0),
    gsSPVertex(luigi_left_hand_open_shared_dl_vertex_group5, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  4, 0x0),
    gsSP2Triangles( 4,  3,  5, 0x0,  5,  6,  7, 0x0),
    gsSP2Triangles( 7,  6,  0, 0x0,  2,  8,  9, 0x0),
    gsSP2Triangles( 4, 10,  8, 0x0, 11, 10,  4, 0x0),
    gsSP2Triangles( 7, 12, 11, 0x0,  9, 12,  7, 0x0),
    gsSP2Triangles( 6,  3,  1, 0x0,  6,  5,  3, 0x0),
    gsSP2Triangles(11, 12, 13, 0x0, 14, 10, 11, 0x0),
    gsSP2Triangles( 8, 10, 15, 0x0, 10, 14, 15, 0x0),
    gsSPVertex(luigi_left_hand_open_shared_dl_vertex_group6, 5, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  0, 0x0),
    gsSPEndDisplayList(),
};

// 0x04019CA0 - 0x04019CC0
const Gfx luigi_left_hand_open[] = {
    gsSPLight(&luigi_white_lights_group.l, 1),
    gsSPLight(&luigi_white_lights_group.a, 2),
    gsSPDisplayList(luigi_left_hand_open_shared_dl),
    gsSPEndDisplayList(),
};

// 0x04019CC0
static const Vtx luigi_right_hand_open_dl_vertex_group1[] = {
{{{    81,     37,    -28}, 0, {     0,      0},  {0x18, 0x20, 0x88, 0x00}}},
{{{    76,     88,      9}, 0, {     0,      0},  {0xEF, 0x7D, 0x00, 0x00}}},
{{{   125,     71,      9}, 0, {     0,      0},  {0x47, 0x5A, 0xCB, 0x00}}},
{{{   143,     31,     -1}, 0, {     0,      0},  {0x75, 0x06, 0xD2, 0x00}}},
{{{   136,     28,     31}, 0, {     0,      0},  {0x4A, 0xCF, 0x5A, 0x00}}},
{{{   124,     69,     30}, 0, {     0,      0},  {0x44, 0x49, 0x4D, 0x00}}},
{{{    84,     59,     25}, 0, {     0,      0},  {0x04, 0x15, 0x7C, 0x00}}},
{{{    86,    -19,    -13}, 0, {     0,      0},  {0x49, 0xB6, 0xB8, 0x00}}},
{{{    30,     13,    -30}, 0, {     0,      0},  {0xD3, 0x03, 0x8A, 0x00}}},
{{{    48,    -35,     -9}, 0, {     0,      0},  {0xF7, 0x94, 0xBE, 0x00}}},
{{{    30,    -32,     -4}, 0, {     0,      0},  {0x2F, 0x9F, 0xBE, 0x00}}},
{{{    46,    -35,     37}, 0, {     0,      0},  {0xD8, 0xA2, 0x4A, 0x00}}},
{{{    32,      2,     43}, 0, {     0,      0},  {0xE9, 0xEB, 0x7A, 0x00}}},
{{{    26,    -24,     28}, 0, {     0,      0},  {0x0D, 0xC8, 0x70, 0x00}}},
};

// 0x04019DA0
static const Vtx luigi_right_hand_open_dl_vertex_group2[] = {
{{{    20,     33,     48}, 0, {     0,      0},  {0xBF, 0x32, 0x60, 0x00}}},
{{{    13,     53,      5}, 0, {     0,      0},  {0xB0, 0x62, 0xFC, 0x00}}},
{{{     3,     36,      6}, 0, {     0,      0},  {0xCE, 0x71, 0xE6, 0x00}}},
{{{    30,     13,    -30}, 0, {     0,      0},  {0xD3, 0x03, 0x8A, 0x00}}},
{{{     0,     -4,    -15}, 0, {     0,      0},  {0x8D, 0xDA, 0xDC, 0x00}}},
{{{    11,    -38,     -3}, 0, {     0,      0},  {0xA9, 0xAA, 0xE0, 0x00}}},
{{{     7,    -30,     26}, 0, {     0,      0},  {0x9B, 0xC0, 0x29, 0x00}}},
{{{    30,    -32,     -4}, 0, {     0,      0},  {0x2F, 0x9F, 0xBE, 0x00}}},
{{{    25,    -46,     -9}, 0, {     0,      0},  {0x21, 0x97, 0xC1, 0x00}}},
{{{     7,      1,    -26}, 0, {     0,      0},  {0xEE, 0x0D, 0x84, 0x00}}},
{{{    -9,     41,      5}, 0, {     0,      0},  {0xBC, 0x66, 0xE5, 0x00}}},
{{{    -1,     18,     42}, 0, {     0,      0},  {0xD9, 0x23, 0x73, 0x00}}},
{{{    19,    -36,     33}, 0, {     0,      0},  {0x1A, 0xA0, 0x4D, 0x00}}},
{{{    26,    -24,     28}, 0, {     0,      0},  {0x0D, 0xC8, 0x70, 0x00}}},
{{{   -12,     23,      6}, 0, {     0,      0},  {0x83, 0x07, 0xF1, 0x00}}},
{{{    76,     88,      9}, 0, {     0,      0},  {0xEF, 0x7D, 0x00, 0x00}}},
};

// 0x04019EA0
static const Vtx luigi_right_hand_open_dl_vertex_group3[] = {
{{{    30,     13,    -30}, 0, {     0,      0},  {0xD3, 0x03, 0x8A, 0x00}}},
{{{    86,    -19,    -13}, 0, {     0,      0},  {0x49, 0xB6, 0xB8, 0x00}}},
{{{    48,    -35,     -9}, 0, {     0,      0},  {0xF7, 0x94, 0xBE, 0x00}}},
{{{    93,    -45,     36}, 0, {     0,      0},  {0x57, 0xAC, 0x23, 0x00}}},
{{{    93,     -5,     22}, 0, {     0,      0},  {0x61, 0xFA, 0x50, 0x00}}},
{{{    81,    -15,     45}, 0, {     0,      0},  {0x2F, 0x13, 0x74, 0x00}}},
{{{    20,     33,     48}, 0, {     0,      0},  {0xBF, 0x32, 0x60, 0x00}}},
{{{    34,     43,     36}, 0, {     0,      0},  {0x0C, 0x3D, 0x6E, 0x00}}},
{{{    13,     53,      5}, 0, {     0,      0},  {0xB0, 0x62, 0xFC, 0x00}}},
{{{    81,     37,    -28}, 0, {     0,      0},  {0x18, 0x20, 0x88, 0x00}}},
{{{   143,     31,     -1}, 0, {     0,      0},  {0x75, 0x06, 0xD2, 0x00}}},
{{{   136,     28,     31}, 0, {     0,      0},  {0x4A, 0xCF, 0x5A, 0x00}}},
{{{    84,     59,     25}, 0, {     0,      0},  {0x04, 0x15, 0x7C, 0x00}}},
{{{    75,     11,     32}, 0, {     0,      0},  {0x3C, 0x23, 0x69, 0x00}}},
{{{   124,     69,     30}, 0, {     0,      0},  {0x44, 0x49, 0x4D, 0x00}}},
{{{   125,     71,      9}, 0, {     0,      0},  {0x47, 0x5A, 0xCB, 0x00}}},
};

// 0x04019FA0
static const Vtx luigi_right_hand_open_dl_vertex_group4[] = {
{{{    34,     43,     36}, 0, {     0,      0},  {0x0C, 0x3D, 0x6E, 0x00}}},
{{{    20,     33,     48}, 0, {     0,      0},  {0xBF, 0x32, 0x60, 0x00}}},
{{{    32,      2,     43}, 0, {     0,      0},  {0xE9, 0xEB, 0x7A, 0x00}}},
{{{    75,     11,     32}, 0, {     0,      0},  {0x3C, 0x23, 0x69, 0x00}}},
{{{    84,     59,     25}, 0, {     0,      0},  {0x04, 0x15, 0x7C, 0x00}}},
{{{    81,    -15,     45}, 0, {     0,      0},  {0x2F, 0x13, 0x74, 0x00}}},
{{{    46,    -35,     37}, 0, {     0,      0},  {0xD8, 0xA2, 0x4A, 0x00}}},
{{{    93,    -45,     36}, 0, {     0,      0},  {0x57, 0xAC, 0x23, 0x00}}},
{{{    48,    -35,     -9}, 0, {     0,      0},  {0xF7, 0x94, 0xBE, 0x00}}},
{{{    86,    -19,    -13}, 0, {     0,      0},  {0x49, 0xB6, 0xB8, 0x00}}},
{{{    93,     -5,     22}, 0, {     0,      0},  {0x61, 0xFA, 0x50, 0x00}}},
{{{    76,     88,      9}, 0, {     0,      0},  {0xEF, 0x7D, 0x00, 0x00}}},
{{{    13,     53,      5}, 0, {     0,      0},  {0xB0, 0x62, 0xFC, 0x00}}},
{{{   136,     28,     31}, 0, {     0,      0},  {0x4A, 0xCF, 0x5A, 0x00}}},
{{{    30,     13,    -30}, 0, {     0,      0},  {0xD3, 0x03, 0x8A, 0x00}}},
{{{    81,     37,    -28}, 0, {     0,      0},  {0x18, 0x20, 0x88, 0x00}}},
};

// 0x0401A0A0
static const Vtx luigi_right_hand_open_dl_vertex_group5[] = {
{{{    19,    -36,     33}, 0, {     0,      0},  {0x1A, 0xA0, 0x4D, 0x00}}},
{{{     7,    -30,     26}, 0, {     0,      0},  {0x9B, 0xC0, 0x29, 0x00}}},
{{{    11,    -38,     -3}, 0, {     0,      0},  {0xA9, 0xAA, 0xE0, 0x00}}},
{{{    -1,     18,     42}, 0, {     0,      0},  {0xD9, 0x23, 0x73, 0x00}}},
{{{    -7,      7,     32}, 0, {     0,      0},  {0x8A, 0xE2, 0x20, 0x00}}},
{{{   -12,     23,      6}, 0, {     0,      0},  {0x83, 0x07, 0xF1, 0x00}}},
{{{     7,      1,    -26}, 0, {     0,      0},  {0xEE, 0x0D, 0x84, 0x00}}},
{{{     0,     -4,    -15}, 0, {     0,      0},  {0x8D, 0xDA, 0xDC, 0x00}}},
{{{    30,    -32,     -4}, 0, {     0,      0},  {0x2F, 0x9F, 0xBE, 0x00}}},
{{{    26,    -24,     28}, 0, {     0,      0},  {0x0D, 0xC8, 0x70, 0x00}}},
{{{     9,     18,     35}, 0, {     0,      0},  {0xD8, 0x13, 0x76, 0x00}}},
{{{     3,     36,      6}, 0, {     0,      0},  {0xCE, 0x71, 0xE6, 0x00}}},
{{{    16,      4,    -17}, 0, {     0,      0},  {0xF9, 0x11, 0x83, 0x00}}},
{{{    30,     13,    -30}, 0, {     0,      0},  {0xD3, 0x03, 0x8A, 0x00}}},
{{{    20,     33,     48}, 0, {     0,      0},  {0xBF, 0x32, 0x60, 0x00}}},
{{{    32,      2,     43}, 0, {     0,      0},  {0xE9, 0xEB, 0x7A, 0x00}}},
};

// 0x0401A1A0
static const Vtx luigi_right_hand_open_dl_vertex_group6[] = {
{{{    46,    -35,     37}, 0, {     0,      0},  {0xD8, 0xA2, 0x4A, 0x00}}},
{{{    26,    -24,     28}, 0, {     0,      0},  {0x0D, 0xC8, 0x70, 0x00}}},
{{{    30,    -32,     -4}, 0, {     0,      0},  {0x2F, 0x9F, 0xBE, 0x00}}},
{{{    16,      4,    -17}, 0, {     0,      0},  {0xF9, 0x11, 0x83, 0x00}}},
{{{    30,     13,    -30}, 0, {     0,      0},  {0xD3, 0x03, 0x8A, 0x00}}},
};

// 0x0401A1F0 - 0x0401A428
const Gfx luigi_right_hand_open_dl[] = {
    gsSPVertex(luigi_right_hand_open_dl_vertex_group1, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  7,  3,  4, 0x0),
    gsSP2Triangles( 5,  2,  1, 0x0,  1,  6,  5, 0x0),
    gsSP2Triangles( 4,  3,  5, 0x0,  8,  9, 10, 0x0),
    gsSP2Triangles( 9, 11, 10, 0x0, 11, 12, 13, 0x0),
    gsSPVertex(luigi_right_hand_open_dl_vertex_group2, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  2, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles( 9, 10,  2, 0x0,  2, 10, 11, 0x0),
    gsSP2Triangles(11, 12, 13, 0x0, 12,  8,  7, 0x0),
    gsSP2Triangles( 8,  5,  9, 0x0,  9, 14, 10, 0x0),
    gsSP2Triangles(10, 14, 11, 0x0, 11,  6, 12, 0x0),
    gsSP2Triangles(12,  5,  8, 0x0,  1, 15,  3, 0x0),
    gsSPVertex(luigi_right_hand_open_dl_vertex_group3, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 3,  4,  5, 0x0,  6,  7,  8, 0x0),
    gsSP2Triangles( 9, 10,  1, 0x0,  1, 11,  4, 0x0),
    gsSP2Triangles( 4, 12, 13, 0x0, 14, 10, 15, 0x0),
    gsSP1Triangle(13,  7,  5, 0x0),
    gsSPVertex(luigi_right_hand_open_dl_vertex_group4, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  0, 0x0),
    gsSP2Triangles( 5,  6,  7, 0x0,  0,  2,  5, 0x0),
    gsSP2Triangles( 7,  6,  8, 0x0,  9, 10,  7, 0x0),
    gsSP2Triangles( 0,  4, 11, 0x0, 11, 12,  0, 0x0),
    gsSP2Triangles(10, 13,  4, 0x0,  5,  2,  6, 0x0),
    gsSP2Triangles(10,  3,  5, 0x0, 14, 15,  9, 0x0),
    gsSP1Triangle(11, 15, 14, 0x0),
    gsSPVertex(luigi_right_hand_open_dl_vertex_group5, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  1, 0x0),
    gsSP2Triangles( 5,  4,  3, 0x0,  6,  7,  5, 0x0),
    gsSP2Triangles( 2,  7,  6, 0x0,  8,  9,  0, 0x0),
    gsSP2Triangles( 9, 10,  3, 0x0,  3, 10, 11, 0x0),
    gsSP2Triangles(11, 12,  6, 0x0,  6, 12,  8, 0x0),
    gsSP2Triangles( 1,  4,  7, 0x0,  4,  5,  7, 0x0),
    gsSP2Triangles(13, 12, 11, 0x0, 11, 10, 14, 0x0),
    gsSP2Triangles(15, 10,  9, 0x0, 15, 14, 10, 0x0),
    gsSPVertex(luigi_right_hand_open_dl_vertex_group6, 5, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  4, 0x0),
    gsSPEndDisplayList(),
};

// 0x0401A428 - 0x0401A448
const Gfx luigi_right_hand_open[] = {
    gsSPLight(&luigi_white_lights_group.l, 1),
    gsSPLight(&luigi_white_lights_group.a, 2),
    gsSPDisplayList(luigi_right_hand_open_dl),
    gsSPEndDisplayList(),
};

// 0x0401A448 - 0x0401A478
const Gfx luigi_metal_right_hand_open[] = {
    gsSPDisplayList(luigi_right_hand_open_dl),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_GEN),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPTexture(0x0F80, 0x07C0, 0, G_TX_RENDERTILE, G_OFF),
    gsSPEndDisplayList(),
};

// 0x0401A478
static const Vtx luigi_right_hand_cap_m_logo_dl_vertex[] = {
{{{   117,     36,      0}, 0, {  1104,    228},  {0xD7, 0x60, 0xB8, 0xFF}}},
{{{    96,    -14,    -29}, 0, {   474,     32},  {0xD1, 0x0E, 0x8C, 0xFF}}},
{{{    70,      8,     36}, 0, {   772,    818},  {0xD0, 0x3E, 0x9D, 0xFF}}},
{{{    63,    -40,     31}, 0, {   196,    800},  {0xC5, 0xDE, 0x96, 0xFF}}},
{{{   102,    -71,     -9}, 0, {  -148,    188},  {0xC4, 0xB8, 0xAC, 0xFF}}},
};

// 0x0401A4C8
static const Vtx luigi_right_hand_cap_hand_position_dl_vertex_group1[] = {
{{{     1,     24,     35}, 0, {     0,      0},  {0xD4, 0x3C, 0x66, 0xFF}}},
{{{    29,      7,     48}, 0, {     0,      0},  {0xC3, 0xFA, 0x6E, 0xFF}}},
{{{    29,     62,     34}, 0, {     0,      0},  {0xCD, 0x4C, 0x57, 0xFF}}},
{{{    11,     60,     -3}, 0, {     0,      0},  {0xAB, 0x59, 0xE6, 0xFF}}},
{{{    56,     11,     65}, 0, {     0,      0},  {0xFC, 0x1B, 0x7B, 0xFF}}},
{{{    54,     54,     44}, 0, {     0,      0},  {0x1F, 0x50, 0x5C, 0xFF}}},
{{{    58,     81,      0}, 0, {     0,      0},  {0x13, 0x7A, 0xE8, 0xFF}}},
{{{    -2,     41,      0}, 0, {     0,      0},  {0xEE, 0x71, 0xCA, 0xFF}}},
{{{    35,      9,    -36}, 0, {     0,      0},  {0xE4, 0xF4, 0x85, 0xFF}}},
{{{   -13,     26,     41}, 0, {     0,      0},  {0xEE, 0x3C, 0x6E, 0xFF}}},
{{{    23,    -25,     35}, 0, {     0,      0},  {0x04, 0xC2, 0x6E, 0xFF}}},
{{{    75,    -32,     65}, 0, {     0,      0},  {0x08, 0xAE, 0x60, 0xFF}}},
{{{    16,      1,    -22}, 0, {     0,      0},  {0x04, 0x00, 0x82, 0xFF}}},
{{{     4,     -3,    -32}, 0, {     0,      0},  {0x11, 0x06, 0x83, 0xFF}}},
{{{   -19,     47,     -4}, 0, {     0,      0},  {0xAD, 0x54, 0xD3, 0xFF}}},
};

// 0x0401A5B8
static const Vtx luigi_right_hand_cap_hand_position_dl_vertex_group2[] = {
{{{   103,    -25,      1}, 0, {     0,      0},  {0x67, 0xC4, 0xD6, 0xFF}}},
{{{    95,     -8,     52}, 0, {     0,      0},  {0x60, 0x06, 0x52, 0xFF}}},
{{{    75,    -32,     65}, 0, {     0,      0},  {0x08, 0xAE, 0x60, 0xFF}}},
{{{    31,    -39,      0}, 0, {     0,      0},  {0x42, 0xA3, 0xCA, 0xFF}}},
{{{    23,    -25,     35}, 0, {     0,      0},  {0x04, 0xC2, 0x6E, 0xFF}}},
{{{    13,    -37,     41}, 0, {     0,      0},  {0x12, 0xB1, 0x61, 0xFF}}},
{{{    55,    -43,     -3}, 0, {     0,      0},  {0x00, 0x86, 0xE0, 0xFF}}},
{{{   -13,     26,     41}, 0, {     0,      0},  {0xEE, 0x3C, 0x6E, 0xFF}}},
{{{     4,     -3,    -32}, 0, {     0,      0},  {0x11, 0x06, 0x83, 0xFF}}},
{{{    16,      1,    -22}, 0, {     0,      0},  {0x04, 0x00, 0x82, 0xFF}}},
{{{    35,      9,    -36}, 0, {     0,      0},  {0xE4, 0xF4, 0x85, 0xFF}}},
{{{    24,    -55,     -4}, 0, {     0,      0},  {0x04, 0x8B, 0xD1, 0xFF}}},
{{{    56,     11,     65}, 0, {     0,      0},  {0xFC, 0x1B, 0x7B, 0xFF}}},
{{{   -15,    -12,      7}, 0, {     0,      0},  {0x8C, 0xCF, 0xF8, 0xFF}}},
{{{    85,     15,     52}, 0, {     0,      0},  {0x40, 0x30, 0x62, 0xFF}}},
{{{    54,     54,     44}, 0, {     0,      0},  {0x1F, 0x50, 0x5C, 0xFF}}},
};

// 0x0401A6B8
static const Vtx luigi_right_hand_cap_hand_position_dl_vertex_group3[] = {
{{{    35,      9,    -36}, 0, {     0,      0},  {0xE4, 0xF4, 0x85, 0xFF}}},
{{{    85,     30,    -32}, 0, {     0,      0},  {0x4F, 0x21, 0xA3, 0xFF}}},
{{{   103,    -25,      1}, 0, {     0,      0},  {0x67, 0xC4, 0xD6, 0xFF}}},
{{{    58,     81,      0}, 0, {     0,      0},  {0x13, 0x7A, 0xE8, 0xFF}}},
{{{    24,    -55,     -4}, 0, {     0,      0},  {0x04, 0x8B, 0xD1, 0xFF}}},
{{{   -15,    -12,      7}, 0, {     0,      0},  {0x8C, 0xCF, 0xF8, 0xFF}}},
{{{     4,     -3,    -32}, 0, {     0,      0},  {0x11, 0x06, 0x83, 0xFF}}},
{{{   -19,     47,     -4}, 0, {     0,      0},  {0xAD, 0x54, 0xD3, 0xFF}}},
{{{   -13,     26,     41}, 0, {     0,      0},  {0xEE, 0x3C, 0x6E, 0xFF}}},
{{{    13,    -37,     41}, 0, {     0,      0},  {0x12, 0xB1, 0x61, 0xFF}}},
{{{    96,     39,     24}, 0, {     0,      0},  {0x6B, 0x39, 0x21, 0xFF}}},
{{{    54,     54,     44}, 0, {     0,      0},  {0x1F, 0x50, 0x5C, 0xFF}}},
{{{    95,     -8,     52}, 0, {     0,      0},  {0x60, 0x06, 0x52, 0xFF}}},
{{{    85,     15,     52}, 0, {     0,      0},  {0x40, 0x30, 0x62, 0xFF}}},
};

// 0x0401A798
static const Vtx luigi_right_hand_cap_top_dl_vertex_group1[] = {
{{{    26,    -63,     38}, 0, {     0,      0},  {0x95, 0xBD, 0x00, 0xFF}}},
{{{    63,    -40,     31}, 0, {     0,      0},  {0xC5, 0xDE, 0x96, 0xFF}}},
{{{    95,    -96,     81}, 0, {     0,      0},  {0x9D, 0xB2, 0x09, 0xFF}}},
{{{    58,    -41,     49}, 0, {     0,      0},  {0xB7, 0x01, 0x67, 0xFF}}},
{{{   135,   -130,     60}, 0, {     0,      0},  {0xF4, 0x87, 0xDC, 0xFF}}},
{{{   123,   -106,    120}, 0, {     0,      0},  {0x9F, 0xDF, 0x49, 0xFF}}},
{{{   102,    -71,     -9}, 0, {     0,      0},  {0xC4, 0xB8, 0xAC, 0xFF}}},
{{{   205,    -94,    105}, 0, {     0,      0},  {0x66, 0xCD, 0xCB, 0xFF}}},
{{{   163,    -55,     -7}, 0, {     0,      0},  {0x4D, 0xD9, 0xA4, 0xFF}}},
{{{   162,   -129,    124}, 0, {     0,      0},  {0x06, 0x88, 0x26, 0xFF}}},
{{{   153,   -100,    160}, 0, {     0,      0},  {0xB3, 0xD1, 0x58, 0xFF}}},
{{{   144,     50,    133}, 0, {     0,      0},  {0xB3, 0x47, 0x47, 0xFF}}},
{{{   189,     62,    140}, 0, {     0,      0},  {0x22, 0x6C, 0x37, 0xFF}}},
{{{   164,     77,     77}, 0, {     0,      0},  {0x11, 0x7C, 0xED, 0xFF}}},
{{{   116,     50,     92}, 0, {     0,      0},  {0xA7, 0x50, 0x27, 0xFF}}},
};

// 0x0401A888
static const Vtx luigi_right_hand_cap_top_dl_vertex_group2[] = {
{{{    70,      8,     36}, 0, {     0,      0},  {0xD0, 0x3E, 0x9D, 0xFF}}},
{{{   116,     50,     92}, 0, {     0,      0},  {0xA7, 0x50, 0x27, 0xFF}}},
{{{   117,     36,      0}, 0, {     0,      0},  {0xD7, 0x60, 0xB8, 0xFF}}},
{{{    40,     38,     47}, 0, {     0,      0},  {0xA8, 0x5A, 0x0A, 0xFF}}},
{{{    65,      8,     54}, 0, {     0,      0},  {0xBB, 0xFB, 0x6A, 0xFF}}},
{{{   164,     77,     77}, 0, {     0,      0},  {0x11, 0x7C, 0xED, 0xFF}}},
{{{   172,     32,    171}, 0, {     0,      0},  {0xB3, 0x23, 0x5D, 0xFF}}},
{{{   189,     62,    140}, 0, {     0,      0},  {0x22, 0x6C, 0x37, 0xFF}}},
{{{   144,     50,    133}, 0, {     0,      0},  {0xB3, 0x47, 0x47, 0xFF}}},
{{{    16,    -10,     29}, 0, {     0,      0},  {0x84, 0x10, 0xED, 0xFF}}},
{{{    63,    -40,     31}, 0, {     0,      0},  {0xC5, 0xDE, 0x96, 0xFF}}},
{{{   172,      8,     -1}, 0, {     0,      0},  {0x4B, 0x29, 0xA3, 0xFF}}},
{{{    96,    -14,    -29}, 0, {     0,      0},  {0xD1, 0x0E, 0x8C, 0xFF}}},
{{{   205,    -94,    105}, 0, {     0,      0},  {0x66, 0xCD, 0xCB, 0xFF}}},
{{{   221,     22,    115}, 0, {     0,      0},  {0x72, 0x20, 0xD4, 0xFF}}},
{{{   256,     -4,    176}, 0, {     0,      0},  {0x79, 0x23, 0x0B, 0xFF}}},
};

// 0x0401A988
static const Vtx luigi_right_hand_cap_top_dl_vertex_group3[] = {
{{{    58,    -41,     49}, 0, {     0,      0},  {0xB7, 0x01, 0x67, 0xFF}}},
{{{    16,    -10,     29}, 0, {     0,      0},  {0x84, 0x10, 0xED, 0xFF}}},
{{{    26,    -63,     38}, 0, {     0,      0},  {0x95, 0xBD, 0x00, 0xFF}}},
{{{    63,    -40,     31}, 0, {     0,      0},  {0xC5, 0xDE, 0x96, 0xFF}}},
{{{    65,      8,     54}, 0, {     0,      0},  {0xBB, 0xFB, 0x6A, 0xFF}}},
{{{   102,    -71,     -9}, 0, {     0,      0},  {0xC4, 0xB8, 0xAC, 0xFF}}},
{{{    96,    -14,    -29}, 0, {     0,      0},  {0xD1, 0x0E, 0x8C, 0xFF}}},
{{{   163,    -55,     -7}, 0, {     0,      0},  {0x4D, 0xD9, 0xA4, 0xFF}}},
{{{   172,      8,     -1}, 0, {     0,      0},  {0x4B, 0x29, 0xA3, 0xFF}}},
{{{   221,     22,    115}, 0, {     0,      0},  {0x72, 0x20, 0xD4, 0xFF}}},
{{{   205,    -94,    105}, 0, {     0,      0},  {0x66, 0xCD, 0xCB, 0xFF}}},
{{{   189,     62,    140}, 0, {     0,      0},  {0x22, 0x6C, 0x37, 0xFF}}},
{{{   256,     -4,    176}, 0, {     0,      0},  {0x79, 0x23, 0x0B, 0xFF}}},
{{{   245,    -81,    169}, 0, {     0,      0},  {0x5F, 0xBF, 0x34, 0xFF}}},
{{{   162,   -129,    124}, 0, {     0,      0},  {0x06, 0x88, 0x26, 0xFF}}},
{{{   205,      0,    205}, 0, {     0,      0},  {0x14, 0x22, 0x78, 0xFF}}},
};

// 0x0401AA88
static const Vtx luigi_right_hand_cap_top_dl_vertex_group4[] = {
{{{   162,   -129,    124}, 0, {     0,      0},  {0x06, 0x88, 0x26, 0xFF}}},
{{{   245,    -81,    169}, 0, {     0,      0},  {0x5F, 0xBF, 0x34, 0xFF}}},
{{{   194,    -80,    198}, 0, {     0,      0},  {0xE5, 0xCC, 0x70, 0xFF}}},
{{{   205,      0,    205}, 0, {     0,      0},  {0x14, 0x22, 0x78, 0xFF}}},
{{{   256,     -4,    176}, 0, {     0,      0},  {0x79, 0x23, 0x0B, 0xFF}}},
{{{   189,     62,    140}, 0, {     0,      0},  {0x22, 0x6C, 0x37, 0xFF}}},
{{{   172,     32,    171}, 0, {     0,      0},  {0xB3, 0x23, 0x5D, 0xFF}}},
{{{   153,   -100,    160}, 0, {     0,      0},  {0xB3, 0xD1, 0x58, 0xFF}}},
};

// 0x0401AB08
static const Vtx luigi_right_hand_cap_bottom_dl_vertex[] = {
{{{    58,    -41,     49}, 0, {     0,      0},  {0xB7, 0x01, 0x67, 0xFF}}},
{{{    95,    -96,     81}, 0, {     0,      0},  {0x9D, 0xB2, 0x09, 0xFF}}},
{{{   123,   -106,    120}, 0, {     0,      0},  {0x9F, 0xDF, 0x49, 0xFF}}},
{{{    65,      8,     54}, 0, {     0,      0},  {0xBB, 0xFB, 0x6A, 0xFF}}},
{{{   116,     50,     92}, 0, {     0,      0},  {0xA7, 0x50, 0x27, 0xFF}}},
{{{   144,     50,    133}, 0, {     0,      0},  {0xB3, 0x47, 0x47, 0xFF}}},
{{{   172,     32,    171}, 0, {     0,      0},  {0xB3, 0x23, 0x5D, 0xFF}}},
{{{   153,   -100,    160}, 0, {     0,      0},  {0xB3, 0xD1, 0x58, 0xFF}}},
{{{   194,    -80,    198}, 0, {     0,      0},  {0xE5, 0xCC, 0x70, 0xFF}}},
{{{   205,      0,    205}, 0, {     0,      0},  {0x14, 0x22, 0x78, 0xFF}}},
};

// 0x0401ABA8 - 0x0401ABD0
const Gfx luigi_right_hand_cap_m_logo_dl[] = {
    gsSPVertex(luigi_right_hand_cap_m_logo_dl_vertex, 5, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  2, 0x0),
    gsSP1Triangle( 1,  4,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x0401ABD0 - 0x0401AD40
const Gfx luigi_right_hand_cap_top_dl[] = {
    gsSPVertex(luigi_right_hand_cap_top_dl_vertex_group1, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSP2Triangles( 2,  4,  5, 0x0,  6,  2,  1, 0x0),
    gsSP2Triangles( 2,  6,  4, 0x0,  7,  4,  8, 0x0),
    gsSP2Triangles( 8,  4,  6, 0x0,  4,  9,  5, 0x0),
    gsSP2Triangles( 4,  7,  9, 0x0,  5,  9, 10, 0x0),
    gsSP2Triangles(11, 12, 13, 0x0, 13, 14, 11, 0x0),
    gsSPVertex(luigi_right_hand_cap_top_dl_vertex_group2, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  4, 0x0),
    gsSP2Triangles( 0,  3,  1, 0x0,  5,  2,  1, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  0,  9,  3, 0x0),
    gsSP2Triangles(10,  9,  0, 0x0, 11, 12,  2, 0x0),
    gsSP2Triangles( 2,  5, 11, 0x0,  3,  9,  4, 0x0),
    gsSP2Triangles(13, 14, 15, 0x0, 11,  5, 14, 0x0),
    gsSP1Triangle( 7, 14,  5, 0x0),
    gsSPVertex(luigi_right_hand_cap_top_dl_vertex_group3, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 0,  4,  1, 0x0,  5,  6,  7, 0x0),
    gsSP2Triangles( 7,  8,  9, 0x0,  7,  6,  8, 0x0),
    gsSP2Triangles(10,  7,  9, 0x0, 11, 12,  9, 0x0),
    gsSP2Triangles(10, 13, 14, 0x0, 12, 13, 10, 0x0),
    gsSP1Triangle(13, 12, 15, 0x0),
    gsSPVertex(luigi_right_hand_cap_top_dl_vertex_group4, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  1,  3, 0x0),
    gsSP2Triangles( 3,  4,  5, 0x0,  3,  5,  6, 0x0),
    gsSP1Triangle( 7,  0,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x0401AD40 - 0x0401AED0
const Gfx luigi_right_hand_cap_hand_position_dl[] = {
    gsSPVertex(luigi_right_hand_cap_hand_position_dl_vertex_group1, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  0, 0x0),
    gsSP2Triangles( 2,  1,  4, 0x0,  2,  5,  6, 0x0),
    gsSP2Triangles( 6,  3,  2, 0x0,  5,  2,  4, 0x0),
    gsSP2Triangles( 3,  7,  0, 0x0,  3,  6,  8, 0x0),
    gsSP2Triangles( 3,  8,  7, 0x0,  9,  0,  7, 0x0),
    gsSP2Triangles(10,  0,  9, 0x0,  1,  0, 10, 0x0),
    gsSP2Triangles(11,  1, 10, 0x0, 11,  4,  1, 0x0),
    gsSP2Triangles( 7, 12, 13, 0x0,  8, 12,  7, 0x0),
    gsSP2Triangles(13, 14,  7, 0x0,  7, 14,  9, 0x0),
    gsSPVertex(luigi_right_hand_cap_hand_position_dl_vertex_group2, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 4,  3,  6, 0x0,  6,  2,  4, 0x0),
    gsSP2Triangles( 7,  5,  4, 0x0,  8,  9,  3, 0x0),
    gsSP2Triangles( 3,  9, 10, 0x0, 10,  6,  3, 0x0),
    gsSP2Triangles( 5, 11,  3, 0x0,  3, 11,  8, 0x0),
    gsSP2Triangles(10,  0,  6, 0x0,  6,  0,  2, 0x0),
    gsSP2Triangles( 2,  1, 12, 0x0,  5, 13, 11, 0x0),
    gsSP2Triangles( 1, 14, 12, 0x0, 14, 15, 12, 0x0),
    gsSPVertex(luigi_right_hand_cap_hand_position_dl_vertex_group3, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  1,  0, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  5,  7, 0x0),
    gsSP2Triangles( 7,  5,  8, 0x0,  8,  5,  9, 0x0),
    gsSP2Triangles( 3, 10,  1, 0x0, 11, 10,  3, 0x0),
    gsSP2Triangles( 1, 10,  2, 0x0,  2, 10, 12, 0x0),
    gsSP2Triangles(12, 10, 13, 0x0, 10, 11, 13, 0x0),
    gsSPEndDisplayList(),
};

// 0x0401AED0 - 0x0401AF20
const Gfx luigi_right_hand_cap_bottom_dl[] = {
    gsSPVertex(luigi_right_hand_cap_bottom_dl_vertex, 10, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSP2Triangles( 4,  3,  2, 0x0,  5,  4,  2, 0x0),
    gsSP2Triangles( 6,  5,  2, 0x0,  6,  2,  7, 0x0),
    gsSP2Triangles( 8,  9,  6, 0x0,  6,  7,  8, 0x0),
    gsSPEndDisplayList(),
};

// 0x0401AF20 - 0x0401AF60
const Gfx luigi_right_hand_cap_dl[] = {
    gsSPDisplayList(luigi_right_hand_cap_top_dl),
    gsSPLight(&luigi_white_lights_group.l, 1),
    gsSPLight(&luigi_white_lights_group.a, 2),
    gsSPDisplayList(luigi_right_hand_cap_hand_position_dl),
    gsSPLight(&luigi_brown2_lights_group.l, 1),
    gsSPLight(&luigi_brown2_lights_group.a, 2),
    gsSPDisplayList(luigi_right_hand_cap_bottom_dl),
    gsSPEndDisplayList(),
};

// 0x0401AF60
static const Vtx luigi_right_hand_cap_wings_half_1_dl_vertex[] = {
{{{   368,    146,      7}, 0, {   990,      0},  {0xBE, 0x65, 0xDA, 0xFF}}},
{{{   166,     37,     68}, 0, {     0,   2012},  {0xBE, 0x65, 0xDA, 0xFF}}},
{{{   212,     96,    143}, 0, {   990,   2012},  {0xBE, 0x65, 0xDA, 0xFF}}},
{{{   368,    146,      7}, 0, {   990,      0},  {0xBE, 0x64, 0xD9, 0xFF}}},
{{{   322,     87,    -67}, 0, {     0,      0},  {0xBE, 0x64, 0xD9, 0xFF}}},
{{{   166,     37,     68}, 0, {     0,   2012},  {0xBE, 0x64, 0xD9, 0xFF}}},
{{{   178,   -177,    128}, 0, {   990,   2012},  {0xA8, 0xB4, 0xCF, 0xFF}}},
{{{   149,   -100,     60}, 0, {     0,   2012},  {0xA8, 0xB4, 0xCF, 0xFF}}},
{{{   319,   -248,    -14}, 0, {   990,      0},  {0xA8, 0xB4, 0xCF, 0xFF}}},
{{{   290,   -171,    -81}, 0, {     0,      0},  {0xA8, 0xB4, 0xCF, 0xFF}}},
};

// 0x0401B000
static const Vtx luigi_right_hand_cap_wings_half_2_dl_vertex[] = {
{{{   414,    206,     82}, 0, {   990,      0},  {0xBE, 0x64, 0xD9, 0xFF}}},
{{{   212,     96,    143}, 0, {     0,   2012},  {0xBE, 0x64, 0xD9, 0xFF}}},
{{{   258,    156,    218}, 0, {   990,   2012},  {0xBE, 0x64, 0xD9, 0xFF}}},
{{{   368,    146,      7}, 0, {     0,      0},  {0xBE, 0x64, 0xD9, 0xFF}}},
{{{   178,   -177,    128}, 0, {     0,   2012},  {0xA8, 0xB3, 0xCF, 0xFF}}},
{{{   319,   -248,    -14}, 0, {     0,      0},  {0xA8, 0xB3, 0xCF, 0xFF}}},
{{{   349,   -325,     53}, 0, {   990,      0},  {0xA8, 0xB3, 0xCF, 0xFF}}},
{{{   207,   -253,    195}, 0, {   990,   2012},  {0xA8, 0xB3, 0xCF, 0xFF}}},
};

// 0x0401B080 - 0x0401B0B0
const Gfx luigi_right_hand_cap_wings_half_1_dl[] = {
    gsSPVertex(luigi_right_hand_cap_wings_half_1_dl_vertex, 10, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  7,  9,  8, 0x0),
    gsSPEndDisplayList(),
};

// 0x0401B0B0 - 0x0401B0E0
const Gfx luigi_right_hand_cap_wings_half_2_dl[] = {
    gsSPVertex(luigi_right_hand_cap_wings_half_2_dl_vertex, 8, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  7,  4,  6, 0x0),
    gsSPEndDisplayList(),
};

// 0x0401B0E0 - 0x0401B138
const Gfx luigi_right_hand_cap_wings_intial_dl[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGBFADEA, G_CC_MODULATERGBFADEA),
    gsSPClearGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLight(&luigi_white_lights_group.l, 1),
    gsSPLight(&luigi_white_lights_group.a, 2),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPEndDisplayList(),
};

// 0x0401B138 - 0x0401B158
const Gfx luigi_right_hand_cap_wings_end_dl[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x0401B158 - 0x0401B1D8
const Gfx luigi_right_hand_cap[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDRGBFADEA, G_CC_BLENDRGBFADEA),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, luigi_texture_l_logo),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_right_hand_cap_m_logo_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPDisplayList(luigi_right_hand_cap_dl),
    gsSPEndDisplayList(),
};

// 0x0401B1D8 - 0x0401B230
const Gfx luigi_right_hand_cap_wings[] = {
    gsSPDisplayList(luigi_right_hand_cap_wings_intial_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_wings_half_1),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_right_hand_cap_wings_half_1_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_wings_half_2),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_right_hand_cap_wings_half_2_dl),
    gsSPDisplayList(luigi_right_hand_cap_wings_end_dl),
    gsSPEndDisplayList(),
};

// 0x0401B230 - 0x0401B278
const Gfx luigi_metal_right_hand_cap_shared_dl[] = {
    gsSPDisplayList(luigi_right_hand_cap_m_logo_dl),
    gsSPDisplayList(luigi_right_hand_cap_top_dl),
    gsSPDisplayList(luigi_right_hand_cap_hand_position_dl),
    gsSPDisplayList(luigi_right_hand_cap_bottom_dl),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_GEN),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPTexture(0x0F80, 0x07C0, 0, G_TX_RENDERTILE, G_OFF),
    gsSPEndDisplayList(),
};

// 0x0401B278 - 0x0401B2D0
const Gfx luigi_metal_right_hand_cap_shared_dl_wings[] = {
    gsSPDisplayList(luigi_right_hand_cap_wings_intial_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_metal_wings_half_1),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_right_hand_cap_wings_half_1_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_metal_wings_half_2),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(luigi_right_hand_cap_wings_half_2_dl),
    gsSPDisplayList(luigi_right_hand_cap_wings_end_dl),
    gsSPEndDisplayList(),
};

// 0x0401B2D0
static const Vtx luigi_right_hand_peace_shared_dl_vertex_group1[] = {
{{{   -18,      8,     29}, 0, {     0,      0},  {0x8A, 0xE1, 0x1F, 0x00}}},
{{{   -22,     21,      0}, 0, {     0,      0},  {0x84, 0xF8, 0xEA, 0x00}}},
{{{    -7,    -10,    -18}, 0, {     0,      0},  {0x93, 0xCF, 0xD7, 0x00}}},
{{{     0,    -31,     28}, 0, {     0,      0},  {0x9D, 0xBA, 0x22, 0xFF}}},
{{{     5,    -44,      0}, 0, {     0,      0},  {0xA9, 0xA7, 0xEC, 0xFF}}},
{{{    79,    -30,     35}, 0, {     0,      0},  {0x38, 0xA1, 0x3D, 0xFF}}},
{{{    81,     -2,     46}, 0, {     0,      0},  {0x50, 0x07, 0x61, 0xFF}}},
{{{    40,    -26,     46}, 0, {     0,      0},  {0xEB, 0xB9, 0x66, 0xFF}}},
{{{    20,    -26,     32}, 0, {     0,      0},  {0x12, 0xEC, 0x7B, 0xFF}}},
{{{    16,     27,     36}, 0, {     0,      0},  {0xC1, 0x2B, 0x64, 0xFF}}},
{{{    41,     44,     40}, 0, {     0,      0},  {0xF8, 0x44, 0x6A, 0xFF}}},
{{{     0,     18,     33}, 0, {     0,      0},  {0xFE, 0x44, 0x6A, 0xFF}}},
{{{    50,    -42,     -4}, 0, {     0,      0},  {0x0C, 0x87, 0xDE, 0xFF}}},
{{{    50,     72,      0}, 0, {     0,      0},  {0x1A, 0x6A, 0x40, 0xFF}}},
{{{     7,     52,     -1}, 0, {     0,      0},  {0xBC, 0x55, 0x40, 0xFF}}},
{{{    75,     43,     21}, 0, {     0,      0},  {0x32, 0x3D, 0x62, 0xFF}}},
};

// 0x0401B3D0
static const Vtx luigi_right_hand_peace_shared_dl_vertex_group2[] = {
{{{    29,      6,    -33}, 0, {     0,      0},  {0xDE, 0xF5, 0x87, 0xFF}}},
{{{    50,    -42,     -4}, 0, {     0,      0},  {0x0C, 0x87, 0xDE, 0x00}}},
{{{    28,    -38,      0}, 0, {     0,      0},  {0xDD, 0xBA, 0x9D, 0x00}}},
{{{    40,    -26,     46}, 0, {     0,      0},  {0xEB, 0xB9, 0x66, 0xFF}}},
{{{    28,    -38,      0}, 0, {     0,      0},  {0xEB, 0x89, 0x24, 0xFF}}},
{{{    16,     27,     36}, 0, {     0,      0},  {0xC1, 0x2B, 0x64, 0xFF}}},
{{{     7,     52,     -1}, 0, {     0,      0},  {0xBC, 0x55, 0x40, 0xFF}}},
{{{    -3,     34,      0}, 0, {     0,      0},  {0xD3, 0x66, 0x3C, 0xFF}}},
{{{     7,     52,     -1}, 0, {     0,      0},  {0xD0, 0x30, 0x96, 0xFF}}},
{{{    -3,     34,      0}, 0, {     0,      0},  {0xB3, 0x18, 0x9F, 0xFF}}},
{{{    21,    -53,     -2}, 0, {     0,      0},  {0xC4, 0xB9, 0xAB, 0xFF}}},
{{{     5,    -44,      0}, 0, {     0,      0},  {0xA9, 0xA7, 0xEC, 0xFF}}},
{{{    -7,    -10,    -18}, 0, {     0,      0},  {0x93, 0xCF, 0xD7, 0xFF}}},
{{{     1,     -4,    -29}, 0, {     0,      0},  {0xAD, 0xDA, 0xA9, 0xFF}}},
};

// 0x0401B4B0
static const Vtx luigi_right_hand_peace_shared_dl_vertex_group3[] = {
{{{   -19,     38,     -2}, 0, {     0,      0},  {0x31, 0x4D, 0xA8, 0xFF}}},
{{{    -3,     34,      0}, 0, {     0,      0},  {0x31, 0x4D, 0xA8, 0x00}}},
{{{    12,      0,    -19}, 0, {     0,      0},  {0x47, 0x20, 0x9D, 0x00}}},
{{{     1,     -4,    -29}, 0, {     0,      0},  {0x47, 0x20, 0x9D, 0xFF}}},
{{{   -19,     38,     -2}, 0, {     0,      0},  {0x86, 0x10, 0xE4, 0xFF}}},
{{{   -22,     21,      0}, 0, {     0,      0},  {0x84, 0xF8, 0xEA, 0xFF}}},
{{{   -18,      8,     29}, 0, {     0,      0},  {0x8A, 0xE1, 0x1F, 0xFF}}},
{{{   -13,     20,     38}, 0, {     0,      0},  {0xD6, 0x31, 0x6C, 0xFF}}},
{{{     0,    -31,     28}, 0, {     0,      0},  {0x9D, 0xBA, 0x22, 0xFF}}},
{{{    13,    -35,     37}, 0, {     0,      0},  {0x0C, 0xBE, 0x6B, 0xFF}}},
{{{     5,    -44,      0}, 0, {     0,      0},  {0xA9, 0xA7, 0xEC, 0xFF}}},
{{{    21,    -53,     -2}, 0, {     0,      0},  {0xCE, 0x92, 0x24, 0xFF}}},
{{{     7,     52,     -1}, 0, {     0,      0},  {0xD0, 0x30, 0x96, 0xFF}}},
{{{    50,     72,      0}, 0, {     0,      0},  {0xFE, 0x41, 0x94, 0xFF}}},
{{{    29,      6,    -33}, 0, {     0,      0},  {0xDE, 0xF5, 0x87, 0xFF}}},
};

// 0x0401B5A0
static const Vtx luigi_right_hand_peace_shared_dl_vertex_group4[] = {
{{{    90,    -26,     13}, 0, {     0,      0},  {0x53, 0xA3, 0x15, 0xFF}}},
{{{    79,    -30,     35}, 0, {     0,      0},  {0x38, 0xA1, 0x3D, 0x00}}},
{{{    50,    -42,     -4}, 0, {     0,      0},  {0x0C, 0x87, 0xDE, 0x00}}},
{{{    50,     72,      0}, 0, {     0,      0},  {0xFE, 0x41, 0x94, 0xFF}}},
{{{    75,     54,     -6}, 0, {     0,      0},  {0xFB, 0x44, 0x96, 0xFF}}},
{{{    80,     16,    -30}, 0, {     0,      0},  {0x0A, 0x1B, 0x85, 0xFF}}},
{{{    94,     15,      2}, 0, {     0,      0},  {0x0A, 0x7C, 0x14, 0xFF}}},
{{{    88,      9,     26}, 0, {     0,      0},  {0x0A, 0x7A, 0x21, 0xFF}}},
{{{   137,      6,     21}, 0, {     0,      0},  {0x0C, 0x7A, 0x1E, 0xFF}}},
{{{    41,     44,     40}, 0, {     0,      0},  {0xF8, 0x44, 0x6A, 0xFF}}},
{{{    75,     43,     21}, 0, {     0,      0},  {0x32, 0x3D, 0x62, 0xFF}}},
{{{    50,     72,      0}, 0, {     0,      0},  {0x1A, 0x6A, 0x40, 0xFF}}},
{{{    29,      6,    -33}, 0, {     0,      0},  {0xDE, 0xF5, 0x87, 0xFF}}},
{{{    84,    -19,    -16}, 0, {     0,      0},  {0x07, 0xCD, 0x8D, 0xFF}}},
{{{    12,      0,    -19}, 0, {     0,      0},  {0xBE, 0xE5, 0x98, 0xFF}}},
{{{    -3,     34,      0}, 0, {     0,      0},  {0xB3, 0x18, 0x9F, 0xFF}}},
};

// 0x0401B6A0
static const Vtx luigi_right_hand_peace_shared_dl_vertex_group5[] = {
{{{    -3,     34,      0}, 0, {     0,      0},  {0xD3, 0x66, 0x3C, 0xFF}}},
{{{     0,     18,     33}, 0, {     0,      0},  {0xFE, 0x44, 0x6A, 0x00}}},
{{{    16,     27,     36}, 0, {     0,      0},  {0xC1, 0x2B, 0x64, 0x00}}},
{{{    40,    -26,     46}, 0, {     0,      0},  {0xEB, 0xB9, 0x66, 0xFF}}},
{{{    20,    -26,     32}, 0, {     0,      0},  {0xE3, 0x8B, 0x25, 0xFF}}},
{{{    28,    -38,      0}, 0, {     0,      0},  {0xEB, 0x89, 0x24, 0xFF}}},
{{{    28,    -38,      0}, 0, {     0,      0},  {0xDD, 0xBA, 0x9D, 0xFF}}},
{{{    12,      0,    -19}, 0, {     0,      0},  {0xBE, 0xE5, 0x98, 0xFF}}},
{{{    29,      6,    -33}, 0, {     0,      0},  {0xDE, 0xF5, 0x87, 0xFF}}},
{{{   149,    -11,    -15}, 0, {     0,      0},  {0x7A, 0x08, 0x21, 0xFF}}},
{{{   145,     12,     -9}, 0, {     0,      0},  {0x79, 0x01, 0x25, 0xFF}}},
{{{   137,      6,     21}, 0, {     0,      0},  {0x7A, 0x08, 0x21, 0xFF}}},
{{{   139,    -13,     18}, 0, {     0,      0},  {0x79, 0x06, 0x23, 0xFF}}},
{{{    75,     54,     -6}, 0, {     0,      0},  {0xC2, 0x66, 0x28, 0xFF}}},
{{{    75,     43,     21}, 0, {     0,      0},  {0xC2, 0x66, 0x28, 0xFF}}},
{{{   113,     75,     -2}, 0, {     0,      0},  {0xC2, 0x66, 0x28, 0xFF}}},
};

// 0x0401B7A0
static const Vtx luigi_right_hand_peace_shared_dl_vertex_group6[] = {
{{{   131,     53,     -7}, 0, {     0,      0},  {0x5D, 0x4D, 0x26, 0xFF}}},
{{{   113,     75,     -2}, 0, {     0,      0},  {0x5F, 0x47, 0x2A, 0x00}}},
{{{   110,     64,     18}, 0, {     0,      0},  {0x5D, 0x4D, 0x26, 0x00}}},
{{{   113,     75,     -2}, 0, {     0,      0},  {0xFD, 0x37, 0x8E, 0xFF}}},
{{{    80,     16,    -30}, 0, {     0,      0},  {0x0A, 0x1B, 0x85, 0xFF}}},
{{{    75,     54,     -6}, 0, {     0,      0},  {0xFB, 0x44, 0x96, 0xFF}}},
{{{   131,     53,     -7}, 0, {     0,      0},  {0x15, 0x2A, 0x8B, 0xFF}}},
{{{   145,     12,     -9}, 0, {     0,      0},  {0x0A, 0x7D, 0x0D, 0xFF}}},
{{{    80,     16,    -30}, 0, {     0,      0},  {0x06, 0x7E, 0xFF, 0xFF}}},
{{{    94,     15,      2}, 0, {     0,      0},  {0x0A, 0x7C, 0x14, 0xFF}}},
{{{   145,     12,     -9}, 0, {     0,      0},  {0x26, 0x1E, 0x8B, 0xFF}}},
{{{   149,    -11,    -15}, 0, {     0,      0},  {0x18, 0xF9, 0x84, 0xFF}}},
{{{    50,     72,      0}, 0, {     0,      0},  {0x1A, 0x6A, 0x40, 0xFF}}},
{{{    75,     43,     21}, 0, {     0,      0},  {0x32, 0x3D, 0x62, 0xFF}}},
{{{    75,     54,     -6}, 0, {     0,      0},  {0x4D, 0x5D, 0x24, 0xFF}}},
};

// 0x0401B890
static const Vtx luigi_right_hand_peace_shared_dl_vertex_group7[] = {
{{{   125,     47,     22}, 0, {     0,      0},  {0x5B, 0xA8, 0x02, 0xFF}}},
{{{    94,     15,      2}, 0, {     0,      0},  {0x59, 0xA6, 0xF7, 0x00}}},
{{{   131,     53,     -7}, 0, {     0,      0},  {0x57, 0xA6, 0xF0, 0x00}}},
{{{    29,      6,    -33}, 0, {     0,      0},  {0xDE, 0xF5, 0x87, 0xFF}}},
{{{    80,     16,    -30}, 0, {     0,      0},  {0x0A, 0x1B, 0x85, 0xFF}}},
{{{    84,    -19,    -16}, 0, {     0,      0},  {0x07, 0xCD, 0x8D, 0xFF}}},
{{{    79,    -30,     35}, 0, {     0,      0},  {0x38, 0xA1, 0x3D, 0xFF}}},
{{{    90,    -26,     13}, 0, {     0,      0},  {0x53, 0xA3, 0x15, 0xFF}}},
{{{    81,     -2,     46}, 0, {     0,      0},  {0x50, 0x07, 0x61, 0xFF}}},
{{{    84,    -19,    -16}, 0, {     0,      0},  {0x1C, 0x85, 0x00, 0xFF}}},
{{{   139,    -13,     18}, 0, {     0,      0},  {0x19, 0x85, 0xF1, 0xFF}}},
{{{   149,    -11,    -15}, 0, {     0,      0},  {0x10, 0x83, 0x00, 0xFF}}},
{{{    90,    -26,     13}, 0, {     0,      0},  {0xFF, 0xE2, 0x7B, 0xFF}}},
{{{   137,      6,     21}, 0, {     0,      0},  {0xFF, 0xE2, 0x7B, 0xFF}}},
{{{    88,      9,     26}, 0, {     0,      0},  {0x07, 0xD6, 0x77, 0xFF}}},
};

// 0x0401B980
static const Vtx luigi_right_hand_peace_shared_dl_vertex_group8[] = {
{{{   125,     47,     22}, 0, {     0,      0},  {0xFC, 0x13, 0x7D, 0xFF}}},
{{{   110,     64,     18}, 0, {     0,      0},  {0xFC, 0x15, 0x7D, 0x00}}},
{{{    75,     43,     21}, 0, {     0,      0},  {0x32, 0x3D, 0x62, 0x00}}},
{{{    88,      9,     26}, 0, {     0,      0},  {0x55, 0x16, 0x5B, 0xFF}}},
{{{    90,    -26,     13}, 0, {     0,      0},  {0xFF, 0xE2, 0x7B, 0xFF}}},
{{{   139,    -13,     18}, 0, {     0,      0},  {0xF5, 0xEF, 0x7D, 0xFF}}},
{{{   137,      6,     21}, 0, {     0,      0},  {0xFF, 0xE2, 0x7B, 0xFF}}},
{{{    81,     -2,     46}, 0, {     0,      0},  {0x50, 0x07, 0x61, 0xFF}}},
{{{    90,    -26,     13}, 0, {     0,      0},  {0x53, 0xA3, 0x15, 0xFF}}},
{{{   131,     53,     -7}, 0, {     0,      0},  {0x57, 0xA6, 0xF0, 0xFF}}},
{{{    94,     15,      2}, 0, {     0,      0},  {0x59, 0xA6, 0xF7, 0xFF}}},
{{{    80,     16,    -30}, 0, {     0,      0},  {0x51, 0xA6, 0xDD, 0xFF}}},
{{{   149,    -11,    -15}, 0, {     0,      0},  {0x18, 0xF9, 0x84, 0xFF}}},
{{{    84,    -19,    -16}, 0, {     0,      0},  {0x07, 0xCD, 0x8D, 0xFF}}},
{{{    80,     16,    -30}, 0, {     0,      0},  {0x0A, 0x1B, 0x85, 0xFF}}},
};

// 0x0401BA70
static const Vtx luigi_right_hand_peace_shared_dl_vertex_group9[] = {
{{{    75,     43,     21}, 0, {     0,      0},  {0xC2, 0x66, 0x28, 0xFF}}},
{{{   110,     64,     18}, 0, {     0,      0},  {0xC3, 0x66, 0x29, 0x00}}},
{{{   113,     75,     -2}, 0, {     0,      0},  {0xC2, 0x66, 0x28, 0x00}}},
{{{   125,     47,     22}, 0, {     0,      0},  {0x5B, 0xA8, 0x02, 0xFF}}},
{{{    88,      9,     26}, 0, {     0,      0},  {0x5B, 0xA8, 0x02, 0xFF}}},
{{{    94,     15,      2}, 0, {     0,      0},  {0x59, 0xA6, 0xF7, 0xFF}}},
{{{    94,     15,      2}, 0, {     0,      0},  {0x0A, 0x7C, 0x14, 0xFF}}},
{{{   137,      6,     21}, 0, {     0,      0},  {0x0C, 0x7A, 0x1E, 0xFF}}},
{{{   145,     12,     -9}, 0, {     0,      0},  {0x0A, 0x7D, 0x0D, 0xFF}}},
{{{   110,     64,     18}, 0, {     0,      0},  {0x5D, 0x4D, 0x26, 0xFF}}},
{{{   125,     47,     22}, 0, {     0,      0},  {0x5A, 0x52, 0x21, 0xFF}}},
{{{   131,     53,     -7}, 0, {     0,      0},  {0x5D, 0x4D, 0x26, 0xFF}}},
{{{    21,    -53,     -2}, 0, {     0,      0},  {0x68, 0xC7, 0x2C, 0xFF}}},
{{{    28,    -38,      0}, 0, {     0,      0},  {0x68, 0xC7, 0x2C, 0xFF}}},
{{{    20,    -26,     32}, 0, {     0,      0},  {0x12, 0xEC, 0x7B, 0xFF}}},
{{{    13,    -35,     37}, 0, {     0,      0},  {0x0C, 0xBE, 0x6B, 0xFF}}},
};

// 0x0401BB70
static const Vtx luigi_right_hand_peace_shared_dl_vertex_group10[] = {
{{{     1,     -4,    -29}, 0, {     0,      0},  {0x47, 0x20, 0x9D, 0xFF}}},
{{{    12,      0,    -19}, 0, {     0,      0},  {0x47, 0x20, 0x9D, 0x00}}},
{{{    28,    -38,      0}, 0, {     0,      0},  {0x52, 0xEE, 0xA2, 0x00}}},
{{{    21,    -53,     -2}, 0, {     0,      0},  {0x52, 0xEE, 0xA2, 0xFF}}},
{{{     1,     -4,    -29}, 0, {     0,      0},  {0xAD, 0xDA, 0xA9, 0xFF}}},
{{{    -7,    -10,    -18}, 0, {     0,      0},  {0x93, 0xCF, 0xD7, 0xFF}}},
{{{   -22,     21,      0}, 0, {     0,      0},  {0x84, 0xF8, 0xEA, 0xFF}}},
{{{   -19,     38,     -2}, 0, {     0,      0},  {0x86, 0x10, 0xE4, 0xFF}}},
{{{   -13,     20,     38}, 0, {     0,      0},  {0xD6, 0x31, 0x6C, 0xFF}}},
{{{     0,     18,     33}, 0, {     0,      0},  {0xFE, 0x44, 0x6A, 0xFF}}},
{{{    -3,     34,      0}, 0, {     0,      0},  {0xD3, 0x66, 0x3C, 0xFF}}},
{{{   -19,     38,     -2}, 0, {     0,      0},  {0x1A, 0x72, 0x2F, 0xFF}}},
{{{    13,    -35,     37}, 0, {     0,      0},  {0x0C, 0xBE, 0x6B, 0xFF}}},
{{{    20,    -26,     32}, 0, {     0,      0},  {0x12, 0xEC, 0x7B, 0xFF}}},
};

// 0x0401BC50
static const Vtx luigi_right_hand_peace_shared_dl_vertex_group11[] = {
{{{    90,    -26,     13}, 0, {     0,      0},  {0x53, 0xA3, 0x15, 0xFF}}},
{{{    50,    -42,     -4}, 0, {     0,      0},  {0x0C, 0x87, 0xDE, 0x00}}},
{{{    84,    -19,    -16}, 0, {     0,      0},  {0x1C, 0x85, 0x00, 0x00}}},
};

// 0x0401BC80 - 0x0401BF30
const Gfx luigi_right_hand_peace_shared_dl[] = {
    gsSPVertex(luigi_right_hand_peace_shared_dl_vertex_group1, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSP2Triangles( 2,  4,  3, 0x0,  5,  6,  7, 0x0),
    gsSP2Triangles( 8,  7,  9, 0x0,  7,  6, 10, 0x0),
    gsSP2Triangles( 7, 10,  9, 0x0, 11,  8,  9, 0x0),
    gsSP2Triangles( 7, 12,  5, 0x0, 10, 13, 14, 0x0),
    gsSP2Triangles( 6, 15, 10, 0x0, 10, 14,  9, 0x0),
    gsSPVertex(luigi_right_hand_peace_shared_dl_vertex_group2, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  4, 0x0),
    gsSP2Triangles( 5,  6,  7, 0x0,  8,  0,  9, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 10, 12, 13, 0x0),
    gsSPVertex(luigi_right_hand_peace_shared_dl_vertex_group3, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 7,  6,  8, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles( 9,  8, 10, 0x0,  9, 10, 11, 0x0),
    gsSP1Triangle(12, 13, 14, 0x0),
    gsSPVertex(luigi_right_hand_peace_shared_dl_vertex_group4, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles( 2, 12, 13, 0x0,  3,  5, 12, 0x0),
    gsSP1Triangle(12, 14, 15, 0x0),
    gsSPVertex(luigi_right_hand_peace_shared_dl_vertex_group5, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles( 9, 11, 12, 0x0, 13, 14, 15, 0x0),
    gsSPVertex(luigi_right_hand_peace_shared_dl_vertex_group6, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 4,  3,  6, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles( 4, 10, 11, 0x0, 12, 13, 14, 0x0),
    gsSPVertex(luigi_right_hand_peace_shared_dl_vertex_group7, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9, 10,  7, 0x0),
    gsSP2Triangles(10,  9, 11, 0x0, 12, 13, 14, 0x0),
    gsSPVertex(luigi_right_hand_peace_shared_dl_vertex_group8, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  0, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  3,  2,  7, 0x0),
    gsSP2Triangles( 8,  3,  7, 0x0,  9, 10, 11, 0x0),
    gsSP1Triangle(12, 13, 14, 0x0),
    gsSPVertex(luigi_right_hand_peace_shared_dl_vertex_group9, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 12, 14, 15, 0x0),
    gsSPVertex(luigi_right_hand_peace_shared_dl_vertex_group10, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0,  8, 10, 11, 0x0),
    gsSP2Triangles(12, 13,  9, 0x0, 12,  9,  8, 0x0),
    gsSPVertex(luigi_right_hand_peace_shared_dl_vertex_group11, 3, 0),
    gsSP1Triangle( 0,  1,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x0401BF30 - 0x0401BF50
const Gfx luigi_right_hand_peace[] = {
    gsSPLight(&luigi_white_lights_group.l, 1),
    gsSPLight(&luigi_white_lights_group.a, 2),
    gsSPDisplayList(luigi_right_hand_peace_shared_dl),
    gsSPEndDisplayList(),
};

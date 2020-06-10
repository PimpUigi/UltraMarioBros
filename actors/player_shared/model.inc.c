// 0x04000030 # white
static const Lights1 player_lights_group = gdSPDefLights1(
    0x7f, 0x7f, 0x7f,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x04000090
ALIGNED8 static const u8 player_texture_metal[] = {
#include "actors/player_shared/player_metal.rgba16.inc.c"
};

// 0x04001090
ALIGNED8 static const u8 player_texture_yellow_button[] = {
#include "actors/player_shared/player_overalls_button.rgba16.inc.c"
};

// 0x04002090
ALIGNED8 static const u8 player_texture_hair_sideburn[] = {
#include "actors/player_shared/player_sideburn.rgba16.inc.c"
};

// 0x04002890
ALIGNED8 static const u8 player_texture_mustache[] = {
#include "actors/player_shared/player_mustache.rgba16.inc.c"
};

// 0x04003090
ALIGNED8 static const u8 player_texture_eyes_front[] = {
#include "actors/player_shared/player_eyes_center.rgba16.inc.c"
};

// 0x04003890
ALIGNED8 static const u8 player_texture_eyes_half_closed[] = {
#include "actors/player_shared/player_eyes_half_closed.rgba16.inc.c"
};

// 0x04004090
ALIGNED8 static const u8 player_texture_eyes_closed[] = {
#include "actors/player_shared/player_eyes_closed.rgba16.inc.c"
};

// 0x04005890
ALIGNED8 static const u8 player_texture_eyes_right[] = {
#include "actors/player_shared/player_eyes_left_unused.rgba16.inc.c"
};

// 0x04006090
ALIGNED8 static const u8 player_texture_eyes_left[] = {
#include "actors/player_shared/player_eyes_right_unused.rgba16.inc.c"
};

// 0x04006890
ALIGNED8 static const u8 player_texture_eyes_up[] = {
#include "actors/player_shared/player_eyes_up_unused.rgba16.inc.c"
};

// 0x04007090
ALIGNED8 static const u8 player_texture_eyes_down[] = {
#include "actors/player_shared/player_eyes_down_unused.rgba16.inc.c"
};

// 0x04007890
ALIGNED8 static const u8 player_texture_eyes_dead[] = {
#include "actors/player_shared/player_eyes_dead.rgba16.inc.c"
};

// 0x04008090
ALIGNED8 static const u8 player_texture_wings_half_1[] = {
#include "actors/player_shared/player_wing.rgba16.inc.c"
};

// 0x04009090
ALIGNED8 static const u8 player_texture_wings_half_2[] = {
#include "actors/player_shared/player_wing_tip.rgba16.inc.c"
};

// 0x0400A090
ALIGNED8 static const u8 player_texture_metal_wings_half_1[] = {
#include "actors/player_shared/player_metal_wing_unused.rgba16.inc.c"
};

// 0x0400B090
ALIGNED8 static const u8 player_texture_metal_wings_half_2[] = {
#include "actors/player_shared/player_metal_wing_tip_unused.rgba16.inc.c"
};


// 0x0401C940
static const Vtx player_wings_half_1_dl_vertex[] = {
    {{{  -105,    212,      0}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{  -105,      0,      0}, 0, {     0,   2012}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{     0,      0,      0}, 0, {   990,   2012}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{     0,    212,      0}, 0, {   990,      0}, {0x00, 0x00, 0x7f, 0xff}}},
};

// 0x0401C980
static const Vtx player_wings_half_2_dl_vertex[] = {
    {{{     0,      0,      0}, 0, {     0,   2012}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   106,    212,      0}, 0, {   990,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{     0,    212,      0}, 0, {     0,      0}, {0x00, 0x00, 0x7f, 0xff}}},
    {{{   106,      0,      0}, 0, {   990,   2012}, {0x00, 0x00, 0x7f, 0xff}}},
};

// 0x0401C9C0 - 0x0401C9E0
const Gfx player_wings_half_1_dl[] = {
    gsSPVertex(player_wings_half_1_dl_vertex, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSPEndDisplayList(),
};

// 0x0401C9E0 - 0x0401CA00
const Gfx player_wings_half_2_dl[] = {
    gsSPVertex(player_wings_half_2_dl_vertex, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPEndDisplayList(),
};

// 0x0401CA00 - 0x0401CAB8
const Gfx player_cap_wings[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPLight(&player_lights_group.l, 1),
    gsSPLight(&player_lights_group.a, 2),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_wings_half_1),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(player_wings_half_1_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_wings_half_2),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(player_wings_half_2_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x0401CAB8 - 0x0401CB70
const Gfx player_cap_wings_transparent[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALFADEA, G_CC_DECALFADEA),
    gsSPClearGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPLight(&player_lights_group.l, 1),
    gsSPLight(&player_lights_group.a, 2),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_wings_half_1),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(player_wings_half_1_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_wings_half_2),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(player_wings_half_2_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADEFADEA, G_CC_SHADEFADEA),
    gsSPSetGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};


// 0x0401CB70 - 0x0401CC28
const Gfx player_metal_cap_wings[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
    gsSPClearGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPLight(&player_lights_group.l, 1),
    gsSPLight(&player_lights_group.a, 2),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_metal_wings_half_1),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(player_wings_half_1_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_metal_wings_half_2),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(player_wings_half_2_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x0401CC28 - 0x0401CD20
const Gfx player_metal_cap_wings_transparent[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_GEN),
    gsSPTexture(0x0F80, 0x07C0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineMode(G_CC_DECALFADEA, G_CC_DECALFADEA),
    gsSPClearGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 6, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_metal_wings_half_1),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(player_wings_half_1_dl),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, player_texture_metal_wings_half_2),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPDisplayList(player_wings_half_2_dl),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_CULL_BACK | G_SHADING_SMOOTH),
    gsDPSetCombineMode(G_CC_DECALFADE, G_CC_DECALFADE),
    gsDPLoadTextureBlock(player_texture_metal, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTexture(0x0F80, 0x07C0, 0, G_TX_RENDERTILE, G_ON),
    gsSPEndDisplayList(),
};

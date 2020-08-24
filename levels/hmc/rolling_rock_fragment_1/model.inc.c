// 0x07023C70 - 0x07023C88
static const Lights1 hmc_seg7_lights_07023C70 = gdSPDefLights1(
    0x79, 0x79, 0x79,  
    0xff, 0xff, 0xff,   0x28, 0x28, 0x28
);

// 0x07023C88 - 0x07023D48
static const Vtx hmc_seg7_vertex_07023C88[] = {
    {{{   -91,      0,    -45}, 0, {   -22,   4380}, {0x7e, 0x7e, 0x7e,  0xff}}},
    {{{   -73,    -53,     46}, 0, {   158,   3308}, {0x8c, 0x8c, 0x8c,  0xff}}},
    {{{   -32,     24,     51}, 0, {  -194,   2768}, {0x5f, 0x5f, 0x5f,  0xff}}},
    {{{     0,      0,   -101}, 0, {   426,   5632}, {0x88, 0x88, 0x88,  0xff}}},
    {{{    74,     54,    -45}, 0, {  1058,   4388}, {0x6d, 0x6d, 0x6d,  0xff}}},
    {{{   -32,     24,     51}, 0, {  1634,   2768}, {0x5f, 0x5f, 0x5f,  0xff}}},
    {{{    28,     87,     46}, 0, {  1246,   3284}, {0x3a, 0x3a, 0x3a,  0xff}}},
    {{{    92,      0,     46}, 0, {   874,   3300}, {0x8b, 0x8b, 0x8b,  0xff}}},
    {{{   -41,    -67,    -45}, 0, {   272,   4428}, {0xbd, 0xbd, 0xbd,  0xff}}},
    {{{    37,    -80,     29}, 0, {   546,   3484}, {0x49, 0x49, 0x49,  0xff}}},
    {{{    66,    -59,    -28}, 0, {   660,   4196}, {0x9a, 0x9a, 0x9a,  0xff}}},
    {{{     0,      0,    102}, 0, {   426,   2044}, {0x7c, 0x7c, 0x7c,  0xff}}},
};

// 0x07023D48 - 0x07023E10
static const Gfx hmc_seg7_dl_07023D48[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, hmc_seg7_texture_07004800),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 64 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&hmc_seg7_lights_07023C70.l, 1),
    gsSPLight(&hmc_seg7_lights_07023C70.a, 2),
    gsSPVertex(hmc_seg7_vertex_07023C88, 12, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  2,  3,  0, 0x0),
    gsSP2Triangles( 2,  4,  3, 0x0,  5,  6,  4, 0x0),
    gsSP2Triangles( 4,  6,  7, 0x0,  3,  8,  0, 0x0),
    gsSP2Triangles( 8,  9,  1, 0x0, 10,  7,  9, 0x0),
    gsSP2Triangles( 1,  0,  8, 0x0,  3, 10,  8, 0x0),
    gsSP2Triangles( 3,  4, 10, 0x0,  9,  8, 10, 0x0),
    gsSP2Triangles(11,  9,  7, 0x0, 11,  7,  6, 0x0),
    gsSP2Triangles(11,  1,  9, 0x0, 11,  2,  1, 0x0),
    gsSP2Triangles(11,  6,  2, 0x0,  7, 10,  4, 0x0),
    gsSPEndDisplayList(),
};

// 0x07023E10 - 0x07023EB8
const Gfx hmc_seg7_dl_07023E10[] = {
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_2CYCLE),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetDepthSource(G_ZS_PIXEL),
    gsDPSetFogColor(0, 0, 0, 255),
    gsSPFogPosition(960, 1000),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_PASS2),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (64 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(hmc_seg7_dl_07023D48),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_NOOP2),
    gsSPClearGeometryMode(G_FOG),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPEndDisplayList(),
};

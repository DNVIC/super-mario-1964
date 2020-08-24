// Flyguy

// ???
UNUSED static const u64 flyguy_unused_1 = 0;

// 0x0800E088
ALIGNED8 static const u8 flyguy_seg8_texture_0800E088[] = {
#include "actors/flyguy/flyguy_cloth_wrinkle.rgba16.inc.c"
};

// 0x0800F088
ALIGNED8 static const u8 flyguy_seg8_texture_0800F088[] = {
#include "actors/flyguy/flyguy_face.rgba16.inc.c"
};

// 0x0800F888
ALIGNED8 static const u8 flyguy_seg8_texture_0800F888[] = {
#include "actors/flyguy/flyguy_propeller.ia16.inc.c"
};

// Unreferenced light group
UNUSED static const Lights1 flyguy_lights_unused1 = gdSPDefLights1(
    0x3f, 0x3f, 0x3f, 
    0xff, 0xff, 0xff,  0x28, 0x28, 0x28
);

// 0x080100A0
static const Lights1 flyguy_seg8_lights_080100A0 = gdSPDefLights1(
    0x1b, 0x1b, 0x1b, 
    0x6f, 0x6f, 0x6f,  0x28, 0x28, 0x28
);

// 0x080100B8
static const Lights1 flyguy_seg8_lights_080100B8 = gdSPDefLights1(
    0x28, 0x28, 0x28, 
    0xa3, 0xa3, 0xa3,  0x28, 0x28, 0x28
);

// Unreferenced light group
UNUSED static const Lights1 flyguy_lights_unused2 = gdSPDefLights1(
    0x24, 0x24, 0x24, 
    0x93, 0x93, 0x93,  0x28, 0x28, 0x28
);

// Unreferenced light group
UNUSED static const Lights1 flyguy_lights_unused3 = gdSPDefLights1(
    0xf, 0xf, 0xf, 
    0x3b, 0x3b, 0x3b,  0x28, 0x28, 0x28
);

// Unreferenced light group
UNUSED static const Lights1 flyguy_lights_unused4 = gdSPDefLights1(
    0x3f, 0x3f, 0x3f, 
    0xff, 0xff, 0xff,  0x28, 0x28, 0x28
);

// Unreferenced light group
UNUSED static const Lights1 flyguy_lights_unused5 = gdSPDefLights1(
    0x0, 0x0, 0x0, 
    0x0, 0x0, 0x0,  0x28, 0x28, 0x28
);

// 0x08010130
static const Vtx flyguy_seg8_vertex_08010130[] = {
    {{{    83,    -22,     14}, 0, {     0,      0}, {0x43, 0x43, 0x43,  0x00}}},
    {{{    83,      1,     40}, 0, {     0,      0}, {0x75, 0x75, 0x75,  0x00}}},
    {{{     5,     18,     30}, 0, {     0,      0}, {0x9f, 0x9f, 0x9f,  0x00}}},
    {{{    83,    -22,    -14}, 0, {     0,      0}, {0x76, 0x76, 0x76,  0xff}}},
    {{{     3,      3,      0}, 0, {     0,      0}, {0x73, 0x73, 0x73,  0xff}}},
    {{{     5,     18,    -30}, 0, {     0,      0}, {0xb9, 0xb9, 0xb9,  0xff}}},
    {{{    82,     19,    -44}, 0, {     0,      0}, {0x31, 0x31, 0x31,  0xff}}},
    {{{     8,     31,    -34}, 0, {     0,      0}, {0x32, 0x32, 0x32,  0xff}}},
    {{{     8,     31,     34}, 0, {     0,      0}, {0x32, 0x32, 0x32,  0xff}}},
    {{{    82,     19,     44}, 0, {     0,      0}, {0x31, 0x31, 0x31,  0xff}}},
    {{{   -24,     40,      0}, 0, {     0,      0}, {0x33, 0x33, 0x33,  0xff}}},
    {{{    83,      1,    -40}, 0, {     0,      0}, {0x83, 0x83, 0x83,  0xff}}},
    {{{    82,     19,    -44}, 0, {     0,      0}, {0x86, 0x86, 0x86,  0xff}}},
    {{{   107,     14,    -20}, 0, {     0,      0}, {0xb1, 0xb1, 0xb1,  0xff}}},
    {{{   107,     14,     20}, 0, {     0,      0}, {0x87, 0x87, 0x87,  0xff}}},
    {{{    82,     19,     44}, 0, {     0,      0}, {0x80, 0x80, 0x80,  0xff}}},
};

// 0x08010230
static const Vtx flyguy_seg8_vertex_08010230[] = {
    {{{    82,     19,     44}, 0, {     0,      0}, {0x31, 0x31, 0x31,  0xff}}},
    {{{   107,     14,     20}, 0, {     0,      0}, {0x31, 0x31, 0x31,  0x00}}},
    {{{   107,     14,    -20}, 0, {     0,      0}, {0x31, 0x31, 0x31,  0x00}}},
    {{{    82,     19,    -44}, 0, {     0,      0}, {0x31, 0x31, 0x31,  0xff}}},
    {{{    83,      1,     40}, 0, {     0,      0}, {0x75, 0x75, 0x75,  0xff}}},
    {{{   103,     -2,     20}, 0, {     0,      0}, {0x73, 0x73, 0x73,  0xff}}},
    {{{   107,     14,     20}, 0, {     0,      0}, {0x87, 0x87, 0x87,  0xff}}},
    {{{    83,    -22,    -14}, 0, {     0,      0}, {0x76, 0x76, 0x76,  0xff}}},
    {{{   103,     -2,    -20}, 0, {     0,      0}, {0xa9, 0xa9, 0xa9,  0xff}}},
    {{{    83,    -22,     14}, 0, {     0,      0}, {0x43, 0x43, 0x43,  0xff}}},
    {{{   107,     14,    -20}, 0, {     0,      0}, {0xb1, 0xb1, 0xb1,  0xff}}},
    {{{    83,      1,    -40}, 0, {     0,      0}, {0x83, 0x83, 0x83,  0xff}}},
    {{{     8,     31,     34}, 0, {     0,      0}, {0xb8, 0xb8, 0xb8,  0xff}}},
    {{{   -24,     40,      0}, 0, {     0,      0}, {0x57, 0x57, 0x57,  0xff}}},
    {{{   -27,     23,      0}, 0, {     0,      0}, {0x71, 0x71, 0x71,  0xff}}},
    {{{     5,     18,     30}, 0, {     0,      0}, {0x9f, 0x9f, 0x9f,  0xff}}},
};

// 0x08010330
static const Vtx flyguy_seg8_vertex_08010330[] = {
    {{{     5,     18,     30}, 0, {     0,      0}, {0x9f, 0x9f, 0x9f,  0xff}}},
    {{{     3,      3,      0}, 0, {     0,      0}, {0x73, 0x73, 0x73,  0x00}}},
    {{{    83,    -22,     14}, 0, {     0,      0}, {0x43, 0x43, 0x43,  0x00}}},
    {{{    83,      1,    -40}, 0, {     0,      0}, {0x83, 0x83, 0x83,  0xff}}},
    {{{    83,    -22,    -14}, 0, {     0,      0}, {0x76, 0x76, 0x76,  0xff}}},
    {{{     5,     18,    -30}, 0, {     0,      0}, {0xb9, 0xb9, 0xb9,  0xff}}},
    {{{   103,     -2,     20}, 0, {     0,      0}, {0x73, 0x73, 0x73,  0xff}}},
    {{{    83,      1,     40}, 0, {     0,      0}, {0x75, 0x75, 0x75,  0xff}}},
    {{{   103,     -2,    -20}, 0, {     0,      0}, {0xa9, 0xa9, 0xa9,  0xff}}},
    {{{   -27,     23,      0}, 0, {     0,      0}, {0x71, 0x71, 0x71,  0xff}}},
    {{{    82,     19,     44}, 0, {     0,      0}, {0x80, 0x80, 0x80,  0xff}}},
    {{{     8,     31,     34}, 0, {     0,      0}, {0xb8, 0xb8, 0xb8,  0xff}}},
    {{{     8,     31,    -34}, 0, {     0,      0}, {0xc3, 0xc3, 0xc3,  0xff}}},
    {{{    82,     19,    -44}, 0, {     0,      0}, {0x86, 0x86, 0x86,  0xff}}},
    {{{   -24,     40,      0}, 0, {     0,      0}, {0x71, 0x71, 0x71,  0xff}}},
    {{{   107,     14,    -20}, 0, {     0,      0}, {0xb1, 0xb1, 0xb1,  0xff}}},
};

// 0x08010430
static const Vtx flyguy_seg8_vertex_08010430[] = {
    {{{   103,     -2,     20}, 0, {     0,      0}, {0x73, 0x73, 0x73,  0xff}}},
    {{{   107,     14,    -20}, 0, {     0,      0}, {0xb1, 0xb1, 0xb1,  0x00}}},
    {{{   107,     14,     20}, 0, {     0,      0}, {0x87, 0x87, 0x87,  0x00}}},
};

// 0x08010460
static const Vtx flyguy_seg8_vertex_08010460[] = {
    {{{   107,     14,    -20}, 0, {     0,      0}, {0xb1, 0xb1, 0xb1,  0x00}}},
    {{{   107,     14,     20}, 0, {     0,      0}, {0x87, 0x87, 0x87,  0x00}}},
    {{{   103,     -2,     20}, 0, {     0,      0}, {0x73, 0x73, 0x73,  0x00}}},
    {{{   103,     -2,    -20}, 0, {     0,      0}, {0xa9, 0xa9, 0xa9,  0xff}}},
    {{{   -27,     23,      0}, 0, {     0,      0}, {0x71, 0x71, 0x71,  0xff}}},
    {{{     5,     18,     30}, 0, {     0,      0}, {0x9f, 0x9f, 0x9f,  0xff}}},
    {{{     8,     31,     34}, 0, {     0,      0}, {0xb8, 0xb8, 0xb8,  0xff}}},
    {{{   -24,     40,      0}, 0, {     0,      0}, {0x57, 0x57, 0x57,  0xff}}},
    {{{    83,    -22,    -14}, 0, {     0,      0}, {0x76, 0x76, 0x76,  0xff}}},
    {{{    83,    -22,     14}, 0, {     0,      0}, {0x43, 0x43, 0x43,  0xff}}},
    {{{     3,      3,      0}, 0, {     0,      0}, {0x73, 0x73, 0x73,  0xff}}},
    {{{    82,     19,     44}, 0, {     0,      0}, {0x80, 0x80, 0x80,  0xff}}},
    {{{    83,      1,     40}, 0, {     0,      0}, {0x75, 0x75, 0x75,  0xff}}},
    {{{     8,     31,    -34}, 0, {     0,      0}, {0xc3, 0xc3, 0xc3,  0xff}}},
    {{{    82,     19,    -44}, 0, {     0,      0}, {0x86, 0x86, 0x86,  0xff}}},
    {{{    83,      1,    -40}, 0, {     0,      0}, {0x83, 0x83, 0x83,  0xff}}},
};

// 0x08010560
static const Vtx flyguy_seg8_vertex_08010560[] = {
    {{{     8,     31,    -34}, 0, {     0,      0}, {0xc3, 0xc3, 0xc3,  0xff}}},
    {{{    83,      1,    -40}, 0, {     0,      0}, {0x83, 0x83, 0x83,  0x00}}},
    {{{     5,     18,    -30}, 0, {     0,      0}, {0xb9, 0xb9, 0xb9,  0x00}}},
    {{{     3,      3,      0}, 0, {     0,      0}, {0x73, 0x73, 0x73,  0xff}}},
    {{{   -27,     23,      0}, 0, {     0,      0}, {0x71, 0x71, 0x71,  0xff}}},
    {{{     5,     18,     30}, 0, {     0,      0}, {0x9f, 0x9f, 0x9f,  0xff}}},
    {{{    83,    -22,     14}, 0, {     0,      0}, {0x43, 0x43, 0x43,  0xff}}},
    {{{   103,     -2,     20}, 0, {     0,      0}, {0x73, 0x73, 0x73,  0xff}}},
    {{{    83,      1,     40}, 0, {     0,      0}, {0x75, 0x75, 0x75,  0xff}}},
    {{{   103,     -2,    -20}, 0, {     0,      0}, {0xa9, 0xa9, 0xa9,  0xff}}},
    {{{    83,    -22,    -14}, 0, {     0,      0}, {0x76, 0x76, 0x76,  0xff}}},
    {{{   -24,     40,      0}, 0, {     0,      0}, {0x71, 0x71, 0x71,  0xff}}},
    {{{   107,     14,     20}, 0, {     0,      0}, {0x87, 0x87, 0x87,  0xff}}},
    {{{   107,     14,    -20}, 0, {     0,      0}, {0xb1, 0xb1, 0xb1,  0xff}}},
};

// 0x08010640
static const Vtx flyguy_seg8_vertex_08010640[] = {
    {{{    82,     19,     44}, 0, {     0,      0}, {0x31, 0x31, 0x31,  0xff}}},
    {{{   107,     14,     20}, 0, {     0,      0}, {0x31, 0x31, 0x31,  0x00}}},
    {{{   107,     14,    -20}, 0, {     0,      0}, {0x31, 0x31, 0x31,  0x00}}},
    {{{    82,     19,    -44}, 0, {     0,      0}, {0x31, 0x31, 0x31,  0xff}}},
    {{{    83,      1,    -40}, 0, {     0,      0}, {0x83, 0x83, 0x83,  0xff}}},
    {{{    82,     19,    -44}, 0, {     0,      0}, {0x86, 0x86, 0x86,  0xff}}},
    {{{   107,     14,    -20}, 0, {     0,      0}, {0xb1, 0xb1, 0xb1,  0xff}}},
    {{{   107,     14,     20}, 0, {     0,      0}, {0x87, 0x87, 0x87,  0xff}}},
    {{{    82,     19,     44}, 0, {     0,      0}, {0x80, 0x80, 0x80,  0xff}}},
    {{{    83,      1,     40}, 0, {     0,      0}, {0x75, 0x75, 0x75,  0xff}}},
    {{{     8,     31,    -34}, 0, {     0,      0}, {0x32, 0x32, 0x32,  0xff}}},
    {{{   -24,     40,      0}, 0, {     0,      0}, {0x33, 0x33, 0x33,  0xff}}},
    {{{     8,     31,     34}, 0, {     0,      0}, {0x32, 0x32, 0x32,  0xff}}},
    {{{     5,     18,     30}, 0, {     0,      0}, {0x9f, 0x9f, 0x9f,  0xff}}},
    {{{     3,      3,      0}, 0, {     0,      0}, {0x73, 0x73, 0x73,  0xff}}},
    {{{    83,    -22,     14}, 0, {     0,      0}, {0x43, 0x43, 0x43,  0xff}}},
};

// 0x08010740
static const Vtx flyguy_seg8_vertex_08010740[] = {
    {{{     5,     18,    -30}, 0, {     0,      0}, {0xb9, 0xb9, 0xb9,  0xff}}},
    {{{    83,      1,    -40}, 0, {     0,      0}, {0x83, 0x83, 0x83,  0x00}}},
    {{{    83,    -22,    -14}, 0, {     0,      0}, {0x76, 0x76, 0x76,  0x00}}},
};

// 0x08010770
static const Vtx flyguy_seg8_vertex_08010770[] = {
    {{{   -20,    -66,    -34}, 0, {     0,      0}, {0x2b, 0x2b, 0x2b,  0x00}}},
    {{{    40,    -66,      0}, 0, {     0,      0}, {0x2b, 0x2b, 0x2b,  0x00}}},
    {{{     0,    -66,      0}, 0, {     0,      0}, {0x2b, 0x2b, 0x2b,  0x00}}},
    {{{    40,    -66,      0}, 0, {     0,      0}, {0x4a, 0x4a, 0x4a,  0xff}}},
    {{{   -20,    -66,    -34}, 0, {     0,      0}, {0x4a, 0x4a, 0x4a,  0xff}}},
    {{{     0,    133,      0}, 0, {     0,      0}, {0x4a, 0x4a, 0x4a,  0xff}}},
    {{{   -20,    -66,     34}, 0, {     0,      0}, {0x2b, 0x2b, 0x2b,  0xff}}},
    {{{   -20,    -66,    -34}, 0, {     0,      0}, {0x2f, 0x2f, 0x2f,  0xff}}},
    {{{   -20,    -66,     34}, 0, {     0,      0}, {0x2f, 0x2f, 0x2f,  0xff}}},
    {{{     0,    133,      0}, 0, {     0,      0}, {0x2f, 0x2f, 0x2f,  0xff}}},
    {{{   -20,    -66,     34}, 0, {     0,      0}, {0x3d, 0x3d, 0x3d,  0xff}}},
    {{{    40,    -66,      0}, 0, {     0,      0}, {0x3d, 0x3d, 0x3d,  0xff}}},
    {{{     0,    133,      0}, 0, {     0,      0}, {0x3d, 0x3d, 0x3d,  0xff}}},
};

// 0x08010840 - 0x08010968
const Gfx flyguy_seg8_dl_08010840[] = {
    gsSPLight(&flyguy_seg8_lights_080100A0.l, 1),
    gsSPLight(&flyguy_seg8_lights_080100A0.a, 2),
    gsSPVertex(flyguy_seg8_vertex_08010130, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  6,  8,  9, 0x0),
    gsSP2Triangles( 7, 10,  8, 0x0, 11, 12, 13, 0x0),
    gsSP1Triangle(14, 15,  1, 0x0),
    gsSPVertex(flyguy_seg8_vertex_08010230, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  7,  8,  5, 0x0),
    gsSP2Triangles( 7,  5,  9, 0x0, 10,  8, 11, 0x0),
    gsSP2Triangles(12, 13, 14, 0x0, 12, 14, 15, 0x0),
    gsSPVertex(flyguy_seg8_vertex_08010330, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 2,  6,  7, 0x0,  3,  8,  4, 0x0),
    gsSP2Triangles( 1,  9,  5, 0x0,  0,  9,  1, 0x0),
    gsSP2Triangles( 0,  7, 10, 0x0,  0, 10, 11, 0x0),
    gsSP2Triangles( 3,  5, 12, 0x0,  3, 12, 13, 0x0),
    gsSP2Triangles( 1,  4,  2, 0x0, 14, 12,  5, 0x0),
    gsSP2Triangles(14,  5,  9, 0x0,  6,  8, 15, 0x0),
    gsSPVertex(flyguy_seg8_vertex_08010430, 3, 0),
    gsSP1Triangle( 0,  1,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x08010968 - 0x08010A90
const Gfx flyguy_seg8_dl_08010968[] = {
    gsSPLight(&flyguy_seg8_lights_080100A0.l, 1),
    gsSPLight(&flyguy_seg8_lights_080100A0.a, 2),
    gsSPVertex(flyguy_seg8_vertex_08010460, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0, 11,  6,  5, 0x0),
    gsSP2Triangles(11,  5, 12, 0x0, 13, 14, 15, 0x0),
    gsSPVertex(flyguy_seg8_vertex_08010560, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  2, 0x0),
    gsSP2Triangles( 5,  4,  3, 0x0,  6,  7,  8, 0x0),
    gsSP2Triangles( 1,  9, 10, 0x0,  5,  6,  8, 0x0),
    gsSP2Triangles(10,  3,  2, 0x0,  2,  4, 11, 0x0),
    gsSP2Triangles( 2, 11,  0, 0x0,  8,  7, 12, 0x0),
    gsSP2Triangles(10,  9,  7, 0x0, 10,  7,  6, 0x0),
    gsSP1Triangle(13,  9,  1, 0x0),
    gsSPVertex(flyguy_seg8_vertex_08010640, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0,  3, 10, 12, 0x0),
    gsSP2Triangles( 3, 12,  0, 0x0, 13, 14, 15, 0x0),
    gsSPVertex(flyguy_seg8_vertex_08010740, 3, 0),
    gsSP1Triangle( 0,  1,  2, 0x0),
    gsSPEndDisplayList(),
};

// 0x08010A90 - 0x08010AE0
const Gfx flyguy_seg8_dl_08010A90[] = {
    gsSPLight(&flyguy_seg8_lights_080100B8.l, 1),
    gsSPLight(&flyguy_seg8_lights_080100B8.a, 2),
    gsSPVertex(flyguy_seg8_vertex_08010770, 13, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  0,  2, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles( 1,  6,  2, 0x0, 10, 11, 12, 0x0),
    gsSPEndDisplayList(),
};

// 0x08010AE0
static const Lights1 flyguy_seg8_lights_08010AE0 = gdSPDefLights1(
    0x7f, 0x7f, 0x7f, 
    0xff, 0xff, 0xff,  0x28, 0x28, 0x28
);

// 0x08010AF8
static const Vtx flyguy_seg8_vertex_08010AF8[] = {
    {{{    40,   -104,   -104}, 0, {   990,    990}, {0x2a, 0x2a, 0x2a,  0xff}}},
    {{{    40,    106,    105}, 0, {     0,      0}, {0x2a, 0x2a, 0x2a,  0xff}}},
    {{{    40,   -104,    105}, 0, {     0,    990}, {0x2a, 0x2a, 0x2a,  0xff}}},
    {{{    40,    106,   -104}, 0, {   990,      0}, {0x2a, 0x2a, 0x2a,  0xff}}},
};

// 0x08010B38 - 0x08010B80
const Gfx flyguy_seg8_dl_08010B38[] = {
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, flyguy_seg8_texture_0800F888),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&flyguy_seg8_lights_08010AE0.l, 1),
    gsSPLight(&flyguy_seg8_lights_08010AE0.a, 2),
    gsSPVertex(flyguy_seg8_vertex_08010AF8, 4, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSPEndDisplayList(),
};

// 0x08010B80 - 0x08010BF0
const Gfx flyguy_seg8_dl_08010B80[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsSPClearGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(flyguy_seg8_dl_08010B38),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};

// 0x08010BF0
static const Lights1 flyguy_seg8_lights_08010BF0 = gdSPDefLights1(
    0x7f, 0x7f, 0x7f, 
    0xff, 0xff, 0xff,  0x28, 0x28, 0x28
);

// 0x08010C08
static const Lights1 flyguy_seg8_lights_08010C08 = gdSPDefLights1(
    0x0, 0x0, 0x0, 
    0x0, 0x0, 0x0,  0x28, 0x28, 0x28
);

// 0x08010C20
static const Lights1 flyguy_seg8_lights_08010C20 = gdSPDefLights1(
    0x27, 0x27, 0x27, 
    0x4e, 0x4e, 0x4e,  0x28, 0x28, 0x28
);

// 0x08010C38
static const Vtx flyguy_seg8_vertex_08010C38[] = {
    {{{   108,    123,      0}, 0, {   484,    568}, {0x7c, 0x7c, 0x7c,  0xff}}},
    {{{    56,    100,     68}, 0, {   828,    856}, {0x8c, 0x8c, 0x8c,  0xff}}},
    {{{   193,    100,     75}, 0, {   836,    132}, {0x44, 0x44, 0x44,  0xff}}},
    {{{   126,     73,    100}, 0, {   974,    492}, {0x83, 0x83, 0x83,  0xff}}},
    {{{    30,    109,      0}, 0, {   498,    982}, {0x2c, 0x2c, 0x2c,  0xff}}},
    {{{   221,    126,      0}, 0, {   462,    -24}, {0x3c, 0x3c, 0x3c,  0xff}}},
    {{{    56,    100,    -67}, 0, {   162,    872}, {0xae, 0xae, 0xae,  0xff}}},
    {{{   193,    100,    -74}, 0, {   102,    148}, {0x5c, 0x5c, 0x5c,  0xff}}},
    {{{   126,     73,    -99}, 0, {   -10,    516}, {0x87, 0x87, 0x87,  0xff}}},
};

// 0x08010CC8
static const Vtx flyguy_seg8_vertex_08010CC8[] = {
    {{{   -49,    -81,    -83}, 0, {  1756,    758}, {0xb8, 0xb8, 0xb8,  0xff}}},
    {{{   -28,   -165,      0}, 0, {  1144,    820}, {0x80, 0x80, 0x80,  0xff}}},
    {{{   -49,    -81,     84}, 0, {   528,    758}, {0x8e, 0x8e, 0x8e,  0xff}}},
    {{{   -48,     72,     90}, 0, {  4212,    490}, {0x6d, 0x6d, 0x6d,  0xff}}},
    {{{   -60,    113,      0}, 0, {  3492,    468}, {0x5f, 0x5f, 0x5f,  0xff}}},
    {{{   -48,     72,    -89}, 0, {  2776,    490}, {0x88, 0x88, 0x88,  0xff}}},
};

// 0x08010D28
static const Vtx flyguy_seg8_vertex_08010D28[] = {
    {{{    96,      0,     90}, 0, {  1540,    424}, {0x2d, 0x2d, 0x2d,  0xff}}},
    {{{   117,    -60,     68}, 0, {  1524,    604}, {0xaa, 0xaa, 0xaa,  0xff}}},
    {{{   142,     -6,    103}, 0, {  1308,    446}, {0x7a, 0x7a, 0x7a,  0xff}}},
    {{{   204,   -140,      0}, 0, {  1180,    840}, {0x32, 0x32, 0x32,  0xff}}},
    {{{   171,    -48,     90}, 0, {  1216,    570}, {0x6e, 0x6e, 0x6e,  0xff}}},
    {{{   162,   -107,      0}, 0, {  1356,    744}, {0x7c, 0x7c, 0x7c,  0xff}}},
    {{{   239,    -50,     62}, 0, {   860,    578}, {0x82, 0x82, 0x82,  0xff}}},
    {{{   232,     24,     76}, 0, {   780,    360}, {0x40, 0x40, 0x40,  0xff}}},
    {{{   193,    100,     75}, 0, {   876,    136}, {0x44, 0x44, 0x44,  0xff}}},
    {{{   126,     73,    100}, 0, {  1272,    212}, {0x83, 0x83, 0x83,  0xff}}},
    {{{   117,    -60,    -67}, 0, {  1524,    604}, {0xbf, 0xbf, 0xbf,  0xff}}},
    {{{   142,     -6,   -102}, 0, {  1308,    446}, {0x7c, 0x7c, 0x7c,  0xff}}},
    {{{   171,    -48,    -89}, 0, {  1216,    570}, {0x78, 0x78, 0x78,  0xff}}},
    {{{    96,      0,    -89}, 0, {  1540,    424}, {0x2e, 0x2e, 0x2e,  0xff}}},
};

// 0x08010E08
static const Vtx flyguy_seg8_vertex_08010E08[] = {
    {{{    16,     64,     88}, 0, {  -556,    338}, {0x8d, 0x8d, 0x8d,  0xff}}},
    {{{     0,    117,      0}, 0, {  -940,    334}, {0x7e, 0x7e, 0x7e,  0xff}}},
    {{{   -48,     72,     90}, 0, {  -688,    582}, {0x6d, 0x6d, 0x6d,  0xff}}},
    {{{    96,      0,    -89}, 0, {  1540,    424}, {0x2e, 0x2e, 0x2e,  0xff}}},
    {{{   126,     73,    -99}, 0, {  1272,    212}, {0x87, 0x87, 0x87,  0xff}}},
    {{{   142,     -6,   -102}, 0, {  1308,    446}, {0x7c, 0x7c, 0x7c,  0xff}}},
    {{{    56,    100,    -67}, 0, {  1604,    132}, {0xae, 0xae, 0xae,  0xff}}},
    {{{   193,    100,    -74}, 0, {   876,    136}, {0x5c, 0x5c, 0x5c,  0xff}}},
    {{{   232,     24,    -75}, 0, {   780,    360}, {0x58, 0x58, 0x58,  0xff}}},
    {{{   171,    -48,    -89}, 0, {  1216,    570}, {0x78, 0x78, 0x78,  0xff}}},
    {{{   -48,     72,    -89}, 0, {  -688,    582}, {0x88, 0x88, 0x88,  0xff}}},
    {{{   -60,    113,      0}, 0, {  -988,    574}, {0x5f, 0x5f, 0x5f,  0xff}}},
    {{{   -45,    -22,    112}, 0, {     0,    700}, {0xb0, 0xb0, 0xb0,  0xff}}},
    {{{    16,     64,    -87}, 0, {  -556,    338}, {0x9f, 0x9f, 0x9f,  0xff}}},
    {{{    56,    100,    -67}, 0, {  -764,    128}, {0xae, 0xae, 0xae,  0xff}}},
    {{{    56,    100,     68}, 0, {  -764,    128}, {0x8c, 0x8c, 0x8c,  0xff}}},
};

// 0x08010F08
static const Vtx flyguy_seg8_vertex_08010F08[] = {
    {{{     0,    117,      0}, 0, {  -940,    334}, {0x7e, 0x7e, 0x7e,  0xff}}},
    {{{    56,    100,     68}, 0, {  -764,    128}, {0x8c, 0x8c, 0x8c,  0xff}}},
    {{{    30,    109,      0}, 0, {  -852,    218}, {0x2c, 0x2c, 0x2c,  0xff}}},
    {{{    16,     64,    -87}, 0, {  -556,    338}, {0x9f, 0x9f, 0x9f,  0xff}}},
    {{{   -48,     72,    -89}, 0, {  -688,    582}, {0x88, 0x88, 0x88,  0xff}}},
    {{{    56,    100,    -67}, 0, {  -764,    128}, {0xae, 0xae, 0xae,  0xff}}},
    {{{    61,    -61,     82}, 0, {   356,    330}, {0x66, 0x66, 0x66,  0xff}}},
    {{{   162,   -107,      0}, 0, {   788,     -6}, {0x7c, 0x7c, 0x7c,  0xff}}},
    {{{   117,    -60,     68}, 0, {   412,    108}, {0xaa, 0xaa, 0xaa,  0xff}}},
    {{{    96,      0,     90}, 0, {     0,    106}, {0x2d, 0x2d, 0x2d,  0xff}}},
    {{{    69,   -122,      0}, 0, {   784,    384}, {0x39, 0x39, 0x39,  0xff}}},
    {{{   -28,   -165,      0}, 0, {   964,    828}, {0x80, 0x80, 0x80,  0xff}}},
    {{{   -49,    -81,     84}, 0, {   364,    796}, {0x8e, 0x8e, 0x8e,  0xff}}},
    {{{   -45,    -22,    112}, 0, {     0,    700}, {0xb0, 0xb0, 0xb0,  0xff}}},
    {{{    16,     64,     88}, 0, {  -556,    338}, {0x8d, 0x8d, 0x8d,  0xff}}},
    {{{    61,    -61,    -81}, 0, {   356,    330}, {0x78, 0x78, 0x78,  0xff}}},
};

// 0x08011008
static const Vtx flyguy_seg8_vertex_08011008[] = {
    {{{    61,    -61,    -81}, 0, {   356,    330}, {0x78, 0x78, 0x78,  0xff}}},
    {{{   -28,   -165,      0}, 0, {   964,    828}, {0x80, 0x80, 0x80,  0xff}}},
    {{{   -49,    -81,    -83}, 0, {   364,    796}, {0xb8, 0xb8, 0xb8,  0xff}}},
    {{{   162,   -107,      0}, 0, {   788,     -6}, {0x7c, 0x7c, 0x7c,  0xff}}},
    {{{    69,   -122,      0}, 0, {   784,    384}, {0x39, 0x39, 0x39,  0xff}}},
    {{{   -45,    -22,   -111}, 0, {     0,    700}, {0xc3, 0xc3, 0xc3,  0xff}}},
    {{{    96,      0,    -89}, 0, {     0,    106}, {0x2e, 0x2e, 0x2e,  0xff}}},
    {{{   117,    -60,    -67}, 0, {   412,    108}, {0xbf, 0xbf, 0xbf,  0xff}}},
    {{{   -10,    -14,   -111}, 0, {   -48,    552}, {0xc7, 0xc7, 0xc7,  0xff}}},
    {{{   -48,     72,    -89}, 0, {  -688,    582}, {0x88, 0x88, 0x88,  0xff}}},
    {{{    16,     64,    -87}, 0, {  -556,    338}, {0x9f, 0x9f, 0x9f,  0xff}}},
    {{{    61,    -61,     82}, 0, {   716,    492}, {0x66, 0x66, 0x66,  0xff}}},
    {{{    13,     26,    144}, 0, {   496,    630}, {0x2c, 0x2c, 0x2c,  0xff}}},
    {{{   -10,    -14,    112}, 0, {   772,    628}, {0xc1, 0xc1, 0xc1,  0xff}}},
    {{{    16,     64,     88}, 0, {   516,    690}, {0x8d, 0x8d, 0x8d,  0xff}}},
};

// 0x080110F8
static const Vtx flyguy_seg8_vertex_080110F8[] = {
    {{{   -45,    -22,    112}, 0, {     0,    700}, {0xb0, 0xb0, 0xb0,  0xff}}},
    {{{   -10,    -14,    112}, 0, {   -48,    552}, {0xc1, 0xc1, 0xc1,  0xff}}},
    {{{    16,     64,     88}, 0, {  -556,    338}, {0x8d, 0x8d, 0x8d,  0xff}}},
    {{{    61,    -61,     82}, 0, {   356,    330}, {0x66, 0x66, 0x66,  0xff}}},
    {{{    16,     64,    -87}, 0, {  1384,    860}, {0x9f, 0x9f, 0x9f,  0xff}}},
    {{{    13,     26,   -143}, 0, {  1612,    590}, {0x2d, 0x2d, 0x2d,  0xff}}},
    {{{   -10,    -14,   -111}, 0, {  1340,    552}, {0xc7, 0xc7, 0xc7,  0xff}}},
    {{{    61,    -61,    -81}, 0, {  1476,    234}, {0x78, 0x78, 0x78,  0xff}}},
    {{{    16,     64,    -87}, 0, {  -556,    338}, {0x9f, 0x9f, 0x9f,  0xff}}},
    {{{    56,    100,    -67}, 0, {  -764,    128}, {0xae, 0xae, 0xae,  0xff}}},
    {{{    96,      0,    -89}, 0, {     0,    106}, {0x2e, 0x2e, 0x2e,  0xff}}},
    {{{   204,   -140,      0}, 0, {  1180,    840}, {0x32, 0x32, 0x32,  0xff}}},
    {{{   239,    -50,    -61}, 0, {   860,    578}, {0xa8, 0xa8, 0xa8,  0xff}}},
    {{{   256,    -50,      0}, 0, {   772,    578}, {0x73, 0x73, 0x73,  0xff}}},
    {{{   171,    -48,    -89}, 0, {  1216,    570}, {0x78, 0x78, 0x78,  0xff}}},
    {{{   232,     24,    -75}, 0, {   780,    360}, {0x58, 0x58, 0x58,  0xff}}},
};

// 0x080111F8
static const Vtx flyguy_seg8_vertex_080111F8[] = {
    {{{   239,    -50,    -61}, 0, {   860,    578}, {0xa8, 0xa8, 0xa8,  0xff}}},
    {{{   232,     24,    -75}, 0, {   780,    360}, {0x58, 0x58, 0x58,  0xff}}},
    {{{   257,     35,      0}, 0, {   636,    328}, {0x2f, 0x2f, 0x2f,  0xff}}},
    {{{   256,    -50,      0}, 0, {   772,    578}, {0x73, 0x73, 0x73,  0xff}}},
    {{{   193,    100,    -74}, 0, {   876,    136}, {0x5c, 0x5c, 0x5c,  0xff}}},
    {{{   221,    126,      0}, 0, {   688,     62}, {0x3c, 0x3c, 0x3c,  0xff}}},
    {{{   232,     24,     76}, 0, {   780,    360}, {0x40, 0x40, 0x40,  0xff}}},
    {{{   239,    -50,     62}, 0, {   860,    578}, {0x82, 0x82, 0x82,  0xff}}},
    {{{   204,   -140,      0}, 0, {  1180,    840}, {0x32, 0x32, 0x32,  0xff}}},
    {{{   193,    100,     75}, 0, {   876,    136}, {0x44, 0x44, 0x44,  0xff}}},
    {{{    16,     64,     88}, 0, {  1424,    450}, {0x8d, 0x8d, 0x8d,  0xff}}},
    {{{    13,     26,    144}, 0, {   996,    422}, {0x2c, 0x2c, 0x2c,  0xff}}},
    {{{    96,      0,     90}, 0, {  1292,    826}, {0x2d, 0x2d, 0x2d,  0xff}}},
    {{{    61,    -61,     82}, 0, {  1100,    820}, {0x66, 0x66, 0x66,  0xff}}},
};

// 0x080112D8
static const Vtx flyguy_seg8_vertex_080112D8[] = {
    {{{   126,     73,    100}, 0, {  1272,    212}, {0x83, 0x83, 0x83,  0xff}}},
    {{{    56,    100,     68}, 0, {  1604,    132}, {0x8c, 0x8c, 0x8c,  0xff}}},
    {{{    96,      0,     90}, 0, {  1540,    424}, {0x2d, 0x2d, 0x2d,  0xff}}},
    {{{    61,    -61,    -81}, 0, {   824,    208}, {0x78, 0x78, 0x78,  0xff}}},
    {{{    13,     26,   -143}, 0, {  1196,    734}, {0x2d, 0x2d, 0x2d,  0xff}}},
    {{{    96,      0,    -89}, 0, {  1284,    218}, {0x2e, 0x2e, 0x2e,  0xff}}},
    {{{    16,     64,    -87}, 0, {  1516,    656}, {0x9f, 0x9f, 0x9f,  0xff}}},
};

// 0x08011348
static const Vtx flyguy_seg8_vertex_08011348[] = {
    {{{   -48,     72,    -89}, 0, {     0,      0}, {0x88, 0x88, 0x88,  0xff}}},
    {{{   -45,    -22,   -111}, 0, {     0,      0}, {0xc3, 0xc3, 0xc3,  0xff}}},
    {{{   -45,    -22,    112}, 0, {     0,      0}, {0xb0, 0xb0, 0xb0,  0xff}}},
    {{{   -48,     72,     90}, 0, {     0,      0}, {0x6d, 0x6d, 0x6d,  0xff}}},
    {{{   -49,    -81,     84}, 0, {     0,      0}, {0x8e, 0x8e, 0x8e,  0xff}}},
    {{{   -49,    -81,    -83}, 0, {     0,      0}, {0xb8, 0xb8, 0xb8,  0xff}}},
};

// 0x080113A8 - 0x08011420
const Gfx flyguy_seg8_dl_080113A8[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, flyguy_seg8_texture_0800F088),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&flyguy_seg8_lights_08010BF0.l, 1),
    gsSPLight(&flyguy_seg8_lights_08010BF0.a, 2),
    gsSPVertex(flyguy_seg8_vertex_08010C38, 9, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  2, 0x0),
    gsSP2Triangles( 4,  1,  0, 0x0,  2,  5,  0, 0x0),
    gsSP2Triangles( 0,  6,  4, 0x0,  6,  0,  7, 0x0),
    gsSP2Triangles( 7,  8,  6, 0x0,  0,  5,  7, 0x0),
    gsSPEndDisplayList(),
};

// 0x08011420 - 0x080116D0
const Gfx flyguy_seg8_dl_08011420[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, flyguy_seg8_texture_0800E088),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 64 * 32 - 1, CALC_DXT(64, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&flyguy_seg8_lights_08010C08.l, 1),
    gsSPLight(&flyguy_seg8_lights_08010C08.a, 2),
    gsSPVertex(flyguy_seg8_vertex_08010CC8, 6, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSPLight(&flyguy_seg8_lights_08010C20.l, 1),
    gsSPLight(&flyguy_seg8_lights_08010C20.a, 2),
    gsSPVertex(flyguy_seg8_vertex_08010D28, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  1,  3,  4, 0x0),
    gsSP2Triangles( 1,  5,  3, 0x0,  1,  4,  2, 0x0),
    gsSP2Triangles( 4,  3,  6, 0x0,  4,  6,  7, 0x0),
    gsSP2Triangles( 2,  4,  7, 0x0,  2,  8,  9, 0x0),
    gsSP2Triangles( 2,  7,  8, 0x0,  0,  2,  9, 0x0),
    gsSP2Triangles(10, 11, 12, 0x0, 10,  3,  5, 0x0),
    gsSP2Triangles(10, 12,  3, 0x0, 10, 13, 11, 0x0),
    gsSPVertex(flyguy_seg8_vertex_08010E08, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  6,  4, 0x0,  5,  4,  7, 0x0),
    gsSP2Triangles( 7,  8,  5, 0x0,  8,  9,  5, 0x0),
    gsSP2Triangles( 1, 10, 11, 0x0, 11,  2,  1, 0x0),
    gsSP2Triangles( 0,  2, 12, 0x0, 13,  1, 14, 0x0),
    gsSP1Triangle( 1,  0, 15, 0x0),
    gsSPVertex(flyguy_seg8_vertex_08010F08, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  4, 0x0),
    gsSP2Triangles( 0,  2,  5, 0x0,  6,  7,  8, 0x0),
    gsSP2Triangles( 6,  8,  9, 0x0, 10,  7,  6, 0x0),
    gsSP2Triangles(11,  6, 12, 0x0, 13, 12,  6, 0x0),
    gsSP2Triangles( 6, 11, 10, 0x0, 14,  9,  1, 0x0),
    gsSP1Triangle(10, 11, 15, 0x0),
    gsSPVertex(flyguy_seg8_vertex_08011008, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  4, 0x0),
    gsSP2Triangles( 0,  2,  5, 0x0,  0,  6,  7, 0x0),
    gsSP2Triangles( 5,  8,  0, 0x0,  0,  7,  3, 0x0),
    gsSP2Triangles( 5,  9, 10, 0x0,  5, 10,  8, 0x0),
    gsSP2Triangles(11, 12, 13, 0x0, 13, 12, 14, 0x0),
    gsSPVertex(flyguy_seg8_vertex_080110F8, 16, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  6,  5,  7, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0, 11, 12, 13, 0x0),
    gsSP2Triangles(12, 11, 14, 0x0, 15, 12, 14, 0x0),
    gsSPVertex(flyguy_seg8_vertex_080111F8, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  0,  2, 0x0),
    gsSP2Triangles( 1,  4,  5, 0x0,  2,  1,  5, 0x0),
    gsSP2Triangles( 2,  5,  6, 0x0,  7,  3,  2, 0x0),
    gsSP2Triangles( 6,  7,  2, 0x0,  3,  7,  8, 0x0),
    gsSP2Triangles( 5,  9,  6, 0x0, 10, 11, 12, 0x0),
    gsSP1Triangle(11, 13, 12, 0x0),
    gsSPVertex(flyguy_seg8_vertex_080112D8, 7, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP1Triangle( 4,  6,  5, 0x0),
    gsSPEndDisplayList(),
};

// 0x080116D0 - 0x08011710
const Gfx flyguy_seg8_dl_080116D0[] = {
    gsSPLight(&flyguy_seg8_lights_08010C08.l, 1),
    gsSPLight(&flyguy_seg8_lights_08010C08.a, 2),
    gsSPVertex(flyguy_seg8_vertex_08011348, 6, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsSP2Triangles( 1,  4,  2, 0x0,  1,  5,  4, 0x0),
    gsSPEndDisplayList(),
};

// 0x08011710 - 0x08011798
const Gfx flyguy_seg8_dl_08011710[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(flyguy_seg8_dl_080113A8),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, G_TX_RENDERTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 6, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (64 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(flyguy_seg8_dl_08011420),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPDisplayList(flyguy_seg8_dl_080116D0),
    gsSPEndDisplayList(),
};

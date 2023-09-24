#ifndef Z_EN_AN_H
#define Z_EN_AN_H

#include "global.h"

struct EnAn;

typedef void (*EnAnActionFunc)(struct EnAn*, PlayState*);
typedef s32 (*MsgEventFunc)(Actor*, PlayState*);

#define ENAN_GET_8000(thisx) (((thisx)->params & 0x8000) >> 0xF)

typedef struct EnAn {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;
    /* 0x188 */ EnAnActionFunc actionFunc;
    /* 0x18C */ UNK_TYPE1 unk_18C[0x4];
    /* 0x190 */ ColliderCylinder unk_190;
    /* 0x1DC */ char unk_1DC[0x24];                 /* inferred */
    /* 0x200 */ u8 unk_200; // enum?
    /* 0x201 */ char unk_201[3];                    /* maybe part of unk_200[4]? */
    /* 0x204 */ s32* msgEventScript;
    /* 0x208 */ s8 unk_208;
    /* 0x209 */ s8 unk_209;
    /* 0x20A */ s8 unk_20A;
    /* 0x20B */ s8 unk_20B;
    /* 0x20C */ s8 unk_20C;
    /* 0x20D */ char unk_20D[3];                    /* maybe part of unk_20C[4]? */
    /* 0x210 */ s32 msgScriptResumePos;
    /* 0x214 */ s8 unk_214; // curRoom.num
    /* 0x215 */ char unk_215[3];                    /* maybe part of unk_214[4]? */
    /* 0x218 */ Actor* unk_218;                     /* inferred */
    /* 0x21C */ UNK_TYPE1 unk_21C[0x24];                 /* maybe part of unk_218[0x13]? */
    /* 0x240 */ Vec3f unk_240;
    /* 0x24C */ UNK_TYPE1 unk_24C[0xC];
    /* 0x258 */ Vec3s unk_258;
    /* 0x25E */ UNK_TYPE1 unk_25E[0x2];
    /* 0x260 */ UNK_TYPE1 unk_260[0x4];
    /* 0x264 */ Vec3s unk_264[0x15];
    /* 0x2E2 */ Vec3s unk_2E2[0x15];
    /* 0x360 */ u16 unk_360; // flags?
    /* 0x362 */ char unk_362[2];                    /* inferred */
    /* 0x364 */ u8 unk_364;
    /* 0x365 */ char unk_365[3];                    /* maybe part of unk_364[4]? */
    /* 0x368 */ f32 unk_368;                        /* inferred */
    /* 0x36C */ char unk_36C[8];                    /* maybe part of unk_368[3]? */
    /* 0x374 */ f32 unk_374;                        /* inferred */
    /* 0x378 */ char unk_378[4];                    /* inferred */
    /* 0x37C */ s16 unk_37C;                        /* inferred */
    /* 0x37E */ s16 unk_37E;                        /* inferred */
    /* 0x380 */ char unk_380[4];                    /* maybe part of unk_37E[3]? */
    /* 0x384 */ s16 unk_384;                        /* inferred */
    /* 0x386 */ char unk_386[2];                    /* inferred */
    /* 0x388 */ s16 unk_388;                        /* inferred */
    /* 0x38A */ s16 unk_38A;                        /* inferred */
    /* 0x38C */ s16 unk_38C;                        /* inferred */
    /* 0x38E */ s16 unk_38E;                        /* inferred */
    /* 0x390 */ s16 unk_390;                        /* inferred */
    /* 0x392 */ s16 unk_392;                        /* inferred */
    /* 0x394 */ u16 unk_394;
    /* 0x396 */ UNK_TYPE1 unk_396[0x2];
    /* 0x398 */ MsgEventFunc msgEventFunc;
    /* 0x39C */ s32 unk_39C;                        /* inferred */
    /* 0x3A0 */ char unk_3A0[8];                    /* maybe part of unk_39C[3]? */
    /* 0x3A8 */ u32 unk_3A8;                        /* inferred */
    /* 0x3AC */ u32 unk_3AC;                        /* inferred */
    /* 0x3B0 */ s32 unk_3B0;                        /* inferred */
    /* 0x3B4 */ s32 unk_3B4;                        /* inferred */
    /* 0x3B8 */ s32 unk_3B8;
    /* 0x3BC */ char unk_3BC[4];                    /* inferred */
    /* 0x3C0 */ s32 unk_3C0;                        /* inferred */
    /* 0x3C4 */ s32 unk_3C4;
} EnAn; // size = 0x3C8

#endif // Z_EN_AN_H

#ifndef COMMON_H
#define COMMON_H
#include <sys/types.h>
#include <stdbool.h>
#include <libcd.h>
#include <stdint.h>
#include <object.h>
typedef unsigned char   undefined;

enum PadButtons{
    PAD_L1 = 4,
    PAD_R1 = 8,
    PAD_L2 = 1,
    PAD_R2 = 2,
    PAD_SELECT = 0x100,
    PAD_START = 0x800,
    PAD_UP = 0x1000,
    PAD_RIGHT = 0x2000,
    PAD_DOWN = 0x4000,
    PAD_LEFT = 0x8000,
    PAD_TRIANGLE = 0x10,
    PAD_CIRCLE = 0x20,
    PAD_CROSS = 0x40,
    PAD_SQUARE = 0x80
};

extern uint16_t buttonsHeld;
extern uint16_t buttonsHeldPast;
extern uint16_t buttonsPressed;

extern uint16_t buttonsHeld2;
extern uint16_t buttonsHeldPast2;
extern uint16_t buttonsPressed2;

extern uint8_t cursor;
extern char fadeDirection; //0 = done
extern int frameCount;
extern void * freeArcP;

typedef struct {
    int8_t mode;
    int8_t mode2;
    int8_t mode3;
    int8_t mode4;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    int8_t stageId;
    int8_t mid;
    uint8_t startingSong;
    int8_t clear;
    undefined field16_0x10;
    undefined field17_0x11;
    undefined field18_0x12;
    undefined field19_0x13;
    undefined field20_0x14;
    undefined field21_0x15;
    undefined field22_0x16;
    undefined field23_0x17;
    undefined field24_0x18;
    undefined field25_0x19;
    undefined field26_0x1a;
    bool songOff;
    undefined field28_0x1c;
    int8_t point;
    uint8_t spawnFlags;
    uint8_t enableBars;
    struct Object * bossP;
    bool enableBossBars;
    bool sigmaLogo;
    uint8_t slowMotion;
    int8_t exitType; /* 1=Game Over , 2=Exit */
    int8_t var[6];
    uint8_t refights[8];
    int8_t maverickShow;
    undefined field40_0x37;
    int8_t player;
    int8_t lives;
    uint16_t ammoTemp[16];
    uint8_t hpTemp;
    int8_t maxHPs[2];
    int8_t weaponTemp;
    uint8_t armorType;
    uint8_t armors;
    uint8_t clearedStages;
    int8_t maxAmmos[2];
    int8_t tanksAmmo[3];
    int8_t stageSelectMode; /* includes cleared Gate Stages */
    uint8_t gameSpeed;
    uint8_t difficulty;
    uint8_t armorParts;
    uint16_t tanks;
    uint32_t hearts;
    uint32_t parts;
    uint32_t equipedParts[2];
    undefined field60_0x7c;
    undefined field61_0x7d;
    undefined field62_0x7e;
    undefined field63_0x7f;
    undefined field64_0x80;
    undefined field65_0x81;
    undefined field66_0x82;
    undefined field67_0x83;
    undefined field68_0x84;
    undefined field69_0x85;
    undefined field70_0x86;
    undefined field71_0x87;
    undefined field72_0x88;
    undefined field73_0x89;
    undefined field74_0x8a;
    undefined field75_0x8b;
    int8_t bossMaxHP;
    int8_t ranks[2];
    uint8_t bossLevel;
    int stageTime;
    int enemiesDefeated;
    int damageTaken;
    int16_t maxDamageDealt;
    uint16_t seenTextBoxes[20];
    undefined field84_0xc6;
    undefined field85_0xc7;
    undefined field86_0xc8;
    uint8_t flags; /* auto charge ,rapid fire,vibration,crouch,demo-voice */
    undefined field88_0xca;
    undefined field89_0xcb;
    int igt;
    int8_t screenOffsetX;
    int8_t screenOffsetY;
    int16_t playerSouls[2];
    uint16_t souls;
    uint32_t reploids[16]; /* 4 bits per reploid */
    undefined field96_0x118;
    undefined field97_0x119;
    undefined field98_0x11a;
    undefined field99_0x11b;
    undefined field100_0x11c;
    undefined field101_0x11d;
    undefined field102_0x11e;
    undefined field103_0x11f;
    undefined field104_0x120;
    undefined field105_0x121;
    undefined field106_0x122;
    undefined field107_0x123;
    undefined field108_0x124;
    undefined field109_0x125;
    undefined field110_0x126;
    undefined field111_0x127;
    undefined field112_0x128;
    undefined field113_0x129;
    undefined field114_0x12a;
    undefined field115_0x12b;
    undefined field116_0x12c;
    undefined field117_0x12d;
    undefined field118_0x12e;
    undefined field119_0x12f;
    undefined field120_0x130;
    undefined field121_0x131;
    undefined field122_0x132;
    undefined field123_0x133;
    undefined field124_0x134;
    undefined field125_0x135;
    undefined field126_0x136;
    undefined field127_0x137;
    undefined field128_0x138;
    undefined field129_0x139;
    undefined field130_0x13a;
    undefined field131_0x13b;
    undefined field132_0x13c;
    undefined field133_0x13d;
    undefined field134_0x13e;
    undefined field135_0x13f;
    undefined field136_0x140;
    undefined field137_0x141;
    undefined field138_0x142;
    undefined field139_0x143;
    undefined field140_0x144;
    undefined field141_0x145;
    undefined field142_0x146;
    undefined field143_0x147;
    undefined field144_0x148;
    undefined field145_0x149;
    undefined field146_0x14a;
    undefined field147_0x14b;
    undefined field148_0x14c;
    undefined field149_0x14d;
    undefined field150_0x14e;
    undefined field151_0x14f;
    undefined field152_0x150;
    undefined field153_0x151;
    undefined field154_0x152;
    undefined field155_0x153;
    undefined field156_0x154;
    undefined field157_0x155;
    undefined field158_0x156;
    undefined field159_0x157;
    undefined field160_0x158;
    undefined field161_0x159;
    undefined field162_0x15a;
    undefined field163_0x15b;
    undefined field164_0x15c;
    undefined field165_0x15d;
    undefined field166_0x15e;
    undefined field167_0x15f;
    undefined field168_0x160;
    undefined field169_0x161;
    undefined field170_0x162;
    undefined field171_0x163;
    undefined field172_0x164;
    undefined field173_0x165;
    undefined field174_0x166;
    undefined field175_0x167;
    int8_t nightmareEffects[16]; /* indexed by Stage Id & Source Stage Id gets copied to this */
    uint8_t nightmaresCollected[32][22];
    undefined field178_0x438;
    undefined field179_0x439;
    uint8_t nightmareEffectId; /* applied from nightEffects */
    uint8_t bonusBoss; /* Zero,High-Max,Dynamo */
    int pastStageTime;
    undefined field183_0x440;
    undefined field184_0x441;
    undefined field185_0x442;
    undefined field186_0x443;
    undefined field187_0x444;
    undefined field188_0x445;
    undefined field189_0x446;
    undefined field190_0x447;
    undefined field191_0x448;
    undefined field192_0x449;
    undefined field193_0x44a;
    undefined field194_0x44b;
    undefined field195_0x44c;
    undefined field196_0x44d;
    undefined field197_0x44e;
    undefined field198_0x44f;
    undefined field199_0x450;
    undefined field200_0x451;
    undefined field201_0x452;
    undefined field202_0x453;
    undefined field203_0x454;
    undefined field204_0x455;
    undefined field205_0x456;
    undefined field206_0x457;
    undefined field207_0x458;
    undefined field208_0x459;
    undefined field209_0x45a;
    undefined field210_0x45b;
    undefined field211_0x45c;
    undefined field212_0x45d;
    undefined field213_0x45e;
    undefined field214_0x45f;
    undefined field215_0x460;
    undefined field216_0x461;
    undefined field217_0x462;
    undefined field218_0x463;
    undefined field219_0x464;
    uint8_t nightmareStages[3]; /* most recent stages to be affected by the nightmare effect */
}Game;

extern Game game;

void ArcSeek(uint16_t id,uint8_t bufferId,void * bufferP);
void ArcBinSeek(int fileId,void *dest);
void BinSeek(uint16_t id,void * dest);

int CdControl(uint8_t com, uint8_t *param, uint8_t *result);
int CdPosToInt(CdlLOC *p);
int CdRead(int sectors,u_long *buf,int mode);
int CdReadSync(int mode,uint8_t *result);
CdlFILE * CdSearchFile(CdlFILE *fp,char *name);

void ClearAll();

void CopyClut(int destId,void *srcP,int length);

void DrawLoad(bool showName ,bool fade);
void DrawMMX5();
void DrawMain();
void EndSong();

void FadeIn(uint8_t speed);
void FadeOut(uint8_t speed);
void FileCollect();
void FileCollect2();

void PlaySound(int slot,int id,void *objP);
void TurnOffSound(uint32_t flag, uint32_t file);
void PlaySong(uint8_t id,uint8_t vol);

char * strcpy(void * dest,void * src);
void * memcpy(void *dest, void *src,int length);
void * memset(void *dest, char *fillbyte,int length);

int printf(const char *fmt,...);

void NewThread(int id,void * func);
void ThreadSleep(uint16_t frames);
void DeleteThread();
void DeleteThread2(int id);
void NewThread2(void * func);

#endif
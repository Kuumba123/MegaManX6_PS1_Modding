#ifndef GPU_H
#define GPU_H
#include <stdint.h>
#include <sys/types.h>
#include <libgte.h>
#include <libgpu.h>
#define GetTPageValue(tp,abr,x,y) (tp << 7) + (abr << 5) + x + (y << 4) //Use w/ SetDrawTPage()
#define GetClutCord(id) (uint16_t)((id & 0xF) + ((id & 0xFF0) << 2) + 0x7800) //Base is X:0 Y:480

u_long *ClearOTagR(u_long *ot, int n);

void DrawOTag(u_long *p);
int DrawOTag2(u_long *p);
int DrawSync(int mode);

int VSync(int mode);

int ClearImage(RECT *rect,u_char  r,u_char g,u_char b);
int ClearImage2(RECT *rect,u_char  r,u_char g,u_char b);
u_long *ClearOTag(u_long *ot, int n);
int LoadImage(RECT *rect,u_long *p);
int LoadImage2(RECT *rect, u_long *p);
int StoreImage(RECT *rect,u_long *p);
int StoreImage2(RECT *rect, u_long *p);
int MoveImage(RECT * rect,int x,int y);
int MoveImage2(RECT *rect, int x, int y);

DISPENV *PutDispEnv(DISPENV *env);
DRAWENV *PutDrawEnv(DRAWENV *env);

DISPENV * SetDefDispEnv(DISPENV *env,int x,int y,int w,int h);
DRAWENV * SetDefDrawEnv(DRAWENV *env,int x,int y,int w,int h);

extern uint8_t buffer;
typedef struct{
    DISPENV disp;
    DRAWENV draw;
    ulong ot[16];
}DB;
extern DB * drawP;
extern DB drawSettings[2];

extern SPRT_16 rectBuffer[2][1024];
extern int rectCount;

extern int primP;
extern int primCount;

extern int tempPrimP;
#endif

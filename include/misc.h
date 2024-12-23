#ifndef MISC_H
#define MISC_H
#include <stdint.h>
#include <stdbool.h>

void LoadLevel();
uint GetReploidStatus(uint reploid);
void SetReploidStatus(uint8_t reploid,uint status);
void SetupLayerSettings();
void SetupPriority();
void SetupSpawn();
#endif
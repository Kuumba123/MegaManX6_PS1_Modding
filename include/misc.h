#ifndef MISC_H
#define MISC_H
#include <stdint.h>
#include <stdbool.h>

void LoadLevel();
uint GetReploidStatus(uint32_t reploid); //2 = Rescued , 3 = Dead , 4 = Zombie
void SetReploidStatus(uint8_t reploid,uint status);
void SetupLayerSettings();
void SetupPriority();
void SetupScreen(uint32_t size);
void SetupSpawn();
#endif
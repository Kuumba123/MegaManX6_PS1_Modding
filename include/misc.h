#ifndef MISC_H
#define MISC_H
#include <stdint.h>
#include <stdbool.h>

void LoadLevel();
uint32_t GetReploidStatus(uint32_t reploid); //2 = Rescued , 3 = Dead , 4 = Zombie
bool HasSeenText(uint32_t id);
void SetReploidStatus(uint8_t reploid,uint status);
void SetSeenText(uint32_t id);
void SetupLayerSettings();
void SetupPriority();
void SetupScreen(uint32_t size);
void SetupSpawn();
#endif
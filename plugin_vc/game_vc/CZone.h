/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "eLevelName.h"

enum eZoneType {
    
};

#pragma pack(push, 1)
class CZone {
public:
    char name[8];
    char text[8];
    short x1;
    short y1;
    short z1;
    short x2;
    short y2;
    short z2;
    short _zoneExtraIndexInfo;
    char type;
    char townNumber;

    // Returns pointer to GXT name string.
    const char* GetTranslatedName();
};
#pragma pack(pop)

VALIDATE_SIZE(CZone, 0x20);
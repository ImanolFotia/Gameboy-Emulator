#pragma once
#include <vector>
#include <map>
#include <string>
#include "types.hpp"

#define BEGIN     0x0100 // First code execution

#define NINTENDO 0x104 //TO 0x0133
static U8 SCROLLING_NINTENDO_LOGO[] = { 
     0xCE, 0xED, 0x66, 0x66, 0xCC, 0x0D, 0x00, 0x0B, 0x03, 0x73, 0x00, 0x83, 0x00, 0x0C, 0x00, 0x0D,
     0x00, 0x08, 0x11, 0x1F, 0x88, 0x89, 0x00, 0x0E, 0xDC, 0xCC, 0x6E, 0xE6, 0xDD, 0xDD, 0xD9, 0x99,
     0xBB, 0xBB, 0x67, 0x63, 0x6E, 0x0E, 0xEC, 0xCC, 0xDD, 0xDC, 0x99, 0x9F, 0xBB, 0xB9, 0x33, 0x3E
     };

#define TITLE_0    0x0134 // Title

#define COLOR      0x0143 // $80 = Color GB, $00 or other = not Color GB
#define ASCII_HIGH 0x0144  
#define ASCII_LOW  0x0145

#define FUNCTION_INDICATOR 0x0146

#define CARTRIDGE_TYPE 0x0147

#define ROM_SIZE   0x0148
#define RAM_SIZE   0x0149
#define DEST_CODE  0x014A
#define LIC_CODE   0x014B
#define MASK_ROM   0x014C
#define COMP_CHECK 0x014D
#define CHKSUM_H   0x014E
#define CHKSUM_L   0x014F

class cartridge {
    
    public:

        std::map<U8, std::string> CartridgeType = {
            {0x00, "ROM_ONLY"},
            {0x01, "ROM_MBC0"},
            {0x02, "ROM_MBC1_RAM"},
            {0x03, "ROM_MBC1_RAM_BATT"},
            {0x05, "ROM_MBC2"},
            {0x06, "ROM_MBC2_BATTERY"},
            {0x08, "ROM_RAM"},
            {0x09, "ROM_RAM_BATTERY"},
            {0x0B, "ROM_MMM01"},
            {0x0C, "ROM_MMM01_SRAM"},
            {0x0D, "ROM_MMM01_SRAM_BATT"},
            {0x0F, "ROM_MBC3_TIMER_BATT"},
            {0x10, "ROM_MBC3_TIMER_RAM_BATT"},
            {0x11, "ROM_MBC3"},
            {0x12, "ROM_MBC3_RAM"},
            {0x13, "ROM_MBC3_RAM_BATT"},
            {0x19, "ROM_MBC5"},
            {0x1A, "ROM_MBC5_RAM"},
            {0x1B, "ROM_MBC5_RAM_BATT"},
            {0x1C, "ROM_MBC5_RUMBLE"},
            {0x1D, "ROM_MBC5_RUMBLE_SRAM"},
            {0x1E, "ROM_MBC5_RUMBLE_SRAM_BATT"},
            {0x1F, "POCKET_CAMERA"},
            {0xFD, "BANDAI_TAMA5"},
            {0xFE, "HUDSON_HUC_3"},
            {0xFF, "HUDSON_HUC_1"}
        };
        struct cartridge_header{
            U8 ENTRY_POINT[4];
            U8 NINTENDO_LOGO[48];
            U8 TITLE[16];
            U16 MANUFACTURER_CODE[2];
            U8 CGB_FLAG;
            U16 LICCODE;
            U8 SGB_FLAG;
            U8 TYPE;
            U8 ROMSIZE;
            U8 RAMSIZE;
            U8 DESTCODE;
            U8 OLICCODE;
            U8 MRVN;
            U8 HC;
            U16 GCS;
        };

    public: 
        cartridge() = default;
        virtual ~cartridge() {}

        BOOL loadCartridge(const char* c);

        BOOL unloadCartridge();

        U8 read8();
        U16 read16();

        U8* readChunck(U16 pos, U16 size);

    private:
        U8* data;
        U8 type;
};
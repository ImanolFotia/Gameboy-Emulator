#pragma once

#include "types.hpp"

//! MEMORY MAP
/*
* INTERRUPT ENABLE REGISTER
* ---------------------------- 0xFFFF
* INTERNAL RAM
* ---------------------------- 0xFF80
* EMPTY BUT UNUSABLE FOR I/O
* ---------------------------- 0xFF4C
* I/O PORTS
* ---------------------------- 0xFF00
* EMPTY BUT UNUSABLE FOR I/O
* ---------------------------- 0xFEA0
* SPRITE ATTRIB MEMORY (0AM)
* ---------------------------- 0xFE00
* ECHO OF 8KB INTERNAL RAM
* ---------------------------- 0xE000
* 8KB INTERNAL RAM
* ---------------------------- 0xC000
* 8KB SWITCHABLE RAM BANK
* ---------------------------- 0xA000
* 8KB VIDEO RAM
* ---------------------------- 0x8000 ---
* 16KB SWITCHABLE ROM BANK               |
* ---------------------------- 0x4000    | = 32 KB CARTRIDGE
* 16KB ROM BANK #0                       |
* ---------------------------- 0x0000 ---
*/

#define MAX_MEMORY 0xFFFF

//! Reserved addresses
#define RESTART_00 0x0000
#define RESTART_08 0x0008
#define RESTART_10 0x0010
#define RESTART_18 0x0018
#define RESTART_20 0x0020
#define RESTART_28 0x0028
#define RESTART_30 0x0030
#define RESTART_38 0x0038
#define VBISA      0x0040 //Vertical blank interrupt start address
#define LCDC_SISA  0x0048 //LCDC Status interrupt start address
#define TOISA      0x0050 //Timer Overflow interrupt start address
#define STCISA     0x0058 //Serial transfer completion interrupt start address
#define HTLPISA    0x0060 //High-to-Low of P10-P13 interrupt start address

#define BEGIN0     0x0100 // --|
#define BEGIN1     0x0101 // --||||
#define BEGIN2     0x0102 // --|||| First code execution of a cart
#define BEGIN3     0x0103 // --|

#define NINTENDO 0x104 //TO 0x0133
static constexpr U16* SCROLLING_NINTENDO_LOGO = 
    {0xCE, 0xED, 0x66, 0x66, 0xCC, 0x0D, 0x00, 0x0B, 0x03, 0x73, 0x00, 0x83, 0x00, 0x0C, 0x00, 0x0D,
     0x00, 0x08, 0x11, 0x1F, 0x88, 0x89, 0x00, 0x0E, 0xDC, 0xCC, 0x6E, 0xE6, 0xDD, 0xDD, 0xD9, 0x99,
     0xBB, 0xBB, 0x67, 0x63, 0x6E, 0x0E, 0xEC, 0xCC, 0xDD, 0xDC, 0x99, 0x9F, 0xBB, 0xB9, 0x33, 0x3E
     };

#define TITLE_0    0x0134
#define TITLE_1    0x0135
#define TITLE_2    0x0136
#define TITLE_3    0x0137
#define TITLE_4    0x0138
#define TITLE_5    0x0139
#define TITLE_6    0x0140
#define TITLE_7    0x0141
#define TITLE_8    0x0142

#define COLOR      0x0143 // $80 = Color GB, $00 or other = not Color GB
#define ASCII_HIGH 0x0144  
#define ASCII_LOW  0x0145

#define FUNCTION_INDICATOR 0x0146

#define CARTRIDGE_TYPE 0x0147
enum CartridgeType {
    ROM_ONLY =                  0x00,
    ROM_MBC0 =                  0x01,
    ROM_MBC1_RAM =              0x02,
    ROM_MBC1_RAM_BATT =         0x03,
    ROM_MBC2 =                  0x05,
    ROM_MBC2_BATTERY =          0x06,
    ROM_RAM =                   0x08,
    ROM_RAM_BATTERY =           0x09,
    ROM_MMM01 =                 0x0B,
    ROM_MMM01_SRAM =            0x0C,
    ROM_MMM01_SRAM_BATT =       0x0D,
    ROM_MBC3_TIMER_BATT =       0x0F,
    ROM_MBC3_TIMER_RAM_BATT =   0x10,
    ROM_MBC3 =                  0x11,
    ROM_MBC3_RAM =              0x12,
    ROM_MBC3_RAM_BATT =         0x13,
    ROM_MBC5 =                  0x19,
    ROM_MBC5_RAM =              0x1A,
    ROM_MBC5_RAM_BATT =         0x1B,
    ROM_MBC5_RUMBLE =           0x1C,
    ROM_MBC5_RUMBLE_SRAM =      0x1D,
    ROM_MBC5_RUMBLE_SRAM_BATT = 0x1E,
    POCKET_CAMERA =             0x1F,
    BANDAI_TAMA5 =              0xFD,
    HUDSON_HUC_3 =              0xFE,
    HUDSON_HUC_1 =              0xFF
};

#define ROM_SIZE   0x0148
#define RAM_SIZE   0x0149
#define DEST_CODE  0x014A
#define LIC_CODE   0x014B
#define MASK_ROM   0x014C
#define COMP_CHECK 0x014D
#define CHKSUM_H   0x014E
#define CHKSUM_L   0x014F

class memory {
    public:
        memory() = default;
        virtual ~memory(){}

        U8 read8();
        U0 write8();

        U16 read16();
        U0 write16();

        U0 clear();
        U0 fillrandom();

        /** 
         * loadchunck
         *? Loads a chunk of data into memory
         * @param size Size of chunk to be written to memory
         * @param location Location where the data should be loaded
         * @param data Data to be loaded onto memory
         */
        U0 loadchunck(U16 size, U16 location, U8* data);
};
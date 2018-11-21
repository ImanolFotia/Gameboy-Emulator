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
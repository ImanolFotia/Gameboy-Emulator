#pragma once
#include <string>
#include <vector>
#include "types.hpp"

class IO {

    class interrupt{
        interrupt(std::string I, U8 P, U16 SA) : Int(I), Priority(P), StartAddress(SA) 
        std::string Int;
        U8          Priority;
        U16         StartAddress;
    };

    public:
        IO() = default;
        virtual ~IO() {}


        /**
         * IO registers
        */
        bit_field<U8> P1; // Register for reading joy pad info and det. system type
        bit_field<U8> SB; // Serial Transfer Data (R/W)
        bit_field<U8> SC; // SIO control
        U8 DIV;           // Divider register
        U16 TIMA;         // Timer Counter
        U16 TMA;          // Timer Modulo
        bit_field<U8> TAC;// Timer Control
        bit_field<U8> If; // Interrupt flag

        std::vector<interrupt> Interrupts = {
            interrupt("V-Blank",            1, 0x0040),
            interrupt("LCDC Status",        2, 0x0048),
            interrupt("Timer Overflow",     3, 0x0050),
            interrupt("Serial Transfer",    4, 0x0058),
            interrupt("Hi-Lo",              5, 0x0060),
        };

        bit_field<U8> NR_10; // Sweep register
        bit_field<U8> NR_11; // sound Mode 1 register, Sound length/wave
        bit_field<U8> NR_12; // sound Mode 1 register, Envelope
        bit_field<U8> NR_13; // sound Mode 1 register, Frequency lo
        bit_field<U8> NR_14; // sound Mode 1 register, Frequency hi
        bit_field<U8> NR_21; // sound Mode 2 register, Sound length/wave
        bit_field<U8> NR_22; // sound Mode 2 register, envelope
        bit_field<U8> NR_23; // sound Mode 2 register, Frequency lo
        bit_field<U8> NR_24; // sound Mode 2 register, Frequency hi
        bit_field<U8> NR_30; // sound Mode 3 register, on/off
        bit_field<U8> NR_31; // sound Mode 3 register, Sound length/wave
        bit_field<U8> NR_32; // sound Mode 3 register, Select output
        bit_field<U8> NR_33; // sound Mode 3 register, freuqncy's lower data
        bit_field<U8> NR_34; // sound Mode 3 register, freuqncy's higher data
        bit_field<U8> NR_41; // sound Mode 4 register, sound length
        bit_field<U8> NR_42; // sound Mode 4 register, envelope
        bit_field<U8> NR_43; // sound Mode 4 register, polynomial
        bit_field<U8> NR_44; // sound Mode 4 register, counter/consecutive
        bit_field<U8> NR_50; // channel control
        bit_field<U8> NR_51; // selection of sound output terminal
        bit_field<U8> NR_52; // sound Mode on/off
        
        bit_field<U8, 32, 4> WP_RAM; // Waveform storage for arbitrary sound data
        bit_field<U8> LCDC; //LCD control
        bit_field<U8> STAT; //LCDC status
        U8 SCY; //Scroll Y
        U8 SCX; //Scroll X
        U8 LY; //LCDC Y-coord (R)
        U8 LYC; //LY compare (R/W)
        U16 DMA; //DMA transfer and start address
        bit_field<U8> BGP; //BG & Window palette data
        bit_field<U8> OBP0; //Object Palette 0 Data (R/W)
        bit_field<U8> OBP1; //Object Palette 1 Data (R/W)
        bit_field<U8> WY; //Window Y pos
        bit_field<U8> WX; //Window X pos
        bit_field<U8> IE; //Interrupt enable










        

};
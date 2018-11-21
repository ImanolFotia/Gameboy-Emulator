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


};
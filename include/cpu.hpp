#pragma once

#include <map>
#include <vector>
#include <functional>
#include <string>
#include <stack>

#include "opcodes.hpp"

#include "types.hpp"

class cpu 
{
    public:

    cpu() = default;
    ~cpu() = default;

    U0 Init();

    U0 addInstruction(opcode);

    void emulate_cycle(opcode);

    private:
        std::map<U16, opcode> Instructions;
        
        enum flags {
            Z = 0, //?Zero flag
            N,     //?Substract flag
            H,     //?Half-carry flag
            C,     //?Carry Flag
            not_used0, //?Always Zero
            not_used1, //?Always Zero
            not_used2, //?Always Zero
            not_used3, //?Always Zero

        }

        //  Registers
        //? These registers can be used as 16 bit registers by pairing them up
        U8      A, F, //Can be used as 16-bit register AF
                B, C, //Can be used as 16-bit register BC
                D, E, //Can be used as 16-bit register DE
                H, L; //Can be used as 16-bit register HL

        U16 PC; // Program Counter
        U16 SP; // Stack Pointer

        std::stack<U16> stack;

    protected:
};
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

    cpu();
    ~cpu() = default;

    U0 Init();

    U0 addInstruction(opcode);

    void emulate_cycle(opcode);

    private:
        std::map<U16, opcode> Instructions;
        s
        enum flags {
            Z = 0, //?Zero flag
            N,     //?Substract flag
            H,     //?Half-carry flag
            C,     //?Carry Flag
            not_used0, //?Always Zero
            not_used1, //?Always Zero
            not_used2, //?Always Zero
            not_used3, //?Always Zero

        };

        enum flag_status 
        {
            NOT_CHANGE = 0x00,
            CHANGE,
            SET_ZERO,
            SET_ONE,
            DEFAULT
        };

        bit_field<U8, 2> flag; 

        //  Registers
        //? These registers can be used as 16 bit registers by pairing them up
        U8      rA, rF, //Can be used as 16-bit register AF
                rB, rC, //Can be used as 16-bit register BC
                rD, rE, //Can be used as 16-bit register DE
                rH, rL; //Can be used as 16-bit register HL

        U16 PC; // Program Counter
        U16 SP; // Stack Pointer

        std::stack<U16> stack;

    protected:
};
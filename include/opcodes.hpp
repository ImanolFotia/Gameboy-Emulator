#pragma once

#include <string>
#include <functional>

#include "types.hpp"

class opcode {

    public:
        using lfunc = std::function<void(U8 A, U8 F, U8 B, U8 C, U8 D, U8 E, U8 H, U8 L, U8 n8, U16 n16)>;

    public:
        public: opcode_t(U16 o, std::string mn, std::string ss, U8 c, U8 l, U8 f[8], std::function)
        : _opcode(o), mnemonic(mn), subset(ss), cycles(c), length(l), flags(f) {}
        
        virtual ~opcode() {}

        U16 getOpcode() {return this->_opcode;}

        std::string getMnemonic() {return this->mnemonic;}

        std::string getSubset() {return this->subset;}

        U8 getCycles() {return this->cycles;}

        U8 getLength() {return this->length;}

        U8[8] getFlags() {return this->flags;}

    private:
        U16 _opcode;
        std::string mnemonic;
        std::string subset;
        U8 cycles;
        U8 length; //in bytes
        U8 flags[8];
        lfunc _function;
};
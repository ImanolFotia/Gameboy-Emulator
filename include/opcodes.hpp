#pragma once

#include <string>
#include <functional>
#include <array>

#include "types.hpp"

class opcode {

    public:
        using lfunc = std::function<void(U8 n8, U16 n16)>;

    public:
        public: opcode(U16 o, std::string mn, std::string ss, U8 c, U8 l, std::array<U8, 8> f, lfunc func)
        : _opcode(o), mnemonic(mn), subset(ss), cycles(c), length(l), flags(f), _function(func) {}
        
        virtual ~opcode() {}

        U16 getOpcode() {return this->_opcode;}

        std::string getMnemonic() {return this->mnemonic;}

        std::string getSubset() {return this->subset;}

        U8 getCycles() {return this->cycles;}

        U8 getLength() {return this->length;}

        std::array<U8, 8> getFlags() {return this->flags;}

    private:
        U16 _opcode;
        std::string mnemonic;
        std::string subset;
        U8 cycles;
        U8 length; //in bytes
        std::array<U8, 8> flags;
        lfunc _function;
};
#pragma once

#include "memory.hpp"
#include "cpu.hpp"
#include "display.hpp"
#include "cartridge.hpp"
#include "opcodes.hpp"

class system {
    public: 
        system() = default;
        virtual ~system() {}

        U8 Init();
        U8 ShutDown();

        opcode fetchOpcode();

        U0 Run();

        enum MODE {
            POWER_UP = 0x00,
            STOP,
            LOW_POWER
        };

    private:
        U8 current_mode;
};
#pragma once

#include "types.hpp"

class timer {
    public:
        timer() = default;
        virtual ~timer() {}

        U0 Update();

        U32 getCurrentTime();

        enum FREQUENCIES {
            LOW = 4096,
            MEDIUM = 16384,
            HIGH = 65536,
            VERY_HIGH = 262144
        }

        U0 setFrequency(FREQUENCIES f){ frequency = f; }

        U32 current_time;

        FREQUENCIES frequency;
};
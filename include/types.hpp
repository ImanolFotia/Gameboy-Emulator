#pragma once

typedef uint8_t U8;
typedef uint16_t U16;
typedef uint32_t U32;
typedef uint64_t U64;
typedef void U0;
typedef bool BOOL;

template<typename T, int b = 1>
class bit_field {
    T fielda : b;
    T fieldb : b;
    T fieldc : b;
    T fieldd : b;
    T fielde : b;
    T fieldf : b;
    T fieldg : b;
    T fieldh : b;
};


#pragma once

#define U8 uint8_t
#define U16 uint16_t
#define U32 uint32_t
#define U64 uint64_t
#define U0 void
#define BOOL bool

template<typename T, typename c = 8, typename b = 1>
class bit_field {
    T fields[c] : b;
};


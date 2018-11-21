#include "cpu.hpp"

cpu::cpu()
{
    #define __func__ [&](U8 A, U8 F, U8 B, U8 C, U8 D, U8 E, U8 H, U8 L, U8 n8, U16 n16)->void
    #define o opcode
    addInstruction(o(0x00, "NOP"    , "None", 8, 1, {0}, __func__{1+1; PC += 1;});
    addInstruction(o(0x01, "LD_BC16", "LD" , 12, 3, {0}, __func__{this->B = n16 & 0xFF00; this->C = n16 & 0x00FF; PC += 3;});
    addInstruction(o(0x02, "LD_BCA" , "LD"  , 8, 1, {0}, __func__{PC += 1;});
    addInstruction(o(0x03, "INC_BC" , "INC", 8, 1, {0}, __func__{PC += 1;});
    addInstruction(o(0x04, "INC_B"  , "INC", 4, 1, {1, 0, 1, 0, 0, 0, 0, 0}, __func__{PC += 1;});
    addInstruction(o(0x05, "DEC_B"    , "DEC", 4, 1, {1, 1, 1, 0, 0, 0, 0}, __func__{PC += 1;});
    addInstruction(o(0x06, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x07, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x08, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x09, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x0A, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x0B, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x0C, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x0D, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x0E, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x0F, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x10, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x11, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x12, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x13, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x14, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x15, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x16, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x17, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x18, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x19, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x1A, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x1B, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x1C, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x1D, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x1E, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x1F, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x20, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x21, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x22, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x23, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x24, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x25, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x26, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x27, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x28, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x29, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x2A, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x2B, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x2C, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x2D, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x2E, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x2F, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x30, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x31, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x32, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x33, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x34, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x35, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x36, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x37, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x38, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x39, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x3A, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x3B, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x3C, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x3D, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x3E, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x3F, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x40, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x41, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x42, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x43, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x44, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x45, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x46, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x47, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x48, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x49, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x4A, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x4B, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x4C, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x4D, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x4E, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x4F, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x50, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x51, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x52, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x53, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x54, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x55, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x56, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x57, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x58, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x59, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x5A, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x5B, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x5C, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x5D, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x5E, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x5F, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x60, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x61, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x62, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x63, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x64, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x65, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x66, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x67, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x68, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x69, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x6A, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x6B, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x6C, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x6D, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x6E, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x6F, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x70, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x71, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x72, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x73, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x74, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x75, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x76, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x77, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x78, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x79, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x7A, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x7B, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x7C, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x7D, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x7E, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x7F, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x80, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x81, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x82, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x83, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x84, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x85, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x86, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x87, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x88, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x89, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x8A, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x8B, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x8C, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x8D, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x8E, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x8F, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x90, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x91, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x92, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x93, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x94, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x95, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x96, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x97, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x98, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x99, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x9A, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x9B, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x9C, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x9D, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x9E, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0x9F, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xA0, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xA1, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xA2, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xA3, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xA4, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xA5, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xA6, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xA7, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xA8, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xA9, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xAA, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xAB, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xAC, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xAD, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xAE, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xAF, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xB0, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xB1, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xB2, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xB3, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xB4, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xB5, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xB6, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xB7, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xB8, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xB9, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xBA, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xBB, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xBC, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xBD, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xBE, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xBF, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xC0, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xC1, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xC2, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xC3, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xC4, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xC5, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xC6, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xC7, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xC8, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xC9, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xCA, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xCB, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xCC, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xCD, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xCE, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xCF, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xD0, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xD1, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xD2, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xD3, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xD4, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xD5, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xD6, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xD7, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xD8, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xD9, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xDA, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xDB, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xDC, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xDD, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xDE, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xDF, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xE0, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xE1, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xE2, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xE3, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xE4, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xE5, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xE6, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xE7, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xE8, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xE9, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xEA, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xEB, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xEC, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xED, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xEE, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xEF, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xF0, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xF1, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xF2, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xF3, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xF4, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xF5, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xF6, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xF7, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xF8, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xF9, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xFA, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xFB, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xFC, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xFD, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xFE, "NOP"    , "None", 8, 1, {0}, __func__{...});
    addInstruction(o(0xFF, "NOP"    , "None", 8, 1, {0}, __func__{...});
    #undef o
    #undef __func__
}

U0 cpu::addInstruction(opcode o)
{
    this->Instructions = std::make_pair(o.getOpcode, o);
}
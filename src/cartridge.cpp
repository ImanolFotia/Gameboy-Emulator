#include <fstream>

#include "cartridge.hpp"

BOOL cartridge::loadCartridge(const char* c)
{
    std::ifstream inFILE(c, std::ios::binary);
    
}

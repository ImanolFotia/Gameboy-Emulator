#include <fstream>
#include <iostream>
#include <bitset>
#ifdef WIN32
#include <windows.h>
#endif
#include "cartridge.hpp"

BOOL cartridge::loadCartridge(const char* c)
{
    std::ifstream inFILE(c, std::ios::binary);

    cartridge_header header;
    inFILE.seekg(BEGIN, std::ios::beg);
    inFILE.read((char*)&header, 0x014F - 0x0100);

    std::cout << "Loading cartridge: " << c << "..." << std::endl;
    std::cout << "Title: " << header.TITLE << std::endl;
    std::cout << std::hex << "Manufacturer: " << std::bitset<32>(header.MANUFACTURER_CODE).to_ullong() << std::endl;
    std::cout << "Licensee Code: " << std::bitset<16>(header.LICCODE).to_ullong() << std::endl;
    std::cout << "Type: " <</* CartridgeType.at(*/std::bitset<8>(header.TYPE).to_ullong()/*)*/ << std::endl;
    std::cout << "ROM Size: " << std::bitset<8>(header.ROMSIZE).to_ullong() << std::endl;
    std::cout << "RAM Size: " << std::bitset<8>(header.RAMSIZE).to_ullong() << std::endl;
    std::cout << "Header Checksum: " << std::bitset<8>(header.HC).to_ullong() << std::endl;
    std::cout << "Global Checksum: " << std::bitset<16>(header.GCS).to_ullong() << std::endl;

    system("pause");

    return true;

}

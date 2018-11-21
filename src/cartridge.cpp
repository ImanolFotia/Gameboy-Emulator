#include <fstream>

#include "cartridge.hpp"

BOOL cartridge::loadCartridge(const char* c)
{
    std::ifstream inFILE(c, std::ios::binary);

    cartridge_header header;
    inFILE.seekg(std::ios::beg, BEGIN);
    inFILE.read((char*)&header, 0x014F - 0x0100);

    std::cout << "Loading cartridge: " << c << "..." << std::endl;
    std::cout << "Title: " << header.TITLE << std::endl;
    std::cout << "Manufacturer: " << header.MANUFACTURER_CODE << std::endl;
    std::cout << "Licensee Code: " << header.LIC_CODE << std::endl;
    std::cout << "Type: " << header.TYPE << std::endl;
    std::cout << "ROM Size: " << header.ROMSIZE << std::endl;
    std::cout << "RAM Size: " << header.RAMSIZE << std::endl;
    std::cout << "Header Checksum: " << header.CS << std::endl;
    std::cout << "Global Checksum: " << header.GCS << std::endl;

    return true;

}

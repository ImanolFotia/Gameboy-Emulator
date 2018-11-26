#include <iostream>
#include "cartridge.hpp"

int main(int argc, char** argv)
{
    cartridge c;
    c.loadCartridge(argv[1]);
    return 0;
}
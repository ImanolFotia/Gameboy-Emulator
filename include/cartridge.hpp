#include "types.hpp"



class cartridge {
    public: 
        cartridge() = default;
        virtual ~cartridge() {}

        BOOL loadCartridge(const char* c);

        BOOL unloadCartridge();

        U8 read8();
        U16 read16();

        U8* readChunck(U16 pos, U16 size);

    private:
        U8* data;
        U8 type;
};
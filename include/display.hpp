#pragma once

#include "types.hpp"

#define TILE_SIZE 8
#define NUM_TILES 32
#define MAX_PIXELS 256

#define LCDC_TILE_DATA_TABLE_BEGIN 0x8000
#define LCDC_TILE_DATA_TABLE_END 0x8FFF
#define NO_LCDC_TILE_DATA_TABLE_BEGIN 0x8800
#define NO_LCDC_TILE_DATA_TABLE_END 0x97FF

class display {};
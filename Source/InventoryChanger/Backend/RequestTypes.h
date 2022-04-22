#pragma once

#include <cstdint>

#include "Item.h"

namespace inventory_changer::backend::request
{

struct ApplySticker {
    ItemConstIterator item;
    ItemConstIterator sticker;
    std::uint8_t slot;
};

struct WearSticker {
    ItemConstIterator skin;
    std::uint8_t slot;
};

struct SwapStatTrak {
    ItemConstIterator itemFrom;
    ItemConstIterator itemTo;
    ItemConstIterator statTrakSwapTool;
};

}
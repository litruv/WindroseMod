#include "R5BLInventoryItemGPP.h"

FR5BLInventoryItemGPP::FR5BLInventoryItemGPP() {
    this->MaxCountInSlot = 0;
    this->Weight = 0.00f;
    this->ItemClass = ER5BLInventoryItemClass::None;
    this->Rarity = ER5BLItemRarity::Common;
    this->bKeepInInventoryOnDeath = false;
}


#include "R5BLInventory_ActionMoveItemsBetweenInventories.h"

FR5BLInventory_ActionMoveItemsBetweenInventories::FR5BLInventory_ActionMoveItemsBetweenInventories() {
    this->bOnlyStack = false;
    this->bIsFullMove = false;
    this->MoveType = ER5BLInventoryActionType::FastMoveClick;
}


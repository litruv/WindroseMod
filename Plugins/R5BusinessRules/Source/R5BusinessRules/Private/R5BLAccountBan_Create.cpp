#include "R5BLAccountBan_Create.h"

FR5BLAccountBan_Create::FR5BLAccountBan_Create() {
    this->Type = ER5BLAccountBanType::Unknown;
    this->ExpireTime = 0;
    this->OriginService = ER5BLAccountBanOriginService::Unknown;
}


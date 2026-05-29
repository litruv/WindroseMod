#include "R5BLAccountBan.h"

UR5BLAccountBan::UR5BLAccountBan() {
    this->Type = ER5BLAccountBanType::Unknown;
    this->ExpireTime = 0;
    this->OriginService = ER5BLAccountBanOriginService::Unknown;
}



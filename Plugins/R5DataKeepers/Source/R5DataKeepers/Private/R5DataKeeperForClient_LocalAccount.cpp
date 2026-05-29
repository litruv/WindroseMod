#include "R5DataKeeperForClient_LocalAccount.h"

UR5DataKeeperForClient_LocalAccount::UR5DataKeeperForClient_LocalAccount() {
}

FString UR5DataKeeperForClient_LocalAccount::GetServerHostName() const {
    return TEXT("");
}

FR5BLRecordId UR5DataKeeperForClient_LocalAccount::GetDefaultPlayerIslandId(int32 idx) {
    return FR5BLRecordId{};
}



#include "R5NetCm_ServerDescription_PersistentV2.h"

FR5NetCm_ServerDescription_PersistentV2::FR5NetCm_ServerDescription_PersistentV2() {
    this->IsPasswordProtected = false;
    this->MaxPlayerCount = 0;
    this->UseDirectConnection = false;
    this->DirectConnectionServerPort = 0;
    this->AutoLoadLatestBackupIfHasBroken = false;
    this->CanLaunchMultipleServerInstances = false;
}


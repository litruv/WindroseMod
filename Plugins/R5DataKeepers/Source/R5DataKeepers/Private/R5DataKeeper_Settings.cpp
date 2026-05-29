#include "R5DataKeeper_Settings.h"

UR5DataKeeper_Settings::UR5DataKeeper_Settings() {
    this->BackendType = ER5DataKeeper_BackendType::Coop;
    this->IsExactDeploymentIdCompatibilityRequired = true;
    this->ServerAddress = TEXT("0.0.0.0");
    this->BlPort = 7778;
    this->Dev_UsePersistentStorageForIsland = false;
    this->Dev_SpecifyAccountId = false;
    this->Dev_bEnablePlayOfflineMenu = false;
    this->Dev_bEnablePlayOnlineMenu = false;
    this->Dev_SkipOnboardingInEditor = true;
    this->Dev_SkipOnboarding = false;
    this->DbType = ER5BLDataBaseType::RocksDB;
}

UR5DataKeeper_Settings* UR5DataKeeper_Settings::Get() {
    return NULL;
}



#include "R5DataKeeper_GameMode.h"

void AR5DataKeeper_GameMode::StaticRegisterNativesAR5DataKeeper_GameMode()
{
}


AR5DataKeeper_GameMode::AR5DataKeeper_GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsAuthorizationSupported = false;
    this->IsStandaloneNetModeSupported = true;
    this->IsServerNetModeSupported = true;
}



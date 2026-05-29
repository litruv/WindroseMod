#include "R5DebugHUD.h"

void AR5DebugHUD::StaticRegisterNativesAR5DebugHUD()
{
}


AR5DebugHUD::AR5DebugHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
}



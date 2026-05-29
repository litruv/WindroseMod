#include "R5GameMode.h"

void AR5GameMode::StaticRegisterNativesAR5GameMode()
{
}

AR5GameMode::AR5GameMode(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

UR5EventManagerComponent* AR5GameMode::GetEventManagerComponent() const
{
    return nullptr;
}

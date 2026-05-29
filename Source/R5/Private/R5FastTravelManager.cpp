#include "R5FastTravelManager.h"

TArray<UR5FastTravelComponent*> UR5FastTravelManager::GetKnownFastTravels() const
{
    return {};
}

UR5FastTravelComponent* UR5FastTravelManager::FindKnownFastTravelByGuid(const FGuid& Guid) const
{
    return nullptr;
}

UR5FastTravelManager::UR5FastTravelManager()
{
}

#include "R5FactionComponent.h"

UR5FactionComponent::UR5FactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FactionsParams = NULL;
}

bool UR5FactionComponent::HasFaction(ER5Faction Faction) const {
    return false;
}



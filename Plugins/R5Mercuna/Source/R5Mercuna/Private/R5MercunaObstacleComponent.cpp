#include "R5MercunaObstacleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Mercuna -ObjectName=EMercunaObstacleMovementType -FallbackName=EMercunaObstacleMovementType
//CROSS-MODULE INCLUDE V2: -ModuleName=Mercuna -ObjectName=EMercunaObstacleType -FallbackName=EMercunaObstacleType

UR5MercunaObstacleComponent::UR5MercunaObstacleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutomatic = false;
    this->Type = EMercunaObstacleType::Cylinder;
    this->MovementType = EMercunaObstacleMovementType::Vehicle;
    this->bCutOutWhenStationary = false;
}



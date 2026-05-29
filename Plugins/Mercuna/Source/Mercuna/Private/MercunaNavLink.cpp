#include "MercunaNavLink.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"

void AMercunaNavLink::StaticRegisterNativesAMercunaNavLink()
{
}


AMercunaNavLink::AMercunaNavLink(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PositionComponent"));
    this->bAutoRotation = true;
    this->bApplyToAllNavGrids = true;
    this->NavGrid = NULL;
    this->bEnabled = true;
    this->bInterGridLink = false;
}

void AMercunaNavLink::SetEnabled(bool NewBEnabled) {
}



bool AMercunaNavLink::InUse() const {
    return false;
}

FTransform AMercunaNavLink::GetRightTransform() const {
    return FTransform{};
}

FRotator AMercunaNavLink::GetRightRotation() const {
    return FRotator{};
}

FVector AMercunaNavLink::GetRightPosition() const {
    return FVector{};
}

FTransform AMercunaNavLink::GetLeftTransform() const {
    return FTransform{};
}

FRotator AMercunaNavLink::GetLeftRotation() const {
    return FRotator{};
}

FVector AMercunaNavLink::GetLeftPosition() const {
    return FVector{};
}

void AMercunaNavLink::AddToNavGrid(AMercunaNavGraph2D* NewNavGrid) {
}

void AMercunaNavLink::AddToAllGrids() {
}

void AMercunaNavLink::AddBetweenNavGrids(AMercunaNavGraph2D* NewLeftNavGrid, AMercunaNavGraph2D* NewRightNavGrid) {
}



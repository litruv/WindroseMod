#include "R5TargetDataPreview_Decal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalComponent -FallbackName=DecalComponent
#include "Components/DecalComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"

void AR5TargetDataPreview_Decal::StaticRegisterNativesAR5TargetDataPreview_Decal()
{
}


AR5TargetDataPreview_Decal::AR5TargetDataPreview_Decal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal Component"));
    this->DecalComponent->SetupAttachment(RootComponent);
}



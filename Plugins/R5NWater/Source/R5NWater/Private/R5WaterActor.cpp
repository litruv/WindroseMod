#include "R5WaterActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
#include "R5N_WaterContactSystem.h"
#include "R5N_WaterCuttingMaskSystem.h"
#include "R5N_WaterDebugSettings.h"
#include "R5N_WaterDecalSystem.h"
#include "R5N_WaterInteractionSystem.h"
#include "R5N_WaterLocalBodySystem.h"
#include "R5N_WaterSurfaceMaterialComponent.h"
#include "R5N_WaterSurfaceSystem.h"

void AR5WaterActor::StaticRegisterNativesAR5WaterActor()
{
}


AR5WaterActor::AR5WaterActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoresOriginShifting = true;
    this->bEnableAutoLODGeneration = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->DebugSettings = CreateDefaultSubobject<UR5N_WaterDebugSettings>(TEXT("DefaultDebugWaterSettings"));
    this->DefaultDebugWaterSettings = (UR5N_WaterDebugSettings*)DebugSettings;
    this->SurfaceMaterialComponent = CreateDefaultSubobject<UR5N_WaterSurfaceMaterialComponent>(TEXT("R5N_SurfaceMaterialComponent"));
    this->WaterLocalBodySystem = CreateDefaultSubobject<UR5N_WaterLocalBodySystem>(TEXT("R5N_WaterLocalBodySystem"));
    this->WaterCuttingMaskSystem = CreateDefaultSubobject<UR5N_WaterCuttingMaskSystem>(TEXT("R5N_WaterCuttingMaskSystem"));
    this->WaterDecalSystem = CreateDefaultSubobject<UR5N_WaterDecalSystem>(TEXT("R5N_WaterDecalSystem"));
    this->WaterInteractionSystem = CreateDefaultSubobject<UR5N_WaterInteractionSystem>(TEXT("R5N_WaterInteractionSystem"));
    this->WaterSurfaceSystem = CreateDefaultSubobject<UR5N_WaterSurfaceSystem>(TEXT("R5N_WaterSurfaceSystem"));
    this->WaterContactSystem = CreateDefaultSubobject<UR5N_WaterContactSystem>(TEXT("R5N_WaterContactSystem"));
}

void AR5WaterActor::RegenerateLandscapeData() {
}



#include "R5N_WaterDecalEmitterAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CurveFloat -FallbackName=CurveFloat
#include "R5CurveVector2D.h"

UR5N_WaterDecalEmitterAsset::UR5N_WaterDecalEmitterAsset() {
    this->Name = TEXT("Unnamed");
    this->bEmitterEnabled = true;
    this->WaterDecalType = EWaterDecalType::DeformFoam;
    this->EmitterDuration = 1.00f;
    this->bEmitterLooped = true;
    this->DestroyPolicy = EWaterEmitterDestroyPolicy::Complete;
    this->ColorBlendingType = EWaterEmitterBlendingType::Blended;
    this->bMaxDeformValue = false;
    this->MaxSpawnRate = 10.00f;
    this->SpawnRateFactor = CreateDefaultSubobject<UCurveFloat>(TEXT("Spawn rate factor"));
    this->SpawnBurstCount = 0;
    this->LifeTimeMin = 1.00f;
    this->LifeTimeMax = 1.00f;
    this->ScaleFactor = CreateDefaultSubobject<UR5CurveVector2D>(TEXT("Scale factor"));
    this->bSnapToEffectTransform = false;
    this->SpawnDirectionMin = 0.00f;
    this->SpawnDirectionMax = 0.00f;
    this->LocalDirectionMin = 0.00f;
    this->LocalDirectionMax = 0.00f;
    this->LocalDirectionRate = 0.00f;
    this->SpawnLocationType = EWaterEmitterSpawnLocationType::Point;
    this->SpawnLocationRectDir = 0.00f;
    this->SpawnLocationCircleRadius = 10.00f;
    this->InitialSpeedMin = 0.00f;
    this->InitialSpeedMax = 0.00f;
    this->VelocityFactor = CreateDefaultSubobject<UCurveFloat>(TEXT("Velocity factor"));
    this->IntensitySizeFactor = CreateDefaultSubobject<UCurveFloat>(TEXT("Intensity influence on size"));
    this->IntensitySpawnRateFactor = CreateDefaultSubobject<UCurveFloat>(TEXT("Intensity influence on spawn rate"));
    this->IntensityOpacityDeformFactor = CreateDefaultSubobject<UCurveFloat>(TEXT("Intensity influence on opacity color or deform factor"));
    this->InitialOpacity = 1.00f;
    this->OpacityFactor = CreateDefaultSubobject<UCurveFloat>(TEXT("Opacity factor"));
    this->DeformScale = 1.00f;
    this->FoamScale = 1.00f;
    this->StartFrameIndex = 0;
    this->EndFrameIndex = 0;
    this->Texture = NULL;
}



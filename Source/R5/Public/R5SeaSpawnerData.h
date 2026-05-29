#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "Math/Color.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5SeaSpawnerData.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5SeaSpawnerData : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval PointsDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalDistanceFromIsland;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SpawnerActivationCooldown;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SpawnerPostDestroyCooldown;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SpawnerPostDespawnCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugDrawRadius;
    
    UR5SeaSpawnerData();

};


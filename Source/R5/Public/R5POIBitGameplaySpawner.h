#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5PointOfInterest -ObjectName=R5POIBit -FallbackName=R5POIBit
#include "R5POIBit.h"
#include "R5POIBitGameplaySpawner.generated.h"

class UR5GameplaySpawnerParams;
class UR5SpawnerMutatorPreset;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5POIBitGameplaySpawner : public UR5POIBit {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5GameplaySpawnerParams> SpawnerParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5SpawnerMutatorPreset>> GlobalMutatorPresets;
    
public:
    UR5POIBitGameplaySpawner();

};


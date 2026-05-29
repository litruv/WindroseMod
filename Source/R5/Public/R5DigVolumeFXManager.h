#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "R5DigVolumeFXSpawnData.h"
#include "R5DigVolumeFXManager.generated.h"

UCLASS(Blueprintable, NoExport)
class R5_API AR5DigVolumeFXManager : public AInfo {
    GENERATED_BODY()
public:
    AR5DigVolumeFXManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayDigVolumeFX(const FR5DigVolumeFXSpawnData& FXSpawnData);
    
};


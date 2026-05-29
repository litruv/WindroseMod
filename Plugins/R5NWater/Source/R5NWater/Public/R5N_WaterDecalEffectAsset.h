#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5N_WaterDecalEffectAsset.generated.h"

class UR5N_WaterDecalEmitterAsset;

UCLASS(Blueprintable)
class R5NWATER_API UR5N_WaterDecalEffectAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5N_WaterDecalEmitterAsset*> Emitters;
    
    UR5N_WaterDecalEffectAsset();

};


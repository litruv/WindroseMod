#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5TriggerGrantsGameplayEffectData.h"
#include "R5TriggerGrantsGameplayEffectParams.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5TriggerGrantsGameplayEffectParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5TriggerGrantsGameplayEffectData Data;
    
    UR5TriggerGrantsGameplayEffectParams();

};


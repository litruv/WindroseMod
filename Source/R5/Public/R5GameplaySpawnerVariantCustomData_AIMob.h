#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5GameplayEffectWithPredefinedMagnitudesSoftRef -FallbackName=R5GameplayEffectWithPredefinedMagnitudesSoftRef
#include "R5GameplayEffectWithPredefinedMagnitudesSoftRef.h"
#include "R5GameplaySpawnerVariantCustomData.h"
#include "R5GameplaySpawnerVariantCustomData_AIMob.generated.h"

class UR5AIPawnParams;
class UR5AS_AgentParams;
class UR5BLLootParams;

UCLASS(Blueprintable, MinimalAPI)
class UR5GameplaySpawnerVariantCustomData_AIMob : public UR5GameplaySpawnerVariantCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5GameplayEffectWithPredefinedMagnitudesSoftRef> GameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5AS_AgentParams> OverrideAgentParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5AIPawnParams> OverrideAIPawnParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLLootParams> OverrideLootParams;
    
    UR5GameplaySpawnerVariantCustomData_AIMob();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetData -FallbackName=GameplayAbilityTargetData
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "R5TargetDataHitResult.h"
#include "R5AbilityTargetData_MultiHitResult.generated.h"

USTRUCT(BlueprintType)
struct R5GAS_API FR5AbilityTargetData_MultiHitResult : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5TargetDataHitResult> TargetDataHitResults;
    
    FR5AbilityTargetData_MultiHitResult();
};


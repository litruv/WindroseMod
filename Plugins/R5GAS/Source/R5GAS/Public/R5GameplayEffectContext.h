#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetDataHandle -FallbackName=GameplayAbilityTargetDataHandle
#include "Abilities/GameplayAbilityTargetTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectContext -FallbackName=GameplayEffectContext
#include "GameplayEffectTypes.h"
#include "R5GameplayEffectContext.generated.h"

USTRUCT(BlueprintType)
struct FR5GameplayEffectContext : public FGameplayEffectContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilityTargetDataHandle TargetDataHandle;
    
    R5GAS_API FR5GameplayEffectContext();
};


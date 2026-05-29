#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityActivationInfo -FallbackName=GameplayAbilityActivationInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilitySpecHandle -FallbackName=GameplayAbilitySpecHandle
#include "GameplayAbilitySpec.h"
#include "R5AbilityToEndData.generated.h"

USTRUCT(BlueprintType)
struct FR5AbilityToEndData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle AbilityToEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilityActivationInfo ActivationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasCanceled;
    
    R5GAS_API FR5AbilityToEndData();
};


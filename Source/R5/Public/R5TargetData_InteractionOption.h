#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetData -FallbackName=GameplayAbilityTargetData
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "R5TargetData_InteractionOption.generated.h"

class UR5InteractionOption;

USTRUCT(BlueprintType)
struct FR5TargetData_InteractionOption : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5InteractionOption* Option;
    
    R5_API FR5TargetData_InteractionOption();
};


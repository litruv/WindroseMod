#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectExecutionCalculation -FallbackName=GameplayEffectExecutionCalculation
#include "GameplayEffectExecutionCalculation.h"
#include "R5CorruptionCalculation.generated.h"

UCLASS(Blueprintable)
class R5_API UR5CorruptionCalculation : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    UR5CorruptionCalculation();

};


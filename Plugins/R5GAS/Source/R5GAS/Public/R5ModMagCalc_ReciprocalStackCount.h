#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayModMagnitudeCalculation -FallbackName=GameplayModMagnitudeCalculation
#include "GameplayModMagnitudeCalculation.h"
#include "R5ModMagCalc_ReciprocalStackCount.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5ModMagCalc_ReciprocalStackCount : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    UR5ModMagCalc_ReciprocalStackCount();

};


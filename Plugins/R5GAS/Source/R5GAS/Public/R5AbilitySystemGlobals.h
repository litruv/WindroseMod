#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemGlobals -FallbackName=AbilitySystemGlobals
#include "AbilitySystemGlobals.h"
#include "R5AbilitySystemGlobals.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5AbilitySystemGlobals : public UAbilitySystemGlobals {
    GENERATED_BODY()
public:
    UR5AbilitySystemGlobals();

};


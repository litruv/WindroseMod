#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "Subsystems/EngineSubsystem.h"
#include "AbilitySystemLauncher.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UAbilitySystemLauncher : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UAbilitySystemLauncher();

};


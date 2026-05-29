#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayCueManager -FallbackName=GameplayCueManager
#include "GameplayCueManager.h"
#include "R5GameplayCueManager.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5GameplayCueManager : public UGameplayCueManager {
    GENERATED_BODY()
public:
    UR5GameplayCueManager();

};


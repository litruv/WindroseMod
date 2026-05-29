#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5RecoilTask_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class R5_API UR5RecoilTask_Base : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTaskFinished);
    
    UR5RecoilTask_Base();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5AbilityTask_DefaultInstanced -FallbackName=R5AbilityTask_DefaultInstanced
#include "R5AbilityTask_DefaultInstanced.h"
#include "R5AbilityTask_DestroyAllDeployedActors.generated.h"

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_DestroyAllDeployedActors : public UR5AbilityTask_DefaultInstanced {
    GENERATED_BODY()
public:
    UR5AbilityTask_DestroyAllDeployedActors();

};


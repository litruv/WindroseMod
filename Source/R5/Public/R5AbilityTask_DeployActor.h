#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5AbilityTask_DefaultInstanced -FallbackName=R5AbilityTask_DefaultInstanced
#include "R5AbilityTask_DefaultInstanced.h"
#include "R5AbilityTask_DeployActor.generated.h"

class UR5DeployActorTaskParams;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_DeployActor : public UR5AbilityTask_DefaultInstanced {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DeployActorTaskParams* Params;
    
public:
    UR5AbilityTask_DeployActor();

};


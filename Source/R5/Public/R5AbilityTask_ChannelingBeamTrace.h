#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AbilityTask_ChannelingBeamTrace.generated.h"

class UR5ChannelingBeamTraceParams;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_ChannelingBeamTrace : public UAbilityTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ChannelingBeamTraceParams* Params;
    
public:
    UR5AbilityTask_ChannelingBeamTrace();

};


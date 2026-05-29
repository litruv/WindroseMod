#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_ReducePassiveReloadRemainingTime.generated.h"

class UR5ReducePassiveReloadRemainingTimeParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_ReducePassiveReloadRemainingTime : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ReducePassiveReloadRemainingTimeParams* Params;
    
public:
    UR5Ability_ReducePassiveReloadRemainingTime();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_StackGEWithPeriod.generated.h"

class UR5Ability_StackGEWithPeriodParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_StackGEWithPeriod : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5Ability_StackGEWithPeriodParams* Params;
    
public:
    UR5Ability_StackGEWithPeriod();

};


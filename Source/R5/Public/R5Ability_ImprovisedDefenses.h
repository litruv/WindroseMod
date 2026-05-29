#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_ImprovisedDefenses.generated.h"

class UR5ImprovisedDefensesParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_ImprovisedDefenses : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ImprovisedDefensesParams> ImprovisedDefensesParams;
    
public:
    UR5Ability_ImprovisedDefenses();

};


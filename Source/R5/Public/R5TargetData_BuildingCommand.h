#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetData -FallbackName=GameplayAbilityTargetData
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "R5TargetData_BuildingCommand.generated.h"

class UR5BuildingCommand;

USTRUCT(BlueprintType)
struct R5_API FR5TargetData_BuildingCommand : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BuildingCommand* Command;
    
    FR5TargetData_BuildingCommand();
};


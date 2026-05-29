#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetData -FallbackName=GameplayAbilityTargetData
#include "Abilities/GameplayAbilityTargetTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "ER5SummonResult.h"
#include "R5TargetData_PlayerSummonShip.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5TargetData_PlayerSummonShip : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId ShipRecordId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SummonResult SummonResult;
    
    FR5TargetData_PlayerSummonShip();
};


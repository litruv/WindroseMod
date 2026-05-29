#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateTreeModule -ObjectName=StateTreeConditionCommonBase -FallbackName=StateTreeConditionCommonBase
#include "StateTreeConditionBase.h"
#include "R5STT_HasMeleeAttackCapacityInBattleManager.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_HasMeleeAttackCapacityInBattleManager : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FR5STT_HasMeleeAttackCapacityInBattleManager();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EGenericAICheck -FallbackName=EGenericAICheck
#include "AITypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateTreeModule -ObjectName=StateTreeConditionCommonBase -FallbackName=StateTreeConditionCommonBase
#include "StateTreeConditionBase.h"
#include "R5STC_ShipRemainingReloadTime.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STC_ShipRemainingReloadTime : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGenericAICheck Operator;
    
    FR5STC_ShipRemainingReloadTime();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateTreeModule -ObjectName=StateTreeConditionCommonBase -FallbackName=StateTreeConditionCommonBase
#include "StateTreeConditionBase.h"
#include "R5STC_IsBoardingInstigator.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STC_IsBoardingInstigator : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FR5STC_IsBoardingInstigator();
};


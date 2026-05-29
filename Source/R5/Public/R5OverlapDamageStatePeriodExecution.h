#pragma once
#include "CoreMinimal.h"
#include "R5OverlapDamageStateExecutions.h"
#include "R5OverlapDamageStatePeriodExecution.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5OverlapDamageStatePeriodExecution : public UR5OverlapDamageStateExecutions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Period;
    
    UR5OverlapDamageStatePeriodExecution();

};


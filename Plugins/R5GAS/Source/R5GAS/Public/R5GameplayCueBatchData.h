#pragma once
#include "CoreMinimal.h"
#include "R5GameplayCueData_FromParameters.h"
#include "R5GameplayCueData_FromSpec.h"
#include "R5GameplayCueBatchData.generated.h"

USTRUCT(BlueprintType)
struct FR5GameplayCueBatchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5GameplayCueData_FromParameters> CuesFromParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5GameplayCueData_FromSpec> CuesFromSpec;
    
    R5GAS_API FR5GameplayCueBatchData();
};


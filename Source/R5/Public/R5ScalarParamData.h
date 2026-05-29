#pragma once
#include "CoreMinimal.h"
#include "R5ScalarParamData.generated.h"

USTRUCT(BlueprintType)
struct FR5ScalarParamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    R5_API FR5ScalarParamData();
};


#pragma once
#include "CoreMinimal.h"
#include "R5MaterialParametersData.generated.h"

USTRUCT(BlueprintType)
struct FR5MaterialParametersData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> ParameterMap;
    
    R5_API FR5MaterialParametersData();
};


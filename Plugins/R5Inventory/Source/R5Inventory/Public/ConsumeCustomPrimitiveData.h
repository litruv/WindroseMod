#pragma once
#include "CoreMinimal.h"
#include "ConsumeCustomPrimitiveData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct R5INVENTORY_API FConsumeCustomPrimitiveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParameterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ActivationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveTime;
    
    FConsumeCustomPrimitiveData();
};


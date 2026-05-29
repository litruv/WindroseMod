#pragma once
#include "CoreMinimal.h"
#include "SinkingShipCustomPrimitiveData.generated.h"

USTRUCT(BlueprintType)
struct FSinkingShipCustomPrimitiveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFireEffect;
    
    R5_API FSinkingShipCustomPrimitiveData();
};


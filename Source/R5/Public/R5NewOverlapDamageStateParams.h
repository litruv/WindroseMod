#pragma once
#include "CoreMinimal.h"
#include "R5NewOverlapDamageStateParams.generated.h"

class UR5OverlapDamageStateStrategy;

USTRUCT(BlueprintType)
struct FR5NewOverlapDamageStateParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5OverlapDamageStateStrategy*> StateStrategies;
    
    R5_API FR5NewOverlapDamageStateParams();
};


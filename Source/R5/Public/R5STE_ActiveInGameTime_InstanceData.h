#pragma once
#include "CoreMinimal.h"
#include "R5STE_ActiveInGameTime_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STE_ActiveInGameTime_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ActiveInGameTime;
    
    FR5STE_ActiveInGameTime_InstanceData();
};


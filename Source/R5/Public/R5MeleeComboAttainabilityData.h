#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=Optional_Float -FallbackName=Optional_Float
#include "Optional_Float.h"
#include "R5MeleeComboAttainabilityData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5MeleeComboAttainabilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptional_Float OverrideSweepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FR5MeleeComboAttainabilityData();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5WDSFloatAttributeData.generated.h"

class UR5WDSFloatParams;

USTRUCT(BlueprintType)
struct R5GAS_API FR5WDSFloatAttributeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MagnitudeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5WDSFloatParams* FloatParameter;
    
    FR5WDSFloatAttributeData();
};


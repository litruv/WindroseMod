#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5SimpleAttributeCalcType.h"
#include "R5SimpleAttributeCalcData.generated.h"

USTRUCT(BlueprintType)
struct FR5SimpleAttributeCalcData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SimpleAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SimpleAttributeCalcType AttributeType;
    
    R5GAS_API FR5SimpleAttributeCalcData();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttribute -FallbackName=GameplayAttribute
#include "AttributeSet.h"
#include "ER5AttributeTrackerAbilityCompareOperator.h"
#include "Templates/SubclassOf.h"
#include "R5AttributeTrackerData.generated.h"

class UGameplayEffect;
class UR5AttributeTrackerAbilityValue;

USTRUCT(BlueprintType)
struct R5GAS_API FR5AttributeTrackerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5AttributeTrackerAbilityCompareOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AttributeTrackerAbilityValue* Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> RegenGE;
    
    FR5AttributeTrackerData();
};


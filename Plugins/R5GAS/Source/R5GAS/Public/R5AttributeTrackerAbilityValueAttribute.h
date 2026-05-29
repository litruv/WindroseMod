#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttribute -FallbackName=GameplayAttribute
#include "AttributeSet.h"
#include "R5AttributeTrackerAbilityValue.h"
#include "R5AttributeTrackerAbilityValueAttribute.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5GAS_API UR5AttributeTrackerAbilityValueAttribute : public UR5AttributeTrackerAbilityValue {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
public:
    UR5AttributeTrackerAbilityValueAttribute();

};


#pragma once
#include "CoreMinimal.h"
#include "R5AttributeTrackerAbilityValue.h"
#include "R5AttributeTrackerAbilityValueFloat.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5GAS_API UR5AttributeTrackerAbilityValueFloat : public UR5AttributeTrackerAbilityValue {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    UR5AttributeTrackerAbilityValueFloat();

};


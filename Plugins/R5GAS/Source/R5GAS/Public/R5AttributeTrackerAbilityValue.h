#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5AttributeTrackerAbilityValue.generated.h"

UCLASS(Abstract, Blueprintable)
class R5GAS_API UR5AttributeTrackerAbilityValue : public UObject {
    GENERATED_BODY()
public:
    UR5AttributeTrackerAbilityValue();

};


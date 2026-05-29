#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5CharacterFsmTransitionTrigger.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5CharacterFsmTransitionTrigger : public UObject {
    GENERATED_BODY()
public:
    UR5CharacterFsmTransitionTrigger();

};


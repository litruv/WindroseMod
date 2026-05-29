#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=EnhancedPlayerInput -FallbackName=EnhancedPlayerInput
#include "EnhancedPlayerInput.h"
#include "R5EnhancedPlayerInput.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5EnhancedPlayerInput : public UEnhancedPlayerInput {
    GENERATED_BODY()
public:
    UR5EnhancedPlayerInput();

};


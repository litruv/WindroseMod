#pragma once
#include "CoreMinimal.h"
#include "R5BLKeyboardInputSettings_V0_9_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLKeyboardInputSettings_V0_9_0 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DashInputDirectionRegistrationDelay;
    
    FR5BLKeyboardInputSettings_V0_9_0();
};


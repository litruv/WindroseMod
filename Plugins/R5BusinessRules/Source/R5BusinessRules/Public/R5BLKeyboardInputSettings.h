#pragma once
#include "CoreMinimal.h"
#include "R5BLKeyboardInputSettings.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLKeyboardInputSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DashInputDirectionRegistrationDelay;
    
    FR5BLKeyboardInputSettings();
};


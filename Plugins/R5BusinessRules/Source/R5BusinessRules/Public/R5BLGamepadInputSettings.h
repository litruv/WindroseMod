#pragma once
#include "CoreMinimal.h"
#include "ER5BLGamepadSensitivity.h"
#include "R5BLGamepadInputSettings.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLGamepadInputSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceFeedbackEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadMoveStickDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadLookStickDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadInvertVerticalAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadInvertHorizontalAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLGamepadSensitivity GamepadLookSensitivityPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLGamepadSensitivity GamepadTargetingSensitivityPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLGamepadSensitivity GamepadUIPointerSensitivityPreset;
    
    FR5BLGamepadInputSettings();
};


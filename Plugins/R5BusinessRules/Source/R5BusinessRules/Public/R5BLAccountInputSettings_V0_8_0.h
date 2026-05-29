#pragma once
#include "CoreMinimal.h"
#include "R5BLGamepadInputSettings_V0_8_0.h"
#include "R5BLKeyMappingRow_V0_8_0.h"
#include "R5BLKeyboardInputSettings_V0_8_0.h"
#include "R5BLMouseInputSettings_V0_8_0.h"
#include "R5BLAccountInputSettings_V0_8_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLAccountInputSettings_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLGamepadInputSettings_V0_8_0 GamepadSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLMouseInputSettings_V0_8_0 MouseSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLKeyboardInputSettings_V0_8_0 KeyboardSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLKeyMappingRow_V0_8_0> KeybindingDirtyMappings;
    
    FR5BLAccountInputSettings_V0_8_0();
};


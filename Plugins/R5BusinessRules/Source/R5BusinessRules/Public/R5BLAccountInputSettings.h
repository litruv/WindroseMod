#pragma once
#include "CoreMinimal.h"
#include "R5BLGamepadInputSettings.h"
#include "R5BLKeyMappingRow.h"
#include "R5BLKeyboardInputSettings.h"
#include "R5BLMouseInputSettings.h"
#include "R5BLAccountInputSettings.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLAccountInputSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLGamepadInputSettings GamepadSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLMouseInputSettings MouseSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLKeyboardInputSettings KeyboardSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLKeyMappingRow> KeybindingDirtyMappings;
    
    FR5BLAccountInputSettings();
};


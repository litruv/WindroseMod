#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameSettings -ObjectName=GameSettingValue -FallbackName=GameSettingValue
#include "GameSettingValue.h"
#include "R5SettingKeyboardInput.generated.h"

UCLASS(Blueprintable)
class UR5SettingKeyboardInput : public UGameSettingValue {
    GENERATED_BODY()
public:
    UR5SettingKeyboardInput();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameSettings -ObjectName=GameSettingValueDiscrete -FallbackName=GameSettingValueDiscrete
#include "GameSettingValueDiscrete.h"
#include "R5SettingValueDiscrete_Resolution.generated.h"

UCLASS(Blueprintable)
class UR5SettingValueDiscrete_Resolution : public UGameSettingValueDiscrete {
    GENERATED_BODY()
public:
    UR5SettingValueDiscrete_Resolution();

};


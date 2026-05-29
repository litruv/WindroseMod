#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameSettings -ObjectName=GameSettingRegistry -FallbackName=GameSettingRegistry
#include "GameSettingRegistry.h"
#include "R5GameSettingRegistry.generated.h"

UCLASS(Blueprintable)
class UR5GameSettingRegistry : public UGameSettingRegistry {
    GENERATED_BODY()
public:
    UR5GameSettingRegistry();

};


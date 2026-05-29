#pragma once
#include "CoreMinimal.h"
#include "GameSettingValue.h"
#include "GameSettingValueDiscrete.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMESETTINGS_API UGameSettingValueDiscrete : public UGameSettingValue {
    GENERATED_BODY()
public:
    UGameSettingValueDiscrete();

};


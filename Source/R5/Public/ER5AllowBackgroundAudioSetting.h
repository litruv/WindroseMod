#pragma once
#include "CoreMinimal.h"
#include "ER5AllowBackgroundAudioSetting.generated.h"

UENUM(BlueprintType)
enum class ER5AllowBackgroundAudioSetting : uint8 {
    Off,
    AllSounds,
    Num,
};


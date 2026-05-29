#pragma once
#include "CoreMinimal.h"
#include "ELayoutLayer.generated.h"

UENUM(BlueprintType)
enum class ELayoutLayer : uint8 {
    Background,
    Content,
    System,
    Popup,
    Overlay,
};


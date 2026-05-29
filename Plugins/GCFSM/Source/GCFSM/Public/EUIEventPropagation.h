#pragma once
#include "CoreMinimal.h"
#include "EUIEventPropagation.generated.h"

UENUM(BlueprintType)
enum class EUIEventPropagation : uint8 {
    RootToLeafs,
    StateToRoot,
    TransitionEvent,
};


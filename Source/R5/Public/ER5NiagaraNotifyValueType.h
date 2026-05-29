#pragma once
#include "CoreMinimal.h"
#include "ER5NiagaraNotifyValueType.generated.h"

UENUM(BlueprintType)
enum class ER5NiagaraNotifyValueType : uint8 {
    Float,
    Int,
    Vector,
    Vector2D,
    LinearColor,
    Bool,
    StaticMesh,
    Material,
};


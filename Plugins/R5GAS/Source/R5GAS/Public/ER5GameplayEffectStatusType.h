#pragma once
#include "CoreMinimal.h"
#include "ER5GameplayEffectStatusType.generated.h"

UENUM(BlueprintType)
enum class ER5GameplayEffectStatusType : uint8 {
    None,
    Buff,
    Debuff,
    Neutral,
    BuffMinor,
    DebuffMinor,
    Silent,
    Channeling,
    Food,
    Salve,
    Oil,
    Elixir,
};


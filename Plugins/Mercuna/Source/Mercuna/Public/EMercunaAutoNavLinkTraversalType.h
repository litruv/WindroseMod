#pragma once
#include "CoreMinimal.h"
#include "EMercunaAutoNavLinkTraversalType.generated.h"

UENUM(BlueprintType)
enum class EMercunaAutoNavLinkTraversalType : uint8 {
    OneWay,
    Bidirectional,
};


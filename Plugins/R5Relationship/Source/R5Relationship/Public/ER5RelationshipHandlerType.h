#pragma once
#include "CoreMinimal.h"
#include "ER5RelationshipHandlerType.generated.h"

UENUM(BlueprintType)
enum class ER5RelationshipHandlerType : uint8 {
    None,
    Faction,
    Ownership,
    Party,
};


#pragma once
#include "CoreMinimal.h"
#include "EClassRepPolicy.generated.h"

UENUM(BlueprintType)
enum class EClassRepPolicy : uint8 {
    NotRouted,
    RelevantAllConnections,
    CustomRelevant,
    Spatialize_Static,
    Spatialize_Dynamic,
    Spatialize_Dormancy,
};


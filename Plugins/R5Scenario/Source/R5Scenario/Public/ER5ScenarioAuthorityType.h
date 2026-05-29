#pragma once
#include "CoreMinimal.h"
#include "ER5ScenarioAuthorityType.generated.h"

UENUM(BlueprintType)
enum class ER5ScenarioAuthorityType : uint8 {
    Both,
    Server,
    Client,
};


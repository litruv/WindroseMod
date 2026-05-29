#pragma once
#include "CoreMinimal.h"
#include "ER5BLMorphPrefixType.generated.h"

UENUM(BlueprintType)
enum class ER5BLMorphPrefixType : uint8 {
    None,
    BodyType,
    BodyTypeAndSex,
};


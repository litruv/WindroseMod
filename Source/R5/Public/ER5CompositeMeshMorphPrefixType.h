#pragma once
#include "CoreMinimal.h"
#include "ER5CompositeMeshMorphPrefixType.generated.h"

UENUM(BlueprintType)
enum class ER5CompositeMeshMorphPrefixType : uint8 {
    None,
    BodyType,
    BodyTypeAndSex,
};


#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5STT_GetPointToBiome.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_GetPointToBiome : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5STT_GetPointToBiome();
};


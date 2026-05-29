#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5STT_SetCharacterMaxAcceleration.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_SetCharacterMaxAcceleration : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5STT_SetCharacterMaxAcceleration();
};


#pragma once
#include "CoreMinimal.h"
#include "R5StateTreeTaskBase.h"
#include "R5STT_AskAgentToFindTarget.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_AskAgentToFindTarget : public FR5StateTreeTaskBase {
    GENERATED_BODY()
public:
    FR5STT_AskAgentToFindTarget();
};


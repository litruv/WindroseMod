#pragma once
#include "CoreMinimal.h"
#include "R5ActionTargetData.generated.h"

USTRUCT(BlueprintType)
struct FR5ActionTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetSlotIndex;
    
    R5_API FR5ActionTargetData();
};


#pragma once
#include "CoreMinimal.h"
#include "R5BLItem_TakeAttributeResult.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLItem_TakeAttributeResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingAttributeCount;
    
    FR5BLItem_TakeAttributeResult();
};


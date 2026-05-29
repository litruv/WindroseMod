#pragma once
#include "CoreMinimal.h"
#include "R5MineralNodeResourceAmount.generated.h"

USTRUCT(BlueprintType)
struct FR5MineralNodeResourceAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Remaining;
    
    R5_API FR5MineralNodeResourceAmount();
};


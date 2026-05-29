#pragma once
#include "CoreMinimal.h"
#include "R5BLItemsStackData.h"
#include "R5BLReward.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemsStackData> ItemsStacks;
    
    FR5BLReward();
};


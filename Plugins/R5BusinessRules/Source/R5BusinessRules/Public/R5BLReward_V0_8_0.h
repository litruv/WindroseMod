#pragma once
#include "CoreMinimal.h"
#include "R5BLItemsStackData_V0_8_0.h"
#include "R5BLReward_V0_8_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLReward_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemsStackData_V0_8_0> ItemsStacks;
    
    FR5BLReward_V0_8_0();
};


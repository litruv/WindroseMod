#pragma once
#include "CoreMinimal.h"
#include "R5BLReputationLevelData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLReputationLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalItemsForLevel;
    
    FR5BLReputationLevelData();
};


#pragma once
#include "CoreMinimal.h"
#include "R5FarmingStageParams.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FR5FarmingStageParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> PivotActorClasses;
    
    R5_API FR5FarmingStageParams();
};


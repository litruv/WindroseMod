#pragma once
#include "CoreMinimal.h"
#include "ER5ConnectionRegionState.h"
#include "R5ConnectionRegionData.generated.h"

USTRUCT(BlueprintType)
struct FR5ConnectionRegionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UIName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ConnectionRegionState State;
    
    R5CAPROXY_API FR5ConnectionRegionData();
};


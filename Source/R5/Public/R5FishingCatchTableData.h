#pragma once
#include "CoreMinimal.h"
#include "R5FishingCatchTableData.generated.h"

class UR5FishingCatchParams;

USTRUCT(BlueprintType)
struct FR5FishingCatchTableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5FishingCatchParams* FishingCatchParams;
    
    R5_API FR5FishingCatchTableData();
};


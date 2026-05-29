#pragma once
#include "CoreMinimal.h"
#include "ER5SignificanceLevel.h"
#include "R5WaterlineCustomData.generated.h"

USTRUCT(BlueprintType)
struct FR5WaterlineCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomDataIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel EnablingSignificanceLevel;
    
    R5_API FR5WaterlineCustomData();
};


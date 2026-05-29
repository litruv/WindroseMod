#pragma once
#include "CoreMinimal.h"
#include "R5UILayerProgressionInfo.generated.h"

USTRUCT(BlueprintType)
struct FR5UILayerProgressionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalPointsToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPoints;
    
    R5ENTITYPROGRESSION_API FR5UILayerProgressionInfo();
};


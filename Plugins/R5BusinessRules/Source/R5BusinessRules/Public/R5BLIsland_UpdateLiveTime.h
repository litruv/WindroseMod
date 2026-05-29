#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5BLIsland_UpdateLiveTime.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLIsland_UpdateLiveTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId islandId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LiveTime;
    
    FR5BLIsland_UpdateLiveTime();
};


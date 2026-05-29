#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5BLIsland_CreateDev.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLIsland_CreateDev {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId CommonIslandId;
    
    FR5BLIsland_CreateDev();
};


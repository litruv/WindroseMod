#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5BLActor_BuildingBlock_Remove.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLActor_BuildingBlock_Remove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId BuildingId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId Actor_BuildingBlockId;
    
    FR5BLActor_BuildingBlock_Remove();
};


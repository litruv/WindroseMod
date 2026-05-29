#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5ConsumeItemMessageData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5ConsumeItemMessageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId InstigatorAccountId;
    
    FR5ConsumeItemMessageData();
};


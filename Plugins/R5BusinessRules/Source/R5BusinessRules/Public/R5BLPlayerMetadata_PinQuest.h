#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
#include "R5BLPlayerMetadata_PinQuest.generated.h"

class UR5BLQuestParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLPlayerMetadata_PinQuest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordPath PlayerMetadataPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLQuestParams> PinnedQuest;
    
    FR5BLPlayerMetadata_PinQuest();
};


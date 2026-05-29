#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5BLBuildingBlockId.h"
#include "R5BLBuildingBlock_ChangeSupport.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLBuildingBlock_ChangeSupport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId islandId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLBuildingBlockId> SupportedBlocksIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLBuildingBlockId> UnsupportedBlocksIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLBuildingBlockId> UnstableBlocksIds;
    
    FR5BLBuildingBlock_ChangeSupport();
};


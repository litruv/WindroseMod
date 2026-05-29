#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "ER5BLActor_BuildingBlockType.h"
#include "R5BLCraftUpdateBIData.h"
#include "R5BLCraft_Update_BIModel.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLCraft_Update_BIModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLCraftUpdateBIData> CraftBIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId CraftStationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLActor_BuildingBlockType CraftStationType;
    
    FR5BLCraft_Update_BIModel();
};


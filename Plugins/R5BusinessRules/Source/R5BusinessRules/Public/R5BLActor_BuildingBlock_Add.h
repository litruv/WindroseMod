#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "ER5BLActor_BuildingBlockType.h"
#include "R5BLActor_BuildingBlock_Add.generated.h"

class UR5BLCraftParams;
class UR5BLDefaultInventoryItemsParams;
class UR5BLInventoryParams;
class UR5BLItemsCreatorParams;
class UR5BLShipDockParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLActor_BuildingBlock_Add {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId BuildingId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId OptionalActor_BuildingBlockId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLActor_BuildingBlockType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryParams> OptionalInventoryParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLDefaultInventoryItemsParams> OptionalDefaultInventoryItemsParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLCraftParams> OptionalCraftParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLItemsCreatorParams> OptionalItemsCreatorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLShipDockParams> OptionalShipDockParams;
    
    FR5BLActor_BuildingBlock_Add();
};


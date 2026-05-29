#pragma once
#include "CoreMinimal.h"
#include "ER5BLActor_BuildingBlockType.h"
#include "R5BLBuildingBlockSpawnInfo.h"
#include "R5BLBuildingBlock_SingleSpawnData.generated.h"

class UR5BLCraftParams;
class UR5BLCropParams;
class UR5BLDefaultInventoryItemsParams;
class UR5BLInventoryParams;
class UR5BLItemsCreatorParams;
class UR5BLShipDockParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLBuildingBlock_SingleSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLBuildingBlockSpawnInfo BaseInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLActor_BuildingBlockType WorldActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLCropParams> CropParams;
    
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
    
    FR5BLBuildingBlock_SingleSpawnData();
};


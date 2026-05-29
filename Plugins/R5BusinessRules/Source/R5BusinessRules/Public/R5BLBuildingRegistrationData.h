#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "ER5BLActor_BuildingBlockType.h"
#include "R5BLBuildingBlockSpawnInfo.h"
#include "R5BLBuildingRegistrationData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLBuildingRegistrationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId OptionalBuildingId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLBuildingBlockSpawnInfo> BuildingBlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ER5BLActor_BuildingBlockType> WorldActorTypes;
    
    FR5BLBuildingRegistrationData();
};


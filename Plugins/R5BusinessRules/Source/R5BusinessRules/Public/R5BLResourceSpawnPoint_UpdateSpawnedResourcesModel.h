#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5BLResourceSpawnPoint_UpdateSpawnedResourcesModel.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLResourceSpawnPoint_UpdateSpawnedResourcesModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId SpawnPointBLRecordId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId islandId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSpawnedResources;
    
    FR5BLResourceSpawnPoint_UpdateSpawnedResourcesModel();
};


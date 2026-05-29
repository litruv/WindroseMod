#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5BLTerrainInitData.h"
#include "R5BLTerrain_InitModel.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLTerrain_InitModel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordId islandId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLTerrainInitData> Terrains;
    
    FR5BLTerrain_InitModel();
};


#pragma once
#include "CoreMinimal.h"
#include "R5PreSpawnedPoiData_BrushData.h"
#include "R5PreSpawnedPoiData.generated.h"

class AR5BuildingBlock;

USTRUCT(BlueprintType)
struct FR5PreSpawnedPoiData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FR5PreSpawnedPoiData_BrushData> BuildingBrushesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AR5BuildingBlock*> PreSpawnedBlocks;
    
    R5_API FR5PreSpawnedPoiData();
};


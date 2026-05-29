#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimePDA -FallbackName=R5JsonRuntimePDA
#include "R5JsonRuntimePDA.h"
#include "R5FarmingStageParams.h"
#include "R5FarmingStationPlantParams.generated.h"

class UR5BLRecipeData;

UCLASS(Blueprintable, NonTransient)
class R5_API UR5FarmingStationPlantParams : public UR5JsonRuntimePDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UR5BLRecipeData>, FR5FarmingStageParams> RecipeDataMap;
    
    UR5FarmingStationPlantParams();

};


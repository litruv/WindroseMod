#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponentInstanceData -FallbackName=SceneComponentInstanceData
#include "R5POIElementSpawnerComponentInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FR5POIElementSpawnerComponentInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    R5POI_API FR5POIElementSpawnerComponentInstanceData();
};


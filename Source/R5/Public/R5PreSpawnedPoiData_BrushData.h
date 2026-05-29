#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
#include "R5PreSpawnedPoiData_BrushData.generated.h"

class UR5BuildingBrush;

USTRUCT(BlueprintType)
struct FR5PreSpawnedPoiData_BrushData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BuildingBrush* Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    R5_API FR5PreSpawnedPoiData_BrushData();
};


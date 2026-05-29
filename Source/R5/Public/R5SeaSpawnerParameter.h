#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector2 -FallbackName=IntVector2
#include "R5SeaSpawnerParameterPoints.h"
#include "R5SeaSpawnerParameter.generated.h"

USTRUCT(BlueprintType)
struct FR5SeaSpawnerParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntVector2, FR5SeaSpawnerParameterPoints> PointsMap;
    
    R5_API FR5SeaSpawnerParameter();
};


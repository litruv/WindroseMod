#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5BLTerrainPatch.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLTerrainPatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LandscapeLocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 StartPointIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EndPointIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int16> HeightMapDelta;
    
    FR5BLTerrainPatch();
};


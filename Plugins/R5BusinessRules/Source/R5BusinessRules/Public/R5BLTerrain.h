#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5BLTerrain.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLTerrain {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldLocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 BoundsSizeX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 BoundsSizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChangedChunks;
    
    FR5BLTerrain();
};


#pragma once
#include "CoreMinimal.h"
#include "R5BiomeGrid_VX_X_X.generated.h"

USTRUCT(BlueprintType)
struct R5TERRAINGENERATOR_VX_X_X_API FR5BiomeGrid_VX_X_X {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GridSizeX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GridSizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> GridData;
    
    FR5BiomeGrid_VX_X_X();
};


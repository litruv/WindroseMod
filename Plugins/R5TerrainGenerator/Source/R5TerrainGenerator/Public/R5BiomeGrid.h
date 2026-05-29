#pragma once
#include "CoreMinimal.h"
#include "R5BiomeGrid.generated.h"

USTRUCT(BlueprintType)
struct R5TERRAINGENERATOR_API FR5BiomeGrid {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GridSizeX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GridSizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> GridData;
    
    FR5BiomeGrid();
};


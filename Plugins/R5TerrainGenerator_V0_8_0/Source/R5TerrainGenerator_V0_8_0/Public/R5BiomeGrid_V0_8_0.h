#pragma once
#include "CoreMinimal.h"
#include "R5BiomeGrid_V0_8_0.generated.h"

USTRUCT(BlueprintType)
struct R5TERRAINGENERATOR_V0_8_0_API FR5BiomeGrid_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GridSizeX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GridSizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> GridData;
    
    FR5BiomeGrid_V0_8_0();
};


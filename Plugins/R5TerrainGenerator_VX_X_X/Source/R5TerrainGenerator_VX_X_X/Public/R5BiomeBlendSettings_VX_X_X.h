#pragma once
#include "CoreMinimal.h"
#include "R5BiomeBlendSettings_VX_X_X.generated.h"

USTRUCT(BlueprintType)
struct R5TERRAINGENERATOR_VX_X_X_API FR5BiomeBlendSettings_VX_X_X {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FR5BiomeBlendSettings_VX_X_X();
};


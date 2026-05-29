#pragma once
#include "CoreMinimal.h"
#include "ER5N_Unit.h"
#include "R5N_DensitySettings.generated.h"

USTRUCT(BlueprintType)
struct R5NCOMMON_API FR5N_DensitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5N_Unit DensityUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DensityOfWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DensityOfAir;
    
    FR5N_DensitySettings();
};


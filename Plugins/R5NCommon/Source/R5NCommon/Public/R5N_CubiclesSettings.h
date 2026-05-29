#pragma once
#include "CoreMinimal.h"
#include "R5N_CubiclesSettings_Fire.h"
#include "R5N_CubiclesSettings_Smoke.h"
#include "R5N_CubiclesSettings.generated.h"

USTRUCT(BlueprintType)
struct R5NCOMMON_API FR5N_CubiclesSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CubicleSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCubiclesInPatchSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPatchLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTickDurationS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCellLiveTimeS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayToRecheckCellTypeS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_CubiclesSettings_Fire FireSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_CubiclesSettings_Smoke SmokeSettings;
    
    FR5N_CubiclesSettings();
};


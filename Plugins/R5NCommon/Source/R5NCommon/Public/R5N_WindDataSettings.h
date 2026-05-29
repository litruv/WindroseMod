#pragma once
#include "CoreMinimal.h"
#include "R5N_WindDataSettings.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct R5NCOMMON_API FR5N_WindDataSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WindMapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindMapCoverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> WorldWindMap;
    
    FR5N_WindDataSettings();
};


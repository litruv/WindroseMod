#pragma once
#include "CoreMinimal.h"
#include "R5ChannelingBeamFXNameToFloatByTime.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FR5ChannelingBeamFXNameToFloatByTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ValueByTime;
    
    R5_API FR5ChannelingBeamFXNameToFloatByTime();
};


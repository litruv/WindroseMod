#pragma once
#include "CoreMinimal.h"
#include "R5CameraPostProcessFloatParameter.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct R5CAMERA_API FR5CameraPostProcessFloatParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueScale;
    
    FR5CameraPostProcessFloatParameter();
};


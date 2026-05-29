#pragma once
#include "CoreMinimal.h"
#include "R5CameraPostProcessHandle.generated.h"

USTRUCT(BlueprintType)
struct R5CAMERA_API FR5CameraPostProcessHandle {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ID;
    
public:
    FR5CameraPostProcessHandle();
};


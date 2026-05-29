#pragma once
#include "CoreMinimal.h"
#include "R5CameraTargetRotationData.generated.h"

USTRUCT(BlueprintType)
struct FR5CameraTargetRotationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRotationSpeed;
    
    R5_API FR5CameraTargetRotationData();
};


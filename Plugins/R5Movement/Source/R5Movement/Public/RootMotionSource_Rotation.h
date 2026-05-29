#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "Math/Quat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RootMotionSource -FallbackName=RootMotionSource
#include "GameFramework/RootMotionSource.h"
#include "RootMotionSource_Rotation.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct R5MOVEMENT_API FRootMotionSource_Rotation : public FRootMotionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat RotationQuat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RotationCurve;
    
    FRootMotionSource_Rotation();
};


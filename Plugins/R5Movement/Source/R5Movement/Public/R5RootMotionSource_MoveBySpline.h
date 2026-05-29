#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RootMotionSource -FallbackName=RootMotionSource
#include "GameFramework/RootMotionSource.h"
#include "R5RootMotionSource_MoveBySpline.generated.h"

class AActor;
class UCurveFloat;
class USplineComponent;

USTRUCT(BlueprintType)
struct R5MOVEMENT_API FR5RootMotionSource_MoveBySpline : public FRootMotionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedMultiplierCurve;
    
    FR5RootMotionSource_MoveBySpline();
};


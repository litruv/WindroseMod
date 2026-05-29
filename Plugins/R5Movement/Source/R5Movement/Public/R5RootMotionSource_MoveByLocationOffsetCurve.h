#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RootMotionSource -FallbackName=RootMotionSource
#include "GameFramework/RootMotionSource.h"
#include "R5RootMotionSource_MoveByLocationOffsetCurve.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct R5MOVEMENT_API FR5RootMotionSource_MoveByLocationOffsetCurve : public FRootMotionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* LocationOffsetCurve;
    
    FR5RootMotionSource_MoveByLocationOffsetCurve();
};


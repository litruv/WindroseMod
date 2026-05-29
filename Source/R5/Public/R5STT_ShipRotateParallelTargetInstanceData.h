#pragma once
#include "CoreMinimal.h"
#include "R5STT_ShipRotateParallelTargetInstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_ShipRotateParallelTargetInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndAfterRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardParallelAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightParallelAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GearWhenParallel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromStuckToMoveForward;
    
    FR5STT_ShipRotateParallelTargetInstanceData();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5TargetDataProducer -FallbackName=R5TargetDataProducer
#include "R5TargetDataProducer.h"
#include "R5TargetDataProducer_Building_CameraTrace.generated.h"

UCLASS(Blueprintable)
class R5_API UR5TargetDataProducer_Building_CameraTrace : public UR5TargetDataProducer {
    GENERATED_BODY()
public:
    UR5TargetDataProducer_Building_CameraTrace();

};


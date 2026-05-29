#pragma once
#include "CoreMinimal.h"
#include "R5STT_ShipMoveToBaseInstanceData.h"
#include "R5STT_ShipEvadeTargetInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STT_ShipEvadeTargetInstanceData : public FR5STT_ShipMoveToBaseInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredDistance;
    
    FR5STT_ShipEvadeTargetInstanceData();
};


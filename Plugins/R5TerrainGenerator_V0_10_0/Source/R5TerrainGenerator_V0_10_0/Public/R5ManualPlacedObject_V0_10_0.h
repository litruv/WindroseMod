#pragma once
#include "CoreMinimal.h"
#include "ER5ManualPlacedObjectAlignment_V0_10_0.h"
#include "R5ManualPlacedObject_V0_10_0.generated.h"

class UR5FoliageType_V0_10_0;

USTRUCT(BlueprintType)
struct FR5ManualPlacedObject_V0_10_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5FoliageType_V0_10_0* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ManualPlacedObjectAlignment_V0_10_0 Alignment;
    
    R5TERRAINGENERATOR_V0_10_0_API FR5ManualPlacedObject_V0_10_0();
};


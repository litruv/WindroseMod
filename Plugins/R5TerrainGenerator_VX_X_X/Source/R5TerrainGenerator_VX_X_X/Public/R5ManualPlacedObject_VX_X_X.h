#pragma once
#include "CoreMinimal.h"
#include "ER5ManualPlacedObjectAlignment_VX_X_X.h"
#include "R5ManualPlacedObject_VX_X_X.generated.h"

class UR5FoliageType_VX_X_X;

USTRUCT(BlueprintType)
struct FR5ManualPlacedObject_VX_X_X {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5FoliageType_VX_X_X* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ManualPlacedObjectAlignment_VX_X_X Alignment;
    
    R5TERRAINGENERATOR_VX_X_X_API FR5ManualPlacedObject_VX_X_X();
};


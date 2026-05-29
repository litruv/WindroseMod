#pragma once
#include "CoreMinimal.h"
#include "ER5ManualPlacedObjectAlignment.h"
#include "R5ManualPlacedObject.generated.h"

class UR5FoliageType;

USTRUCT(BlueprintType)
struct FR5ManualPlacedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5FoliageType* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ManualPlacedObjectAlignment Alignment;
    
    R5TERRAINGENERATOR_API FR5ManualPlacedObject();
};


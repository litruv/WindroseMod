#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
#include "Math/IntVector.h"
#include "R5BuildingBlockTransform.generated.h"

USTRUCT(BlueprintType)
struct FR5BuildingBlockTransform {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Location;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 RotationYaw;
    
public:
    R5_API FR5BuildingBlockTransform();
};


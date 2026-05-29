#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "R5FlagComponentData.generated.h"

USTRUCT(BlueprintType)
struct FR5FlagComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize RelativeMediumVelocityInLocal;
    
    R5_API FR5FlagComponentData();
};


#pragma once
#include "CoreMinimal.h"
#include "R5BaseProjectileMovementData.generated.h"

USTRUCT(BlueprintType)
struct FR5BaseProjectileMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScale;
    
    R5_API FR5BaseProjectileMovementData();
};


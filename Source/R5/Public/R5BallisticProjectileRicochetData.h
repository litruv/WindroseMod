#pragma once
#include "CoreMinimal.h"
#include "R5BallisticProjectileRicochetData.generated.h"

USTRUCT(BlueprintType)
struct FR5BallisticProjectileRicochetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RicochetStartAngle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuaranteedRicochetAngle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRicochetCount;
    
    R5_API FR5BallisticProjectileRicochetData();
};


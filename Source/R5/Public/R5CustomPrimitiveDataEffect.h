#pragma once
#include "CoreMinimal.h"
#include "R5CustomPrimitiveDataEffect.generated.h"

class UR5CustomPrimitiveDataEffectParams;

USTRUCT(BlueprintType)
struct FR5CustomPrimitiveDataEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CustomPrimitiveDataEffectParams* Params;
    
    R5_API FR5CustomPrimitiveDataEffect();
};


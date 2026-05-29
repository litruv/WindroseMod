#pragma once
#include "CoreMinimal.h"
#include "R5CustomPrimitiveDataEffectParams.h"
#include "R5CustomPrimitiveDataBloodWoundParams.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class UR5CustomPrimitiveDataBloodWoundParams : public UR5CustomPrimitiveDataEffectParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DamageCurve;
    
    UR5CustomPrimitiveDataBloodWoundParams();

};


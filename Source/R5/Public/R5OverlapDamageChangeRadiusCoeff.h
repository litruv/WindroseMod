#pragma once
#include "CoreMinimal.h"
#include "R5OverlapDamageStrategy.h"
#include "R5OverlapDamageChangeRadiusCoeff.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5OverlapDamageChangeRadiusCoeff : public UR5OverlapDamageStrategy {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusCoeffDelta;
    
public:
    UR5OverlapDamageChangeRadiusCoeff();

};


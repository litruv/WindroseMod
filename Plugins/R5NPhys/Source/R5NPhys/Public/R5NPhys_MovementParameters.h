#pragma once
#include "CoreMinimal.h"
#include "R5NPhys_MovementParameters.generated.h"

USTRUCT(BlueprintType)
struct R5NPHYS_API FR5NPhys_MovementParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RudderAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PayloadMass;
    
    FR5NPhys_MovementParameters();
};


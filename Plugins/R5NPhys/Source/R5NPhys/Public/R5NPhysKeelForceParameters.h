#pragma once
#include "CoreMinimal.h"
#include "R5NPhysForceParameters.h"
#include "R5NPhys_CircleParameters.h"
#include "R5NPhysKeelForceParameters.generated.h"

USTRUCT(BlueprintType)
struct R5NPHYS_API FR5NPhysKeelForceParameters : public FR5NPhysForceParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPhys_CircleParameters Circle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckMediumBorder;
    
    FR5NPhysKeelForceParameters();
};


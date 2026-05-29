#pragma once
#include "CoreMinimal.h"
#include "R5NPhysForceParameters.h"
#include "R5NPhys_SphereParameters.h"
#include "R5NPhysArchimedesForceParameters.generated.h"

USTRUCT(BlueprintType)
struct R5NPHYS_API FR5NPhysArchimedesForceParameters : public FR5NPhysForceParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPhys_SphereParameters Sphere;
    
    FR5NPhysArchimedesForceParameters();
};


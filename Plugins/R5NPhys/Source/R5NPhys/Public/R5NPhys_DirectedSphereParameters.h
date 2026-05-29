#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "ER5NPhys_SphereDirection.h"
#include "ER5NPhys_SphereHiddenPrimitive.h"
#include "R5NPhys_SphereParameters.h"
#include "R5NPhys_DirectedSphereParameters.generated.h"

USTRUCT(BlueprintType)
struct R5NPHYS_API FR5NPhys_DirectedSphereParameters : public FR5NPhys_SphereParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DirectionInLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5NPhys_SphereDirection ForceDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5NPhys_SphereHiddenPrimitive HiddenPrimitive;
    
    FR5NPhys_DirectedSphereParameters();
};


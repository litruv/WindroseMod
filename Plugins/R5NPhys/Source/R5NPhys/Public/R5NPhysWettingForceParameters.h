#pragma once
#include "CoreMinimal.h"
#include "ER5NPhys_ShapeType.h"
#include "R5NPhysForceParameters.h"
#include "R5NPhys_EllipsoidParameters.h"
#include "R5NPhys_SphereParameters.h"
#include "R5NPhysWettingForceParameters.generated.h"

USTRUCT(BlueprintType)
struct R5NPHYS_API FR5NPhysWettingForceParameters : public FR5NPhysForceParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WettingCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStretchLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachmentLevelAdjustmentMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5NPhys_ShapeType ShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPhys_SphereParameters Sphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPhys_EllipsoidParameters Ellipsoid;
    
    FR5NPhysWettingForceParameters();
};


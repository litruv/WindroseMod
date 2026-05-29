#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Weather -ObjectName=ER5N_MediumType -FallbackName=ER5N_MediumType
#include "ER5N_MediumType.h"
#include "ER5AnchorState.h"
#include "ER5NPhys_DirectionRestriction.h"
#include "ER5NPhys_ShapeType.h"
#include "R5NPhysForceParameters.h"
#include "R5NPhys_CylinderParameters.h"
#include "R5NPhys_DirectedSphereParameters.h"
#include "R5NPhys_HullParameters.h"
#include "R5NPhysFrictionForceParameters.generated.h"

USTRUCT(BlueprintType)
struct R5NPHYS_API FR5NPhysFrictionForceParameters : public FR5NPhysForceParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrictionCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5N_MediumType MediumType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsiderMediumVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5AnchorState ConsiderMediumVelocityAnchorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckMediumBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyDetectedDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5NPhys_ShapeType ShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPhys_DirectedSphereParameters DirectedSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPhys_CylinderParameters Cylinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPhys_HullParameters Hull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5NPhys_DirectionRestriction DirectionRestriction;
    
    FR5NPhysFrictionForceParameters();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5NPhys_PointParameters.h"
#include "R5NPhys_VectorParameters.generated.h"

USTRUCT(BlueprintType)
struct FR5NPhys_VectorParameters : public FR5NPhys_PointParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    R5NPHYS_API FR5NPhys_VectorParameters();
};


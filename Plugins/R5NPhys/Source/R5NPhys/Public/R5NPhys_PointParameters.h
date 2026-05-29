#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5NPhys_DebugParameters.h"
#include "R5NPhys_PointParameters.generated.h"

USTRUCT(BlueprintType)
struct R5NPHYS_API FR5NPhys_PointParameters : public FR5NPhys_DebugParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Origin;
    
    FR5NPhys_PointParameters();
};


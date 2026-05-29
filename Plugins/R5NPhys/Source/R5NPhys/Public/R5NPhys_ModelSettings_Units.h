#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5NCommon -ObjectName=ER5N_Unit -FallbackName=ER5N_Unit
#include "ER5N_Unit.h"
#include "R5NPhys_ModelSettings_Units.generated.h"

USTRUCT(BlueprintType)
struct FR5NPhys_ModelSettings_Units {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5N_Unit ForceUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5N_Unit MassUnit;
    
    R5NPHYS_API FR5NPhys_ModelSettings_Units();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Buoyancy -ObjectName=EStrandingState -FallbackName=EStrandingState
#include "EStrandingState.h"
#include "R5STTEvaluator_GetShipStrandingStateInstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STTEvaluator_GetShipStrandingStateInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EStrandingState StandingState;
    
    FR5STTEvaluator_GetShipStrandingStateInstanceData();
};


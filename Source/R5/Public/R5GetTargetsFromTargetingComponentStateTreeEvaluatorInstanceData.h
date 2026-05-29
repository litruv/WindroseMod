#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_UObjectValueSelector -FallbackName=R5AS_UObjectValueSelector
#include "R5AS_UObjectValueSelector.h"
#include "R5GetTargetsFromTargetingComponentStateTreeEvaluatorInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5GetTargetsFromTargetingComponentStateTreeEvaluatorInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_UObjectValueSelector CurrentTargetSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_UObjectValueSelector CurrentAlertTargetSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DistanceToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentAlertTarget;
    
    FR5GetTargetsFromTargetingComponentStateTreeEvaluatorInstanceData();
};


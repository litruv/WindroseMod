#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_DoubleValueSelector -FallbackName=R5AS_DoubleValueSelector
#include "R5AS_DoubleValueSelector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_IntegerValueSelector -FallbackName=R5AS_IntegerValueSelector
#include "R5AS_IntegerValueSelector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_UObjectValueSelector -FallbackName=R5AS_UObjectValueSelector
#include "R5AS_UObjectValueSelector.h"
#include "R5STT_ReserveRangeAttackToken_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_ReserveRangeAttackToken_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_UObjectValueSelector TargetSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_IntegerValueSelector AttackCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_DoubleValueSelector TokenLifetime;
    
    FR5STT_ReserveRangeAttackToken_InstanceData();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "EGCFSMTriggerEventQueuePolicy.h"
#include "EGCFSMTriggerEventTargetPolicy.h"
#include "GCFSM_BTTask_TriggerEvent.generated.h"

UCLASS(Blueprintable)
class GCFSM_API UGCFSM_BTTask_TriggerEvent : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGCFSMTriggerEventTargetPolicy targetPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool propagateToSubstates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool triggerInternalEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGCFSMTriggerEventQueuePolicy queuePolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float expireAfter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector targetBlackboardKey;
    
    UGCFSM_BTTask_TriggerEvent();

};


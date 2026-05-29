#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BehaviorTree/BTTaskNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "EGCFSMReplicationOptions.h"
#include "GCFSM_BTTask_LaunchFSM.generated.h"

UCLASS(Blueprintable)
class GCFSM_API UGCFSM_BTTask_LaunchFSM : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName fsmName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGCFSMReplicationOptions replicationOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector targetBlackboardKey;
    
    UGCFSM_BTTask_LaunchFSM();

};


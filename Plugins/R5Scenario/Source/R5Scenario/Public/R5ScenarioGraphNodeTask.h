#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
#include "ER5ScenarioAuthorityType.h"
#include "R5ScenarioGraphNode.h"
#include "Templates/SubclassOf.h"
#include "R5ScenarioGraphNodeTask.generated.h"

class UObject;
class UR5ScenarioGraphNodeTask;

UCLASS(Abstract, Blueprintable)
class R5SCENARIO_API UR5ScenarioGraphNodeTask : public UR5ScenarioGraphNode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTaskEnd);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ScenarioAuthorityType AuthorityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AvailableExecOnClientSide;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTaskEnd OnTaskEnd;
    
    UR5ScenarioGraphNodeTask();

    UFUNCTION(BlueprintCallable)
    void EndTask();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5ScenarioGraphNodeTask* CreateTaskNode(UObject* WorldContextObject, TSubclassOf<UR5ScenarioGraphNodeTask> TaskClass, FGuid Guid, UR5ScenarioGraphNodeTask*& OutObj);
    
};


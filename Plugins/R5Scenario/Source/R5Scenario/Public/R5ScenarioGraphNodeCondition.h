#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
#include "R5ScenarioGraphNode.h"
#include "Templates/SubclassOf.h"
#include "R5ScenarioGraphNodeCondition.generated.h"

class UObject;
class UR5ScenarioGraphNodeCondition;

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioGraphNodeCondition : public UR5ScenarioGraphNode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConditionEnd, FName, OutName);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConditionEnd OnConditionEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OutputList;
    
    UR5ScenarioGraphNodeCondition();

    UFUNCTION(BlueprintCallable)
    void EndCondition(FName OutName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5ScenarioGraphNodeCondition* CreateConditionNode(UObject* WorldContextObject, TSubclassOf<UR5ScenarioGraphNodeCondition> ConditionClass, FGuid Guid, UR5ScenarioGraphNodeCondition*& OutObj);
    
};


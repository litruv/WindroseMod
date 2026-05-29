#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
#include "R5ScenarioGraphNode.h"
#include "Templates/SubclassOf.h"
#include "R5ScenarioGraphNodeListener.generated.h"

class UObject;
class UR5ScenarioGraphNodeListener;

UCLASS(Abstract, Blueprintable)
class R5SCENARIO_API UR5ScenarioGraphNodeListener : public UR5ScenarioGraphNode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnListenerEnd, FName, OutName);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListenerEnd OnListenerEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OutputList;
    
    UR5ScenarioGraphNodeListener();

    UFUNCTION(BlueprintCallable)
    void EndListener(FName OutName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5ScenarioGraphNodeListener* CreateListenerNode(UObject* WorldContextObject, TSubclassOf<UR5ScenarioGraphNodeListener> ListenerClass, FGuid Guid, UR5ScenarioGraphNodeListener*& OutObj);
    
};


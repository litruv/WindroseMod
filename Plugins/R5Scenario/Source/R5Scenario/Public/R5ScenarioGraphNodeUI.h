#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ScenarioGraphNode.h"
#include "Templates/SubclassOf.h"
#include "R5ScenarioGraphNodeUI.generated.h"

class UObject;
class UR5ScenarioGraphNodeUI;

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioGraphNodeUI : public UR5ScenarioGraphNode {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionReceived, FName, OutName);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionReceived OnActionReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OutputList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UIStateTag;
    
    UR5ScenarioGraphNodeUI();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5ScenarioGraphNodeUI* CreateUINode(UObject* WorldContextObject, TSubclassOf<UR5ScenarioGraphNodeUI> UIClass, FGuid Guid, UR5ScenarioGraphNodeUI*& OutObj);
    
};


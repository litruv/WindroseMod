#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=ER5ScenarioBlackboardType -FallbackName=ER5ScenarioBlackboardType
#include "ER5ScenarioBlackboardType.h"
#include "R5UIScenarioBlackboardValueObserver.h"
#include "R5UIScenarioBlackboardIntObserver.generated.h"

class UObject;
class UR5ScenarioBlackboard;
class UR5UIScenarioBlackboardIntObserver;

UCLASS(Blueprintable)
class R5_API UR5UIScenarioBlackboardIntObserver : public UR5UIScenarioBlackboardValueObserver {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnBlackboardIntValueChanged, UR5UIScenarioBlackboardIntObserver*, SourceObserver);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnBlackboardIntValueChanged OnValueChanged;
    
    UR5UIScenarioBlackboardIntObserver();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValue() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5UIScenarioBlackboardIntObserver* CreateBlackboardIntObserverForBB(UObject* WorldContextObject, FGameplayTag ValueKey, UR5ScenarioBlackboard* Blackboard);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5UIScenarioBlackboardIntObserver* CreateBlackboardIntObserver(UObject* WorldContextObject, FGameplayTag ValueKey, ER5ScenarioBlackboardType Type);
    
};


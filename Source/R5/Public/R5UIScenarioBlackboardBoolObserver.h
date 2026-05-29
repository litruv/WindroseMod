#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=ER5ScenarioBlackboardType -FallbackName=ER5ScenarioBlackboardType
#include "ER5ScenarioBlackboardType.h"
#include "R5UIScenarioBlackboardValueObserver.h"
#include "R5UIScenarioBlackboardBoolObserver.generated.h"

class UObject;
class UR5UIScenarioBlackboardBoolObserver;

UCLASS(Blueprintable)
class R5_API UR5UIScenarioBlackboardBoolObserver : public UR5UIScenarioBlackboardValueObserver {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnBlackboardBoolValueChanged, UR5UIScenarioBlackboardBoolObserver*, SourceObserver);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnBlackboardBoolValueChanged OnValueChanged;
    
    UR5UIScenarioBlackboardBoolObserver();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetValue() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5UIScenarioBlackboardBoolObserver* CreateBlackboardBoolObserver(UObject* WorldContextObject, FGameplayTag ValueKey, ER5ScenarioBlackboardType Type);
    
};


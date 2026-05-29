#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5UIScenarioBlackboardValueObserver.generated.h"

UCLASS(Abstract, Blueprintable)
class R5_API UR5UIScenarioBlackboardValueObserver : public UObject {
    GENERATED_BODY()
public:
    UR5UIScenarioBlackboardValueObserver();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetObservedKey() const;
    
};


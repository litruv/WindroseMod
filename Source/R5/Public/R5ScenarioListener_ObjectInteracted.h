#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeListener -FallbackName=R5ScenarioGraphNodeListener
#include "R5ScenarioGraphNodeListener.h"
#include "R5ScenarioListener_ObjectInteracted.generated.h"

class AActor;

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_ObjectInteracted : public UR5ScenarioGraphNodeListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ObjectTag;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> InteractInstigator;
    
public:
    UR5ScenarioListener_ObjectInteracted();

private:
    UFUNCTION(BlueprintCallable)
    void OnInteracted(FGameplayTag Tag, AActor* InInteractTarget);
    
};


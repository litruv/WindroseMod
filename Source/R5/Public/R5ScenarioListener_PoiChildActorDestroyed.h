#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeListener -FallbackName=R5ScenarioGraphNodeListener
#include "R5ScenarioGraphNodeListener.h"
#include "R5ScenarioListener_PoiChildActorDestroyed.generated.h"

class AActor;

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_PoiChildActorDestroyed : public UR5ScenarioGraphNodeListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ChildActorTags;
    
    UR5ScenarioListener_PoiChildActorDestroyed();

private:
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* Actor, FName EventName);
    
};


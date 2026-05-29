#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeListener -FallbackName=R5ScenarioGraphNodeListener
#include "R5ScenarioGraphNodeListener.h"
#include "R5ScenarioListener_ShipBoarded.generated.h"

class AR5ShipPawnBase;

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_ShipBoarded : public UR5ScenarioGraphNodeListener {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActorTrackerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCallWhenBoardingWinnerChosen;
    
public:
    UR5ScenarioListener_ShipBoarded();

protected:
    UFUNCTION(BlueprintCallable)
    void OnShipBoarded(AR5ShipPawnBase* WinnerShip, AR5ShipPawnBase* LoserShip);
    
};


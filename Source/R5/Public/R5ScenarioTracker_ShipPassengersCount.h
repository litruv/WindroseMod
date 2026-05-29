#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=ER5ScenarioBlackboardType -FallbackName=ER5ScenarioBlackboardType
#include "ER5ScenarioBlackboardType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioTrackerRegular -FallbackName=R5ScenarioTrackerRegular
#include "R5ScenarioTrackerRegular.h"
#include "Templates/SubclassOf.h"
#include "R5ScenarioTracker_ShipPassengersCount.generated.h"

class APawn;
class UR5PassengerManagerComponent;
class UR5ScenarioNode;
class UR5ScenarioTracker_ShipPassengersCount;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTracker_ShipPassengersCount : public UR5ScenarioTrackerRegular {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PassengerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> PassengerFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WriteAsTag;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PassengerManagerComponent* PassengerManagerComponent;
    
public:
    UR5ScenarioTracker_ShipPassengersCount();

private:
    UFUNCTION(BlueprintCallable)
    void OnPassengerRemoved(APawn* ExPassenger);
    
    UFUNCTION(BlueprintCallable)
    void OnPassengerAdded(APawn* NewPassenger);
    
public:
    UFUNCTION(BlueprintCallable)
    static UR5ScenarioTracker_ShipPassengersCount* CreateTracker(ER5ScenarioBlackboardType Blackboard, bool SaveToPersistent, UR5ScenarioNode* Owner, FGameplayTagContainer ActorTags, FGameplayTag WriteToBlackboardAs, TSubclassOf<APawn> FilterClass);
    
};


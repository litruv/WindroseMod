#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioTracker -FallbackName=R5ScenarioTracker
#include "R5ScenarioTracker.h"
#include "R5ScenarioTracker_BoardingPassengerCountBase.generated.h"

class AActor;
class APawn;
class UR5PassengerManagerComponent;

UCLASS(Abstract, Blueprintable)
class R5_API UR5ScenarioTracker_BoardingPassengerCountBase : public UR5ScenarioTracker {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PassengerManagerComponent* PassengerManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DesiredMaster;
    
public:
    UR5ScenarioTracker_BoardingPassengerCountBase();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPassengerRemoved(APawn* Passenger);
    
    UFUNCTION(BlueprintCallable)
    void OnPassengerAdded(APawn* Passenger);
    
};


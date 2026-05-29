#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMObserver -FallbackName=R5MVVMObserver
#include "R5MVVMObserver.h"
#include "R5MVVMObserver_Ship.generated.h"

class AActor;
class APawn;
class AR5ShipPawnBase;
class UR5BLShipView;

UCLASS(Blueprintable)
class R5_API UR5MVVMObserver_Ship : public UR5MVVMObserver {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLShipView* ShipView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AR5ShipPawnBase> ObservedShipPawn;
    
public:
    UR5MVVMObserver_Ship();

private:
    UFUNCTION(BlueprintCallable)
    void OnShipPawnDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPassengerAddedOrRemoved(APawn* InPassenger);
    
};


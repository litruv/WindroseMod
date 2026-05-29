#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "R5BatteryAimingComponentBase.generated.h"

class AController;
class APawn;
class UR5BatteryManagerComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BatteryAimingComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SelectedBattery, meta=(AllowPrivateAccess=true))
    uint8 SelectedBatteryIndex;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_BatteryManagerComponent, meta=(AllowPrivateAccess=true))
    UR5BatteryManagerComponent* BatteryManagerComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize ReplicatedAimPoint;
    
public:
    UR5BatteryAimingComponentBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedBattery();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BatteryManagerComponent(UR5BatteryManagerComponent* PrevManager);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
};


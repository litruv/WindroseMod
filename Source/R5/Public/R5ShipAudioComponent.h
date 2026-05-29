#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5SignificanceLevel.h"
#include "R5CollectedDamageInstance.h"
#include "R5ShipSensor_WaterLevelData.h"
#include "R5SignificanceInterface.h"
#include "R5ShipAudioComponent.generated.h"

class AActor;
class AController;
class APawn;
class UAudioComponent;
class UR5ShipAudioParams;
class UR5ShipHoldComponent;
class UR5ShipSensor_WaterLevel;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipAudioComponent : public UActorComponent, public IR5SignificanceInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShantyUpdate, bool, Enabled);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShantyUpdate OnShantyUpdate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipAudioParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UR5ShipHoldComponent> ShipHoldComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Shanty, meta=(AllowPrivateAccess=true))
    uint8 ShantyIdx;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SailLoopAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* WaveBreakingAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* WindAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SternAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UAudioComponent*> SailsAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UAudioComponent*> CrewAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ShantyAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* RudderRotatingAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* LandscapeContactAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SinkingAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel TickSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel SinkingSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel SailSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel ShipCrewSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel ArtillerySignificanceLevel;
    
public:
    UR5ShipAudioComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleShanty();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerPlayNextShanty();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEnableShanty();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDisableShanty();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RudderAngleChanged(float PreviousAngle, float CurrentAngle);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayNextShanty();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWaveBreakingSensorDataUpdate(UR5ShipSensor_WaterLevel* Sensor, const FR5ShipSensor_WaterLevelData& SensorData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Shanty(uint8 PrevShantyIdx);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerPawnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
    UFUNCTION(BlueprintCallable)
    void OnEmbark(const FVector& EmbarkLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnDisembark(const FVector& DisembarkLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageDealtInstanceCollected(FR5CollectedDamageInstance DamageInstance);
    
    UFUNCTION(BlueprintCallable)
    void OnCaptainChanged(AActor* Captain, AActor* OldCaptain);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraStateChanged(const FGameplayTag& NewState, const FGameplayTag& OldState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBatteryReloadTimeUpdated(uint8 BatteryIndex, float RemainingReloadTime);
    
    UFUNCTION(BlueprintCallable)
    void OnAggressiveTargetAdded(AActor* Target);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShantyEnabled() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GearChanged(int32 NewGear);
    

    // Fix for true pure virtual functions not being implemented
};


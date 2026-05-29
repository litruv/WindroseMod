#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "ER5BatteryEnhancementStatus.h"
#include "ER5SignificanceLevel.h"
#include "R5Battery.h"
#include "R5BatteryReplicatedState.h"
#include "R5BatteryUIData.h"
#include "R5CannonStruct.h"
#include "R5ModuleEfficiencyInterface.h"
#include "R5SignificanceInterface.h"
#include "R5BatteryManagerComponent.generated.h"

class AActor;
class AR5BatteryPawn;
class ULineBatchComponent;
class UR5BatteryAimingComponentBase;
class UR5BatteryManagerData;
class UR5BatteryPawnSpawnData;
class UR5CannonAmmoParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BatteryManagerComponent : public UActorComponent, public IR5ModuleEfficiencyInterface, public IR5SignificanceInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSelectedBatteryChanged, uint8, BatteryIndex, AActor*, AimingComponentOwner);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBatteryUIStateChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBatteryReloadTimeUpdated, uint8, BatteryIndex, float, RemainingReloadTime);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBatteryReloadCancelled, uint8, BatteryIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBatteryLoadedCannonsChanged, uint8, BatteryIndex, int32, LoadedCannonsCount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBatteryEnhancementStateChanged, uint8, BatteryIndex, ER5BatteryEnhancementStatus, Status);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBatteryAmmoChanged, uint8, BatteryIndex, const UR5CannonAmmoParams*, NewAmmoParams);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBatteryReloadTimeUpdated OnBatteryReloadTimeUpdatedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBatteryAmmoChanged OnBatteryAmmoChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBatteryReloadCancelled OnBatteryReloadCancelledEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBatteryLoadedCannonsChanged OnBatteryLoadedCannonsChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBatteryEnhancementStateChanged OnBatteryEnhancementStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedBatteryChanged OnSelectedBatteryChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBatteryUIStateChanged OnBatteryUIStateChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BatteryManagerData* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BatteryPawnSpawnData> BatteryPawnSpawnParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel RotationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel TickLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel PawnSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel ReplicationSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ProhibitionGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULineBatchComponent* LineBatchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5BatteryAimingComponentBase*> AimingComponentArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FR5Battery> BatteryArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FR5CannonStruct> CannonsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BatteryStateArray, meta=(AllowPrivateAccess=true))
    TArray<FR5BatteryReplicatedState> BatteryStateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReloadEfficiency, meta=(AllowPrivateAccess=true))
    float ReloadEfficiency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AR5BatteryPawn*> BatteryPawnArray;
    
public:
    UR5BatteryManagerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetBatteriesAmmo(uint8 AmmoIndex, bool bChangeForAll, UR5BatteryAimingComponentBase* AimingComponent);
    
    UFUNCTION(BlueprintCallable)
    void RequestChangeAmmo(uint8 AmmoIndex, bool bChangeForAll);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReloadEfficiency(float PrevReloadEfficiency);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BatteryStateArray(const TArray<FR5BatteryReplicatedState>& PrevStateArray);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetSelectedBatteryUIData(FR5BatteryUIData& Data, AActor* OwnerContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSelectedBatteryIndex(const AActor* OwnerContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSetupAmmo(UR5BatteryAimingComponentBase* AimingComponent) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToAimingPoint(AActor* AimOwner) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetBatteryUIData(uint8 BatteryIndex, FR5BatteryUIData& Data) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5BatteryUIData> GetAllBatteriesData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetActiveBatteryIds(UR5BatteryAimingComponentBase* AimingComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5BatteryUIData> GetActiveBatteriesData() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetAimingScatter(const TArray<float>& AimingScatter);
    

    // Fix for true pure virtual functions not being implemented
};


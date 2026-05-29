#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5BoardingTargetSelectionState.h"
#include "ER5BoostNotifier.h"
#include "R5ShipUIComponent.generated.h"

class AActor;
class UR5BatteryManagerComponent;
class UR5SplineCameraMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipUIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZoomChanged, float, NewZoom);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRudderAngleChanged, float, NewAngle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGearChanged, int32, Gear);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCameraStateChanged, const FGameplayTag&, NewState, const FGameplayTag&, OldState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBoostNotify, ER5BoostNotifier, Notifier);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBoostEnergyUpdated, float, CurrentBoostEnergy);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBoardingTargetChanged, const AActor*, Target, ER5BoardingTargetSelectionState, SelectionState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGearChanged OnGearChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoostNotify OnBoostNotify;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraStateChanged OnCameraStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRudderAngleChanged OnRudderAngleChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZoomChanged OnZoomChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoardingTargetChanged OnBoardingTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoostEnergyUpdated OnBoostEnergyUpdated;
    
    UR5ShipUIComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCameraState(const FGameplayTag& NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RudderAngleChanged(float PreviousAngle, float CurrentAngle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraInState(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraInAimingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShipSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetShipRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetShipCameraRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRudderMaxAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRudderAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxEnergy() const;
    
    UFUNCTION(BlueprintPure)
    FInt32Interval GetGearInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentEnergy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentCameraState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCameraState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5SplineCameraMovementComponent* GetCameraMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BatteryManagerComponent* GetBatteryManagerComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void GearChanged(int32 Gear);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeCameraModeForRadialMenu();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CameraZoomChanged(float NewZoom);
    
    UFUNCTION(BlueprintCallable)
    void CameraStateChanged(const FGameplayTag& NewState, const FGameplayTag& OldState);
    
};


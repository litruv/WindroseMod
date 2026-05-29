#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "GameFramework/Pawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemInterface -FallbackName=AbilitySystemInterface
#include "AbilitySystemInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_AwarenessComponentInterface -FallbackName=R5AS_AwarenessComponentInterface
#include "R5AS_AwarenessComponentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Relationship -ObjectName=R5TrueRelationshipInterface -FallbackName=R5TrueRelationshipInterface
#include "R5TrueRelationshipInterface.h"
#include "R5GameplayEffectProxyInterface.h"
#include "R5PassengerInterface.h"
#include "R5BatteryPawn.generated.h"

class AActor;
class AController;
class UArrowComponent;
class UR5ASCGameplayEffectProxyComponent;
class UR5AS_AwarenessComponent;
class UR5AbilitySystemComponent;
class UR5AbilitySystemParams;
class UR5BatteryAimingComponent;
class UR5BatteryManagerComponent;
class UR5BatteryPawnInputParams;
class UR5BatteryTargetLockComponent;
class UR5CameraComponent;
class UR5PrimitiveInteractionTargetComponent;
class UR5SplineCameraMovementComponent;
class USceneComponent;

UCLASS(Blueprintable, DefaultConfig, NoExport, Config=Engine)
class R5_API AR5BatteryPawn : public APawn, public IAbilitySystemInterface, public IR5GameplayEffectProxyInterface, public IR5AS_AwarenessComponentInterface, public IR5PassengerInterface, public IR5TrueRelationshipInterface {
    GENERATED_BODY()
public:
    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetUpdateFrequencyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PrimitiveInteractionTargetComponent* BatteryInteractTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AbilitySystemComponent* R5AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilitySystemParams* AbilitySystemParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ASCGameplayEffectProxyComponent* GameplayEffectProxyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SplineCameraMovementComponent* CameraMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BatteryAimingComponent* AimingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BatteryTargetLockComponent* TargetLockComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BatteryPawnInputParams> BatteryInputParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* AimDirectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AS_AwarenessComponent* AwarenessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartInAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBatteryManagerLocallyBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BatteryIndexForAimingCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForcedOrbitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreOwnInteractionBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> BatteryManagerOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> PlayerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag BatteryFilterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bOccupiedByPlayer;
    
public:
    AR5BatteryPawn(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StopInteractionServer();
    
    UFUNCTION(BlueprintCallable)
    void StopInteraction();
    
    UFUNCTION(BlueprintCallable)
    void SingleShot();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayerPawn(APawn* Actor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBatteryManagerOwner() const;
    
    UFUNCTION(BlueprintCallable)
    UR5BatteryManagerComponent* GetBatteryManager();
    
private:
    UFUNCTION(BlueprintCallable)
    void EnterToAim();
    
public:
    UFUNCTION(BlueprintCallable)
    void BindToBatteryManagerOwner(AActor* InBatteryManagerOwner);
    

    // Fix for true pure virtual functions not being implemented
};


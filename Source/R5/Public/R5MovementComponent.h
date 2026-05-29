#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "GameplayTagContainer.h"
#include "EMovementState.h"
#include "MovementIntention.h"
#include "R5MovementComponentBase.h"
#include "R5MovementComponent.generated.h"

class AR5Character;
class UFSM;
class UInputAction;
class UMovementParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5MovementComponent : public UR5MovementComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovementStateUpdate, EMovementState, NewState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovementStateUpdate OnMovementStateUpdate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery DropSimulateRepRootMotion;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AR5Character* R5CharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFSM* StateMachine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMovementIntention MovementIntention;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float WantForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float WantRightSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CheatMovementSpeedModifer, meta=(AllowPrivateAccess=true))
    float CheatMovementSpeedModifer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovementParams* MovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* MoveAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* SprintAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ToggleSprintAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* CrouchAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* WalkAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* JumpAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* DashAction;
    
public:
    UR5MovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdateIntention(const FMovementIntention& Intention);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSaveMoveInput(float Forward, float Right);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CheatMovementSpeedModifer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyRootMotion() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetWantRotation(FRotator& OutRotator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinStaminaLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInputDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovementState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSprint() const;
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERootMotionFinishVelocityMode -FallbackName=ERootMotionFinishVelocityMode
#include "GameFramework/RootMotionSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask_ApplyRootMotion_Base -FallbackName=AbilityTask_ApplyRootMotion_Base
#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Movement -ObjectName=RootMotionForwardData -FallbackName=RootMotionForwardData
#include "RootMotionForwardData.h"
#include "ApplyRootMotionForwardDelegateDelegate.h"
#include "R5AbilityTask_ApplyRootMotionForward.generated.h"

class UCurveFloat;
class UGameplayAbility;
class UR5AbilityTask_ApplyRootMotionForward;

UCLASS(Blueprintable)
class R5GAS_API UR5AbilityTask_ApplyRootMotionForward : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyRootMotionForwardDelegate OnFinish;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector InitialForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseInitialForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BlockingCollisionShiftStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BlockingCollisionShiftStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* StrengthOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEnableGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bStopMovementIfBlocked;
    
public:
    UR5AbilityTask_ApplyRootMotionForward();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_ApplyRootMotionForward* ApplyRootMotionForwardWithStruct(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FRootMotionForwardData& RootMotionForwardData);
    
    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_ApplyRootMotionForward* ApplyRootMotionForward(UGameplayAbility* OwningAbility, FName TaskInstanceName, float NewStrength, float NewDuration, float BlockCollisionShift, TEnumAsByte<ECollisionChannel> NewCollisionChannel, bool NewBIsAdditive, UCurveFloat* NewStrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBEnableGravity, bool bInStopMovementIfBlocked, bool NewBUseInitialForward, float AdditionalCollisionRange);
    
};


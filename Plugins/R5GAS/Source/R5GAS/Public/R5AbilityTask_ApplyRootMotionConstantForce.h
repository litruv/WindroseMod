#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERootMotionFinishVelocityMode -FallbackName=ERootMotionFinishVelocityMode
#include "GameFramework/RootMotionSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask_ApplyRootMotion_Base -FallbackName=AbilityTask_ApplyRootMotion_Base
#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Movement -ObjectName=RootMotionConstantForceData -FallbackName=RootMotionConstantForceData
#include "RootMotionConstantForceData.h"
#include "R5ApplyRootMotionConstantForceDelegateDelegate.h"
#include "R5AbilityTask_ApplyRootMotionConstantForce.generated.h"

class UCurveFloat;
class UGameplayAbility;
class UR5AbilityTask_ApplyRootMotionConstantForce;

UCLASS(Blueprintable)
class R5GAS_API UR5AbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ApplyRootMotionConstantForceDelegate OnFinish;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector WorldDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* StrengthOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEnableGravity;
    
public:
    UR5AbilityTask_ApplyRootMotionConstantForce();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForceWithStruct(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FVector& Direction, const FRootMotionConstantForceData& ConstantForceData);
    
    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector NewWorldDirection, float NewStrength, float NewDuration, bool NewBIsAdditive, UCurveFloat* NewStrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBEnableGravity);
    
};


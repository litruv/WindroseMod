#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "Math/Quat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERootMotionFinishVelocityMode -FallbackName=ERootMotionFinishVelocityMode
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask_ApplyRootMotion_Base -FallbackName=AbilityTask_ApplyRootMotion_Base
#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
#include "GameFramework/RootMotionSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Movement -ObjectName=RootMotionRotationData -FallbackName=RootMotionRotationData
#include "RootMotionRotationData.h"
#include "ApplyRootMotionRotationDelegateDelegate.h"
#include "R5AbilityTask_ApplyRootMotionRotation.generated.h"

class UCurveFloat;
class UGameplayAbility;
class UR5AbilityTask_ApplyRootMotionRotation;

UCLASS(Blueprintable)
class R5GAS_API UR5AbilityTask_ApplyRootMotionRotation : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyRootMotionRotationDelegate OnFinish;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bTakeIntoAccountRootOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bConfigAngleRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* RotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEnableGravity;
    
public:
    UR5AbilityTask_ApplyRootMotionRotation();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_ApplyRootMotionRotation* ApplyRootMotionRotationWithStruct(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FRootMotionRotationData& RootMotionRotationData);
    
    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_ApplyRootMotionRotation* ApplyRootMotionRotation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FQuat NewRotation, float NewDuration, UCurveFloat* NewRotationCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBTakeIntoAccountRootOffset, bool NewBEnableGravity, bool NewBConfigAngleRotation);
    
};


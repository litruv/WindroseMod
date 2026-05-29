#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERootMotionFinishVelocityMode -FallbackName=ERootMotionFinishVelocityMode
#include "GameFramework/RootMotionSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask_ApplyRootMotion_Base -FallbackName=AbilityTask_ApplyRootMotion_Base
#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Movement -ObjectName=R5RootMotionMoveToTargetBySpline -FallbackName=R5RootMotionMoveToTargetBySpline
#include "R5RootMotionMoveToTargetBySpline.h"
#include "R5AbilityTask_MoveToTargetBySpline.generated.h"

class AActor;
class UCurveFloat;
class UGameplayAbility;
class UR5AbilityTask_MoveToTargetBySpline;
class UR5MoveBySplineCreateParams;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class R5GAS_API UR5AbilityTask_MoveToTargetBySpline : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMoveToTargetBySplineDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveToTargetBySplineDelegate OnFinish;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    USceneComponent* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UR5MoveBySplineCreateParams* SplineCreateParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float BaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpeedMultiplierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    UR5AbilityTask_MoveToTargetBySpline();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_MoveToTargetBySpline* MoveToTargetBySplineWithStruct(UGameplayAbility* OwningAbility, FName TaskInstanceName, USceneComponent* NewTarget, UR5MoveBySplineCreateParams* NewSplineCreateParams, const FR5RootMotionMoveToTargetBySpline& RootMotionData);
    
    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_MoveToTargetBySpline* MoveToTargetBySpline(UGameplayAbility* OwningAbility, FName TaskInstanceName, USceneComponent* NewTarget, UR5MoveBySplineCreateParams* NewSplineCreateParams, float NewBaseSpeed, UCurveFloat* NewSpeedMultiplierCurve, float NewDuration, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish);
    
};


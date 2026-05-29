#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERootMotionFinishVelocityMode -FallbackName=ERootMotionFinishVelocityMode
#include "GameFramework/RootMotionSource.h"
#include "R5AbilityTask_ApplyRootMotionRotation.h"
#include "R5AbilityTask_RotateToCamera.generated.h"

class UCurveFloat;
class UGameplayAbility;
class UR5AbilityTask_RotateToCamera;

UCLASS(Blueprintable)
class R5GAS_API UR5AbilityTask_RotateToCamera : public UR5AbilityTask_ApplyRootMotionRotation {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFloatInterval PossibleAngles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator BaseDeltaRotation;
    
public:
    UR5AbilityTask_RotateToCamera();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_RotateToCamera* RotateToCamera(UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator DeltaRotation, FFloatInterval NewPossibleAngles, float NewSpeed, UCurveFloat* InRotationCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bInEnableGravity);
    
};


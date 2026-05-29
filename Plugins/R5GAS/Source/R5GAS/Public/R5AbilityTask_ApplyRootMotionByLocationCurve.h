#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERootMotionFinishVelocityMode -FallbackName=ERootMotionFinishVelocityMode
#include "GameFramework/RootMotionSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask_ApplyRootMotion_Base -FallbackName=AbilityTask_ApplyRootMotion_Base
#include "Abilities/Tasks/AbilityTask_ApplyRootMotion_Base.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Movement -ObjectName=R5RootMotionByLocationOffsetData -FallbackName=R5RootMotionByLocationOffsetData
#include "R5RootMotionByLocationOffsetData.h"
#include "R5AbilityTask_ApplyRootMotionByLocationCurve.generated.h"

class UCurveVector;
class UGameplayAbility;
class UR5AbilityTask_ApplyRootMotionByLocationCurve;

UCLASS(Blueprintable)
class R5GAS_API UR5AbilityTask_ApplyRootMotionByLocationCurve : public UAbilityTask_ApplyRootMotion_Base {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FApplyRootMotionByLocationOffsetCurveDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyRootMotionByLocationOffsetCurveDelegate OnFinish;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAdditive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveVector* LocationOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEnableGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseInitialRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
public:
    UR5AbilityTask_ApplyRootMotionByLocationCurve();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_ApplyRootMotionByLocationCurve* ApplyRootMotionByLocationCurveWithStruct(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FR5RootMotionByLocationOffsetData& RootMotionByLocationOffsetData);
    
    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_ApplyRootMotionByLocationCurve* ApplyRootMotionByLocationCurve(UGameplayAbility* OwningAbility, FName TaskInstanceName, float NewDuration, bool NewBIsAdditive, UCurveVector* NewLocationOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBEnableGravity, bool NewBUseInitialRotation, int32 NewPriority);
    
};


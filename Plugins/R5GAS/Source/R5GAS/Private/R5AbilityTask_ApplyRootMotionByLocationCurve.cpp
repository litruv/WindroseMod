#include "R5AbilityTask_ApplyRootMotionByLocationCurve.h"
#include "Net/UnrealNetwork.h"

UR5AbilityTask_ApplyRootMotionByLocationCurve::UR5AbilityTask_ApplyRootMotionByLocationCurve() {
    this->Duration = 0.00f;
    this->bIsAdditive = false;
    this->LocationOffsetCurve = NULL;
    this->bEnableGravity = false;
    this->bUseInitialRotation = false;
    this->Priority = 1;
}

UR5AbilityTask_ApplyRootMotionByLocationCurve* UR5AbilityTask_ApplyRootMotionByLocationCurve::ApplyRootMotionByLocationCurveWithStruct(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FR5RootMotionByLocationOffsetData& RootMotionByLocationOffsetData) {
    return NULL;
}

UR5AbilityTask_ApplyRootMotionByLocationCurve* UR5AbilityTask_ApplyRootMotionByLocationCurve::ApplyRootMotionByLocationCurve(UGameplayAbility* OwningAbility, FName TaskInstanceName, float NewDuration, bool NewBIsAdditive, UCurveVector* NewLocationOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBEnableGravity, bool NewBUseInitialRotation, int32 NewPriority) {
    return NULL;
}

void UR5AbilityTask_ApplyRootMotionByLocationCurve::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionByLocationCurve, Duration);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionByLocationCurve, bIsAdditive);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionByLocationCurve, LocationOffsetCurve);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionByLocationCurve, bEnableGravity);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionByLocationCurve, bUseInitialRotation);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionByLocationCurve, Priority);
}



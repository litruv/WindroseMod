#include "R5AbilityTask_ApplyRootMotionRotation.h"
#include "Net/UnrealNetwork.h"

UR5AbilityTask_ApplyRootMotionRotation::UR5AbilityTask_ApplyRootMotionRotation() {
    this->Duration = 0.00f;
    this->bTakeIntoAccountRootOffset = false;
    this->bConfigAngleRotation = false;
    this->RotationCurve = NULL;
    this->bEnableGravity = false;
}

UR5AbilityTask_ApplyRootMotionRotation* UR5AbilityTask_ApplyRootMotionRotation::ApplyRootMotionRotationWithStruct(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FRootMotionRotationData& RootMotionRotationData) {
    return NULL;
}

UR5AbilityTask_ApplyRootMotionRotation* UR5AbilityTask_ApplyRootMotionRotation::ApplyRootMotionRotation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FQuat NewRotation, float NewDuration, UCurveFloat* NewRotationCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBTakeIntoAccountRootOffset, bool NewBEnableGravity, bool NewBConfigAngleRotation) {
    return NULL;
}

void UR5AbilityTask_ApplyRootMotionRotation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionRotation, Rotation);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionRotation, Duration);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionRotation, bTakeIntoAccountRootOffset);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionRotation, bConfigAngleRotation);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionRotation, RotationCurve);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionRotation, bEnableGravity);
}



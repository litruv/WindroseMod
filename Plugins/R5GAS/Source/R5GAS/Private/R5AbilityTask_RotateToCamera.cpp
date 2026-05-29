#include "R5AbilityTask_RotateToCamera.h"
#include "Net/UnrealNetwork.h"

UR5AbilityTask_RotateToCamera::UR5AbilityTask_RotateToCamera() {
    this->Speed = 0.00f;
}

UR5AbilityTask_RotateToCamera* UR5AbilityTask_RotateToCamera::RotateToCamera(UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator DeltaRotation, FFloatInterval NewPossibleAngles, float NewSpeed, UCurveFloat* InRotationCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bInEnableGravity) {
    return NULL;
}

void UR5AbilityTask_RotateToCamera::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5AbilityTask_RotateToCamera, PossibleAngles);
    DOREPLIFETIME(UR5AbilityTask_RotateToCamera, Speed);
    DOREPLIFETIME(UR5AbilityTask_RotateToCamera, BaseDeltaRotation);
}



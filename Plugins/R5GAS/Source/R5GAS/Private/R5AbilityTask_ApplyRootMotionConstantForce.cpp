#include "R5AbilityTask_ApplyRootMotionConstantForce.h"
#include "Net/UnrealNetwork.h"

UR5AbilityTask_ApplyRootMotionConstantForce::UR5AbilityTask_ApplyRootMotionConstantForce() {
    this->Strength = 0.00f;
    this->Duration = 0.00f;
    this->bIsAdditive = false;
    this->StrengthOverTime = NULL;
    this->bEnableGravity = false;
}

UR5AbilityTask_ApplyRootMotionConstantForce* UR5AbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForceWithStruct(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FVector& Direction, const FRootMotionConstantForceData& ConstantForceData) {
    return NULL;
}

UR5AbilityTask_ApplyRootMotionConstantForce* UR5AbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector NewWorldDirection, float NewStrength, float NewDuration, bool NewBIsAdditive, UCurveFloat* NewStrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBEnableGravity) {
    return NULL;
}

void UR5AbilityTask_ApplyRootMotionConstantForce::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionConstantForce, WorldDirection);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionConstantForce, Strength);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionConstantForce, Duration);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionConstantForce, bIsAdditive);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionConstantForce, StrengthOverTime);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionConstantForce, bEnableGravity);
}



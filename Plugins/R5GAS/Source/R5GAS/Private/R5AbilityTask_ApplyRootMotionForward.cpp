#include "R5AbilityTask_ApplyRootMotionForward.h"
#include "Net/UnrealNetwork.h"

UR5AbilityTask_ApplyRootMotionForward::UR5AbilityTask_ApplyRootMotionForward() {
    this->Strength = 0.00f;
    this->bUseInitialForward = false;
    this->Duration = 0.00f;
    this->BlockingCollisionShiftStart = 0.00f;
    this->BlockingCollisionShiftStop = 0.00f;
    this->CollisionChannel = ECC_WorldStatic;
    this->bIsAdditive = false;
    this->StrengthOverTime = NULL;
    this->bEnableGravity = false;
    this->bStopMovementIfBlocked = false;
}

UR5AbilityTask_ApplyRootMotionForward* UR5AbilityTask_ApplyRootMotionForward::ApplyRootMotionForwardWithStruct(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FRootMotionForwardData& RootMotionForwardData) {
    return NULL;
}

UR5AbilityTask_ApplyRootMotionForward* UR5AbilityTask_ApplyRootMotionForward::ApplyRootMotionForward(UGameplayAbility* OwningAbility, FName TaskInstanceName, float NewStrength, float NewDuration, float BlockCollisionShift, TEnumAsByte<ECollisionChannel> NewCollisionChannel, bool NewBIsAdditive, UCurveFloat* NewStrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool NewBEnableGravity, bool bInStopMovementIfBlocked, bool NewBUseInitialForward, float AdditionalCollisionRange) {
    return NULL;
}

void UR5AbilityTask_ApplyRootMotionForward::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionForward, Strength);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionForward, InitialForward);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionForward, bUseInitialForward);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionForward, Duration);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionForward, BlockingCollisionShiftStart);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionForward, BlockingCollisionShiftStop);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionForward, CollisionChannel);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionForward, bIsAdditive);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionForward, StrengthOverTime);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionForward, bEnableGravity);
    DOREPLIFETIME(UR5AbilityTask_ApplyRootMotionForward, bStopMovementIfBlocked);
}



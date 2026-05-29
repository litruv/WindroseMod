#include "R5ChangeCollisionPresetTask.h"

UR5ChangeCollisionPresetTask::UR5ChangeCollisionPresetTask()
{
}

UR5ChangeCollisionPresetTask* UR5ChangeCollisionPresetTask::ChangeCollisionProfile(UGameplayAbility* OwningAbility, FName TaskInstanceName, UPrimitiveComponent* PrimitiveComponent, FName CollisionProfileName)
{
    return nullptr;
}

void UR5ChangeCollisionPresetTask::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}


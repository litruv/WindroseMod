#include "R5AbilityTask_WaitSceneryAreaReady.h"

UR5AbilityTask_WaitSceneryAreaReady::UR5AbilityTask_WaitSceneryAreaReady() {
    this->AreaReadyDelay = 3.00f;
}

UR5AbilityTask_WaitSceneryAreaReady* UR5AbilityTask_WaitSceneryAreaReady::NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FVector& Location, float Radius, float HalfHeight, float CheckPeriod) {
    return NULL;
}



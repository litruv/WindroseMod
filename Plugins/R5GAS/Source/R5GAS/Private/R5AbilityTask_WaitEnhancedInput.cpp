#include "R5AbilityTask_WaitEnhancedInput.h"

UR5AbilityTask_WaitEnhancedInput::UR5AbilityTask_WaitEnhancedInput() {
    this->TriggerEvent = ETriggerEvent::None;
    this->FallbackPC = NULL;
}

UR5AbilityTask_WaitEnhancedInput* UR5AbilityTask_WaitEnhancedInput::NewTaskMulti(UGameplayAbility* OwningAbility, FName TaskInstanceName, TArray<UInputAction*> NewInputActions, ETriggerEvent NewTriggerEvent) {
    return NULL;
}

UR5AbilityTask_WaitEnhancedInput* UR5AbilityTask_WaitEnhancedInput::NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, UInputAction* InputAction, ETriggerEvent NewTriggerEvent) {
    return NULL;
}



#include "R5ConsumableCheck.h"

FR5ConsumableCheck::FR5ConsumableCheck() {
    this->bStatus = false;
    this->bIsCooldownable = false;
    this->bHasCooldown = false;
    this->CooldownTime = 0.00f;
    this->CurrentProgress = 0.00f;
}


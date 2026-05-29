#include "R5HandleGameplayEventForConsecutiveHitsTriggerData.h"

FR5HandleGameplayEventForConsecutiveHitsTriggerData::FR5HandleGameplayEventForConsecutiveHitsTriggerData() {
    this->NumHitsToTrigger = 0;
    this->DelayToResetPreviousHits = 0.00f;
    this->CooldownTimeForTarget = 0.00f;
    this->GlobalCooldown = 0.00f;
}


#include "R5ConsumableActivationParams.h"

FR5ConsumableActivationParams::FR5ConsumableActivationParams() {
    this->bInterruptByTakenDamage = false;
    this->ActivationConsumeType = ER5ActivationConsumeType::SpendItems;
    this->SpendCount = 0;
    this->bCanSkipSpend = false;
    this->BaseSkipSpendProbability = 0.00f;
}


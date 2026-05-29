#include "R5Ability.h"

UR5Ability::UR5Ability() {
    this->bActivateAbilityOnGranted = false;
}

void UR5Ability::MontageJumpToSectionOwningClient(FName SectionName) {
}


APlayerController* UR5Ability::GetPlayerControllerFromActorInfo() const {
    return NULL;
}

UAnimMontage* UR5Ability::GetAnimMontageByTag(FGameplayTag MontageTag) const {
    return NULL;
}

AAIController* UR5Ability::GetAIControllerFromActorInfo() const {
    return NULL;
}



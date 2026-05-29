#include "R5AIBehaviorAttributeSet.h"
#include "Net/UnrealNetwork.h"

UR5AIBehaviorAttributeSet::UR5AIBehaviorAttributeSet() {
}

void UR5AIBehaviorAttributeSet::OnRep_Difficulty(const FGameplayAttributeData& OldDifficulty) {
}

void UR5AIBehaviorAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5AIBehaviorAttributeSet, Difficulty);
}



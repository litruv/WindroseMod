#include "R5PostureAttributeSet.h"
#include "Net/UnrealNetwork.h"

UR5PostureAttributeSet::UR5PostureAttributeSet() {
}

void UR5PostureAttributeSet::OnRep_StaggerPowerAdded(const FGameplayAttributeData& OldStaggerPowerAdded) {
}

void UR5PostureAttributeSet::OnRep_StaggerDefence(const FGameplayAttributeData& OldStaggerDefence) {
}

void UR5PostureAttributeSet::OnRep_PostureRegenRate(const FGameplayAttributeData& OldPostureRegenRate) {
}

void UR5PostureAttributeSet::OnRep_Posture(const FGameplayAttributeData& OldPosture) {
}

void UR5PostureAttributeSet::OnRep_MaxPosture(const FGameplayAttributeData& OldMaxPosture) {
}

void UR5PostureAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5PostureAttributeSet, Posture);
    DOREPLIFETIME(UR5PostureAttributeSet, MaxPosture);
    DOREPLIFETIME(UR5PostureAttributeSet, PostureRegenRate);
    DOREPLIFETIME(UR5PostureAttributeSet, StaggerPowerAdded);
    DOREPLIFETIME(UR5PostureAttributeSet, StaggerDefence);
}



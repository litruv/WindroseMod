#include "R5WDSAttributeSet.h"
#include "Net/UnrealNetwork.h"

UR5WDSAttributeSet::UR5WDSAttributeSet() {
}

void UR5WDSAttributeSet::OnRep_WDSHealthMultiplier(const FGameplayAttributeData& OldWDSHealthMultiplier) {
}

void UR5WDSAttributeSet::OnRep_WDSCoopHealthMultiplier(const FGameplayAttributeData& OldWDSCoopHealthMultiplier) {
}

void UR5WDSAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5WDSAttributeSet, WDSHealthMultiplier);
    DOREPLIFETIME(UR5WDSAttributeSet, WDSCoopHealthMultiplier);
}



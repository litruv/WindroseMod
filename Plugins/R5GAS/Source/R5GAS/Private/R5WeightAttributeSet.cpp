#include "R5WeightAttributeSet.h"
#include "Net/UnrealNetwork.h"

UR5WeightAttributeSet::UR5WeightAttributeSet() {
}

void UR5WeightAttributeSet::OnRep_MaxWeightCapacity(const FGameplayAttributeData& OldMaxWeightCapacity) {
}

void UR5WeightAttributeSet::OnRep_CarriedWeight(const FGameplayAttributeData& OldCarriedWeight) {
}

void UR5WeightAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UR5WeightAttributeSet, CarriedWeight);
    DOREPLIFETIME(UR5WeightAttributeSet, MaxWeightCapacity);
}



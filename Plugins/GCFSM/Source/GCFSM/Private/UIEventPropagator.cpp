#include "UIEventPropagator.h"

UUIEventPropagator::UUIEventPropagator() {
}

void UUIEventPropagator::SimpleTransition(UHFSMState* Instigator, FGameplayTag Event) {
}

void UUIEventPropagator::PropagateEvent(UHFSMState* Instigator, FUIEvent Event, EUIEventPropagation Propagation) {
}

void UUIEventPropagator::MultiTransition(UHFSMState* Instigator, const TArray<FGameplayTag>& Events) {
}



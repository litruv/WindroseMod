#include "GCFSM_BTTask_TriggerEvent.h"

UGCFSM_BTTask_TriggerEvent::UGCFSM_BTTask_TriggerEvent() {
    this->NodeName = TEXT("FSM Trigger Event");
    this->targetPolicy = EGCFSMTriggerEventTargetPolicy::ContextObject;
    this->propagateToSubstates = true;
    this->triggerInternalEvents = true;
    this->queuePolicy = EGCFSMTriggerEventQueuePolicy::JustQueue;
    this->expireAfter = 0.00f;
}



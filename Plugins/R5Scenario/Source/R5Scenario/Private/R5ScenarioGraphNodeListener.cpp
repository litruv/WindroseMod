#include "R5ScenarioGraphNodeListener.h"
#include "Templates/SubclassOf.h"

UR5ScenarioGraphNodeListener::UR5ScenarioGraphNodeListener() {
    this->ShouldHideNodePin = false;
}

void UR5ScenarioGraphNodeListener::EndListener(FName OutName) {
}

UR5ScenarioGraphNodeListener* UR5ScenarioGraphNodeListener::CreateListenerNode(UObject* WorldContextObject, TSubclassOf<UR5ScenarioGraphNodeListener> ListenerClass, FGuid Guid, UR5ScenarioGraphNodeListener*& OutObj) {
    return NULL;
}



#include "R5ScenarioGraphNodeUI.h"
#include "Templates/SubclassOf.h"

UR5ScenarioGraphNodeUI::UR5ScenarioGraphNodeUI() {
    this->CPinNames.AddDefaulted(1);
}

UR5ScenarioGraphNodeUI* UR5ScenarioGraphNodeUI::CreateUINode(UObject* WorldContextObject, TSubclassOf<UR5ScenarioGraphNodeUI> UIClass, FGuid Guid, UR5ScenarioGraphNodeUI*& OutObj) {
    return NULL;
}



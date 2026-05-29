#include "R5ScenarioGraphNodeTask.h"
#include "Templates/SubclassOf.h"

UR5ScenarioGraphNodeTask::UR5ScenarioGraphNodeTask() {
    this->AuthorityType = ER5ScenarioAuthorityType::Server;
    this->AvailableExecOnClientSide = false;
}

void UR5ScenarioGraphNodeTask::EndTask() {
}

UR5ScenarioGraphNodeTask* UR5ScenarioGraphNodeTask::CreateTaskNode(UObject* WorldContextObject, TSubclassOf<UR5ScenarioGraphNodeTask> TaskClass, FGuid Guid, UR5ScenarioGraphNodeTask*& OutObj) {
    return NULL;
}



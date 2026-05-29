#include "R5ScenarioComponentBase.h"

UR5ScenarioComponentBase::UR5ScenarioComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Executor = NULL;
    this->WorldProxy = NULL;
}



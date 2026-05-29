#include "R5HFSM_ComicsObserver.h"

bool UR5HFSM_ComicsObserver::HasReadyToPlay() const
{
    return false;
}

void UR5HFSM_ComicsObserver::OnComicsChangeState(UR5UIScenarioBlackboardIntObserver* SourceObserver)
{
}

UR5HFSM_ComicsObserver::UR5HFSM_ComicsObserver()
{
}

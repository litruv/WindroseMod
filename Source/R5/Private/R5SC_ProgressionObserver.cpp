#include "R5SC_ProgressionObserver.h"

bool UR5SC_ProgressionObserver::HasFreeTalentPoints() const
{
    return false;
}

FR5BLLevelData UR5SC_ProgressionObserver::GetCurrentLevelData() const
{
    return {};
}

bool UR5SC_ProgressionObserver::HasFreeStatPoints() const
{
    return false;
}

int32 UR5SC_ProgressionObserver::GetPlayerCurrentLevel() const
{
    return 0;
}

UR5SC_ProgressionObserver::UR5SC_ProgressionObserver()
{
}

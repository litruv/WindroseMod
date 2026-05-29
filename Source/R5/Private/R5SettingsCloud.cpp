#include "R5SettingsCloud.h"

UR5SettingsCloud::UR5SettingsCloud()
{
}

void UR5SettingsCloud::SetColorBlindStrength(int32 InColorBlindStrength)
{
}

void UR5SettingsCloud::SwitchTargetLockAutoSwitch(bool NewValue)
{
}

bool UR5SettingsCloud::IsStatsEnabled() const
{
    return false;
}

EColorVisionDeficiency UR5SettingsCloud::GetColorBlindMode() const
{
    return {};
}

void UR5SettingsCloud::SetColorBlindMode(EColorVisionDeficiency InMode)
{
}

bool UR5SettingsCloud::IsTargetLockAutoSwitchEnabled() const
{
    return false;
}

void UR5SettingsCloud::SwitchHoldToGather(bool NewValue)
{
}

int32 UR5SettingsCloud::GetColorBlindStrength() const
{
    return 0;
}

void UR5SettingsCloud::EnableStats(bool NewValue)
{
}

bool UR5SettingsCloud::IsHoldToGatherEnabled() const
{
    return false;
}

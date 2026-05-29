#include "R5GenericTabsNavigation.h"

void UR5GenericTabsNavigation::GoToPreviousTab()
{
}

int32 UR5GenericTabsNavigation::GetActiveTabIdx() const
{
    return 0;
}

FR5GenericTabData UR5GenericTabsNavigation::GetActiveTabData() const
{
    return {};
}

void UR5GenericTabsNavigation::TabStateChanged(const UR5GenericTab* Tab)
{
}

void UR5GenericTabsNavigation::GoToNextTab()
{
}

void UR5GenericTabsNavigation::CreateTabs(const TArray<FR5GenericTabData>& Tabs)
{
}

UR5GenericTabsNavigation::UR5GenericTabsNavigation()
    : Super(FObjectInitializer::Get())
{
}

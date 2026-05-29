#include "R5NavigationBuilderComponent.h"

UR5NavigationBuilderComponent::UR5NavigationBuilderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavigationGrid = NULL;
    this->NavBuilderParams = NULL;
}

void UR5NavigationBuilderComponent::OnMercunaNavigationRebuildComplete(const AActor* Volume, bool bSuccess) {
}

void UR5NavigationBuilderComponent::OnMercunaNavigationBuildComplete(bool bSuccess) {
}



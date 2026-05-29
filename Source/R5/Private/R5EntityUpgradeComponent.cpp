#include "R5EntityUpgradeComponent.h"

UR5EntityUpgradeComponent::UR5EntityUpgradeComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UR5EntityUpgradeComponent::OnBuildingBlockUpdated(const FR5BLRecordPath& ViewPath)
{
}

int32 UR5EntityUpgradeComponent::GetLevel() const
{
    return 0;
}

UR5EntityUpgradeParams* UR5EntityUpgradeComponent::GetParams() const
{
    return nullptr;
}

void UR5EntityUpgradeComponent::OnRep_Level()
{
}

TSoftObjectPtr<UR5BLRecipeData> UR5EntityUpgradeComponent::GetActualRecipe() const
{
    return {};
}

void UR5EntityUpgradeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

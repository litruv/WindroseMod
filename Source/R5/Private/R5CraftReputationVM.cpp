#include "R5CraftReputationVM.h"

UR5CraftReputationVM::UR5CraftReputationVM()
{
}

FString UR5CraftReputationVM::GetMarkdownTag() const
{
    return {};
}

FLinearColor UR5CraftReputationVM::GetAccentColor() const
{
    return {};
}

int32 UR5CraftReputationVM::GetCurrentReputationForLevel() const
{
    return 0;
}

TSoftObjectPtr<UR5BLProductionReputationParams> UR5CraftReputationVM::GetProductionReputationParams() const
{
    return {};
}

int32 UR5CraftReputationVM::GetCurrentFactionLevel() const
{
    return 0;
}

int32 UR5CraftReputationVM::GetMaxReputation() const
{
    return 0;
}

FText UR5CraftReputationVM::GetFactionDescription() const
{
    return {};
}

bool UR5CraftReputationVM::IsMaxFactionLevel() const
{
    return false;
}

int32 UR5CraftReputationVM::GetMaxFactionLevel() const
{
    return 0;
}

bool UR5CraftReputationVM::HasProductionReputation() const
{
    return false;
}

FText UR5CraftReputationVM::GetFactionName() const
{
    return {};
}

TSoftObjectPtr<UTexture2D> UR5CraftReputationVM::GetFactionIcon() const
{
    return {};
}

int32 UR5CraftReputationVM::GetTotalReputationForLevel() const
{
    return 0;
}

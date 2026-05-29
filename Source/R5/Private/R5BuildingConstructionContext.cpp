#include "R5BuildingConstructionContext.h"

UR5BuildingConstructionContext::UR5BuildingConstructionContext()
{
}

void UR5BuildingConstructionContext::SetSnappingMode(ER5BuildingAbilitySnappingMode NewSnappingMode)
{
}

void UR5BuildingConstructionContext::AddRestrictions(const FGameplayTagContainer& InRestrictions)
{
}

FVector UR5BuildingConstructionContext::GetBrushYawOffset() const
{
    return {};
}

FQuat UR5BuildingConstructionContext::GetBrushQuaternion() const
{
    return {};
}

void UR5BuildingConstructionContext::SetRotationStep(int32 StepValue)
{
}

void UR5BuildingConstructionContext::ResetBrushOffset()
{
}

void UR5BuildingConstructionContext::SetBrush(UR5BuildingBrush* NewBrush)
{
}

UR5BuildingBrush* UR5BuildingConstructionContext::GetBrush() const
{
    return nullptr;
}

FBox UR5BuildingConstructionContext::GetPhysicsVolume() const
{
    return {};
}

void UR5BuildingConstructionContext::RotateBrush(const FQuat& RotationQuaternion)
{
}

int32 UR5BuildingConstructionContext::GetRotationStep() const
{
    return 0;
}

FGameplayTagContainer UR5BuildingConstructionContext::GetRestrictions() const
{
    return {};
}

ER5BuildingAbilitySnappingMode UR5BuildingConstructionContext::GetSnappingMode() const
{
    return {};
}

void UR5BuildingConstructionContext::ShiftBrushOffset(const FVector& OffsetDelta)
{
}

void UR5BuildingConstructionContext::UpdateBrushRandomRotation()
{
}

void UR5BuildingConstructionContext::ResetRestrictions()
{
}

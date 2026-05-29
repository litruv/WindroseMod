#include "R5MarkerModelBase.h"

UR5MarkerModelBase::UR5MarkerModelBase()
{
}

void UR5MarkerModelBase::SetSnappingAllowed(bool bAllow)
{
}

TArray<UR5MarkerWidget*> UR5MarkerModelBase::GetWidgets() const
{
    return {};
}

void UR5MarkerModelBase::RemoveMarker()
{
}

int32 UR5MarkerModelBase::GetPlayerLevel() const
{
    return 0;
}

bool UR5MarkerModelBase::IsSnappingAllowed() const
{
    return false;
}

void UR5MarkerModelBase::Update()
{
}

void UR5MarkerModelBase::SetShownName(const FText& Name)
{
}

void UR5MarkerModelBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

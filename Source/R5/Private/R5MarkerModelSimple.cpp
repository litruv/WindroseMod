#include "R5MarkerModelSimple.h"

UTexture2D* UR5MarkerModelSimple::GetTexture() const
{
    return nullptr;
}

UR5MarkerModelSimple::UR5MarkerModelSimple()
{
}

void UR5MarkerModelSimple::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

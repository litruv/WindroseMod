#include "R5ReplicatedObject.h"

AActor* UR5ReplicatedObject::GetOwner() const
{
    return nullptr;
}

bool UR5ReplicatedObject::HasAuthority() const
{
    return false;
}

UWorld* UR5ReplicatedObject::GetWorld() const
{
    return nullptr;
}

UR5ReplicatedObject::UR5ReplicatedObject()
{
}

void UR5ReplicatedObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

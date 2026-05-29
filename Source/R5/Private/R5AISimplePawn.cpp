#include "R5AISimplePawn.h"

void AR5AISimplePawn::StaticRegisterNativesAR5AISimplePawn()
{
}

void AR5AISimplePawn::ActivateCharacter()
{
}

AR5AIController* AR5AISimplePawn::GetR5AIController() const
{
    return nullptr;
}

void AR5AISimplePawn::OnRep_ColorID()
{
}

AR5AISimplePawn::AR5AISimplePawn(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void AR5AISimplePawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

#include "R5Ability_InteractOption_Base.h"

void UR5Ability_InteractOption_Base::HandleInterruptEvent(FGameplayEventData Payload)
{
}

TScriptInterface<IR5InteractionTarget> UR5Ability_InteractOption_Base::GetInteractTarget() const
{
    return {};
}

AActor* UR5Ability_InteractOption_Base::GetTargetActor() const
{
    return nullptr;
}

UR5InteractionTargetModel* UR5Ability_InteractOption_Base::GetInteractionTargetModel() const
{
    return nullptr;
}

UR5Ability_InteractOption_Base::UR5Ability_InteractOption_Base()
{
}

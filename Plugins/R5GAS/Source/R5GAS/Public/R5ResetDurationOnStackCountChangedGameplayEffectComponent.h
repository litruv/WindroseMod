#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectComponent -FallbackName=GameplayEffectComponent
#include "GameplayEffectComponent.h"
#include "R5ResetDurationOnStackCountChangedGameplayEffectComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5GAS_API UR5ResetDurationOnStackCountChangedGameplayEffectComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
    UR5ResetDurationOnStackCountChangedGameplayEffectComponent();

};


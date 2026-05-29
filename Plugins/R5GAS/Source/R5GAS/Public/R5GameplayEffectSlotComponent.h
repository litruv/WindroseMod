#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectComponent -FallbackName=GameplayEffectComponent
#include "GameplayEffectComponent.h"
#include "R5GameplayEffectSlotComponent.generated.h"

class UR5GameplayEffectSlotParams;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5GAS_API UR5GameplayEffectSlotComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5GameplayEffectSlotParams* Params;
    
public:
    UR5GameplayEffectSlotComponent();

};


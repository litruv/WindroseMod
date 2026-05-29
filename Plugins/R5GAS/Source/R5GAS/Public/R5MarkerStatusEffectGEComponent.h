#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectComponent -FallbackName=GameplayEffectComponent
#include "GameplayEffectComponent.h"
#include "R5MarkerStatusEffectGEComponent.generated.h"

class UR5MarkerStatusEffectParams;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5GAS_API UR5MarkerStatusEffectGEComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MarkerStatusEffectParams* Params;
    
public:
    UR5MarkerStatusEffectGEComponent();

};


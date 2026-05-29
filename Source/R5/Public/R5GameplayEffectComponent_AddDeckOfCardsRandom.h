#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectComponent -FallbackName=GameplayEffectComponent
#include "GameplayEffectComponent.h"
#include "R5GameplayEffectComponent_AddDeckOfCardsRandom.generated.h"

class UR5DeckOfCardsRandomParams;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5GameplayEffectComponent_AddDeckOfCardsRandom : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DeckOfCardsRandomParams* DeckOfCardsRandom;
    
public:
    UR5GameplayEffectComponent_AddDeckOfCardsRandom();

};


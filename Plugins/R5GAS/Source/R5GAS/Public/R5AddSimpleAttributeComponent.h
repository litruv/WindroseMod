#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectComponent -FallbackName=GameplayEffectComponent
#include "GameplayEffectComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AddSimpleAttributeComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5GAS_API UR5AddSimpleAttributeComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> AddSimpleAttributes;
    
public:
    UR5AddSimpleAttributeComponent();

};


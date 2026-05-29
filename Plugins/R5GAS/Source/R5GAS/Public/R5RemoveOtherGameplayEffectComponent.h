#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectComponent -FallbackName=GameplayEffectComponent
#include "GameplayEffectComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectQuery -FallbackName=GameplayEffectQuery
#include "GameplayEffect.h"
#include "R5RemoveOtherGameplayEffectComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5GAS_API UR5RemoveOtherGameplayEffectComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayEffectQuery> RemoveGameplayEffectQueries;
    
public:
    UR5RemoveOtherGameplayEffectComponent();

};


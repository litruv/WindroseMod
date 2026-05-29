#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AdditionalEffectsGameplayEffectComponent -FallbackName=AdditionalEffectsGameplayEffectComponent
#include "GameplayEffectComponents/AdditionalEffectsGameplayEffectComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "R5AddAdditionalEffectConditional.generated.h"

class UGameplayEffectCustomApplicationRequirement;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5GAS_API UR5AddAdditionalEffectConditional : public UAdditionalEffectsGameplayEffectComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> AdditionalMagnitudes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RemovedMagnitudes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffectCustomApplicationRequirement>> Requirements;
    
    UR5AddAdditionalEffectConditional();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectCustomApplicationRequirement -FallbackName=GameplayEffectCustomApplicationRequirement
#include "GameplayEffectCustomApplicationRequirement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5EffectDynamicTagRequirement.generated.h"

UCLASS(Blueprintable)
class R5_API UR5EffectDynamicTagRequirement : public UGameplayEffectCustomApplicationRequirement {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
public:
    UR5EffectDynamicTagRequirement();

};


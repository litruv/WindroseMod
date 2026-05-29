#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectCustomApplicationRequirement -FallbackName=GameplayEffectCustomApplicationRequirement
#include "GameplayEffectCustomApplicationRequirement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5MagnitudeBasedChanceApplicationRequirement.generated.h"

UCLASS(Blueprintable)
class R5_API UR5MagnitudeBasedChanceApplicationRequirement : public UGameplayEffectCustomApplicationRequirement {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MagnitudeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseChance;
    
public:
    UR5MagnitudeBasedChanceApplicationRequirement();

};


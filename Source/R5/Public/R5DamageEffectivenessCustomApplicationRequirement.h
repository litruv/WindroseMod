#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttribute -FallbackName=GameplayAttribute
#include "AttributeSet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectCustomApplicationRequirement -FallbackName=GameplayEffectCustomApplicationRequirement
#include "GameplayEffectCustomApplicationRequirement.h"
#include "R5DamageEffectivenessCustomApplicationRequirement.generated.h"

UCLASS(Blueprintable)
class R5_API UR5DamageEffectivenessCustomApplicationRequirement : public UGameplayEffectCustomApplicationRequirement {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAttribute> DamageResistAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAttribute> BlockEffectivenessAttributes;
    
public:
    UR5DamageEffectivenessCustomApplicationRequirement();

};


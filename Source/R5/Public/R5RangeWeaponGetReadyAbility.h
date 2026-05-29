#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5RangeWeaponGetReadyAbility.generated.h"

class UR5RangeWeaponGetReadyAbilityTechParams;

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponGetReadyAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponGetReadyAbilityTechParams* TechParams;
    
public:
    UR5RangeWeaponGetReadyAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void CallEndAbility(FGameplayTag EventTag, FGameplayEventData EventData);
    
    UFUNCTION(BlueprintCallable)
    void CallCancelAbility(FGameplayTag EventTag, FGameplayEventData EventData);
    
};


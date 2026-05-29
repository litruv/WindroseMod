#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5RangeWeaponGetReadyAbility.h"
#include "R5RangeWeaponGetReadyUseAMAbility.generated.h"

class UR5AbilityTask_PlayMontageAndWaitForEvent;
class UR5RangeWeaponGetReadyUseAMAbilityTechParams;

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponGetReadyUseAMAbility : public UR5RangeWeaponGetReadyAbility {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponGetReadyUseAMAbilityTechParams* UseAMTechParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_PlayMontageAndWaitForEvent* MontageTask;
    
public:
    UR5RangeWeaponGetReadyUseAMAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnEventReceived(FGameplayTag EventTag, FGameplayEventData EventData);
    
};


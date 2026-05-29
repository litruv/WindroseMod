#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5RangeWeaponActiveReloadAbility.generated.h"

class UAbilityTask_WaitDelay;
class UR5AbilityTask_PlayMontageAndWaitForEvent;
class UR5RangeWeaponActiveReloadAbilityTechParams;

UCLASS(Blueprintable)
class R5_API UR5RangeWeaponActiveReloadAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponActiveReloadAbilityTechParams* TechParams;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_PlayMontageAndWaitForEvent* ReloadAnimMontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitDelay* ReloadStateTimerTask;
    
public:
    UR5RangeWeaponActiveReloadAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnReloadStateTimerFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerRangeWeaponItemAmmoUpdated(int32 NewAmmo, int32 OldAmmo, int32 MaxAmmo);
    
    UFUNCTION(BlueprintCallable)
    void MontageInterrupted(FGameplayTag EventTag, FGameplayEventData EventData);
    
    UFUNCTION(BlueprintCallable)
    void MontageFinished(FGameplayTag EventTag, FGameplayEventData EventData);
    
    UFUNCTION(BlueprintCallable)
    void EventReceived(FGameplayTag EventTag, FGameplayEventData EventData);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetReplicatedReloadStateId(int32 ReloadStateId);
    
};


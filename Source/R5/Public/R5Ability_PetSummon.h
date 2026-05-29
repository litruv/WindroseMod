#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_PetSummon.generated.h"

class AR5AICharacter;
class UR5AbilityTask_PlayMontageAndWaitForEvent;
class UR5PetSummonParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_PetSummon : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PetSummonParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_PlayMontageAndWaitForEvent* MontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AR5AICharacter*> SpawnedPets;
    
public:
    UR5Ability_PetSummon();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageFinished(FGameplayTag EventTag, FGameplayEventData EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageCanceled(FGameplayTag EventTag, FGameplayEventData EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnEventReceived(FGameplayTag EventTag, FGameplayEventData EventData);
    
};


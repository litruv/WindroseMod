#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemsStackData -FallbackName=R5BLItemsStackData
#include "R5BLItemsStackData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "Templates/SubclassOf.h"
#include "R5FishingAbility.generated.h"

class AR5Bobber;
class UR5AbilityTask_PlayMontageAndWaitForEvent;
class UR5FishingAbilityParams;
class UR5FishingCatchParams;
class UR5FishingCommonParams;

UCLASS(Blueprintable)
class R5_API UR5FishingAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5FishingAbilityParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5FishingCommonParams* CommonParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AR5Bobber> BobberClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5FishingCatchParams* CatchParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_PlayMontageAndWaitForEvent* PlayAnimMontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemsStackData> FishingCatch;
    
public:
    UR5FishingAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnNetSyncRotateToCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnNetSyncRotateToBobber();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnd(FGameplayTag EventTag, FGameplayEventData EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageCancel(FGameplayTag EventTag, FGameplayEventData EventData);
    
};


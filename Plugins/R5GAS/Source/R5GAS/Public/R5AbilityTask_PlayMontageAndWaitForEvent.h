#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "RPGPlayMontageAndWaitForEventDelegateDelegate.h"
#include "R5AbilityTask_PlayMontageAndWaitForEvent.generated.h"

class UAnimMontage;
class UGameplayAbility;
class UR5AbilityTask_PlayMontageAndWaitForEvent;

UCLASS(Blueprintable)
class R5GAS_API UR5AbilityTask_PlayMontageAndWaitForEvent : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRPGPlayMontageAndWaitForEventDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRPGPlayMontageAndWaitForEventDelegate OnBlendOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRPGPlayMontageAndWaitForEventDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRPGPlayMontageAndWaitForEventDelegate OnCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRPGPlayMontageAndWaitForEventDelegate EventReceived;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EventTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimRootMotionTranslationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopWhenAbilityEnds;
    
public:
    UR5AbilityTask_PlayMontageAndWaitForEvent();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_PlayMontageAndWaitForEvent* PlayMontageAndWaitForEvent(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewMontageToPlay, FGameplayTagContainer NewEventTags, float NewRate, FName NewStartSection, bool NewBStopWhenAbilityEnds, float NewAnimRootMotionTranslationScale);
    
};


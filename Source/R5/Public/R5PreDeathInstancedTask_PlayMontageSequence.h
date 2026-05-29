#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5InstancedTaskMontageData.h"
#include "R5PreDeathInstancedTask.h"
#include "Templates/SubclassOf.h"
#include "R5PreDeathInstancedTask_PlayMontageSequence.generated.h"

class UGameplayEffect;
class UR5AbilityTask_PlayMontageAndWaitForEvent;

UCLASS(Blueprintable, EditInlineNew)
class UR5PreDeathInstancedTask_PlayMontageSequence : public UR5PreDeathInstancedTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> OngoingGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5InstancedTaskMontageData> MontageSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_PlayMontageAndWaitForEvent* AnimMontageTask;
    
public:
    UR5PreDeathInstancedTask_PlayMontageSequence();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnd(FGameplayTag EventTag, FGameplayEventData EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageCancel(FGameplayTag EventTag, FGameplayEventData EventData);
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "Abilities/GameplayAbilityTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5Ability_Terraform.h"
#include "R5Ability_Terraform_Tool.generated.h"

class UR5AbilityTask_PlayMontageAndWaitForEvent;
class UR5AbilityTask_Terraform_DrawViewTarget;
class UR5TerraformToolParams;

UCLASS(Abstract, Blueprintable)
class R5_API UR5Ability_Terraform_Tool : public UR5Ability_Terraform {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5TerraformToolParams* TerraformParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_Terraform_DrawViewTarget* DrawViewTargetTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_PlayMontageAndWaitForEvent* AnimMontageTask;
    
public:
    UR5Ability_Terraform_Tool();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTerraformingBlockTagEvent(FGameplayTag GameplayTag, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmTerraformFromInput();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimMontageEvent(FGameplayTag EventTag, FGameplayEventData EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimMontageCompleted(FGameplayTag EventTag, FGameplayEventData EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimMontageCanceled(FGameplayTag EventTag, FGameplayEventData EventData);
    
    UFUNCTION(BlueprintCallable)
    void ApplyTerraformStartEffectsOnNetSync();
    
};


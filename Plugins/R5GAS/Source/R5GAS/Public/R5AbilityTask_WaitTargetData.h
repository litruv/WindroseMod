#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetDataHandle -FallbackName=GameplayAbilityTargetDataHandle
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "ER5WaitTargetDataConfirmationType.h"
#include "ER5WaitTargetDataServerMode.h"
#include "Templates/SubclassOf.h"
#include "R5AbilityTask_WaitTargetData.generated.h"

class AR5TargetDataPreview;
class UGameplayAbility;
class UR5AbilityTask_WaitTargetData;
class UR5TargetDataProducer;

UCLASS(Blueprintable)
class R5GAS_API UR5AbilityTask_WaitTargetData : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTargetDataHandleDelegate, const FGameplayAbilityTargetDataHandle&, TargetDataHandle);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetDataHandleDelegate TargetDataConfirmedDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5TargetDataProducer* TargetDataProducer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AR5TargetDataPreview* TargetDataPreview;
    
public:
    UR5AbilityTask_WaitTargetData();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLocalConfirm();
    
    UFUNCTION(BlueprintCallable)
    void OnLocalCancel();
    
public:
    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_WaitTargetData* NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, ER5WaitTargetDataConfirmationType ConfirmationType, bool bFinishOnConfirmation, ER5WaitTargetDataServerMode ServerMode, bool bCancelable, TSubclassOf<UR5TargetDataProducer> ProducerClass, TSubclassOf<AR5TargetDataPreview> PreviewClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5TargetDataProducer* GetProducer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AR5TargetDataPreview* GetDataPreview() const;
    
};


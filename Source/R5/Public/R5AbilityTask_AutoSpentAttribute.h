#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5AbilityTask_AutoSpentAttribute.generated.h"

class UGameplayAbility;
class UR5AbilityTask_AutoSpentAttribute;
class UR5BLInventoryView;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_AutoSpentAttribute : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnAutoSpendFinished, const FR5BLRecordId&, ItemId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnAutoSpendFinished OnAutoSpendFinished;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* InventoryView;
    
public:
    UR5AbilityTask_AutoSpentAttribute();

protected:
    UFUNCTION(BlueprintCallable)
    void SpendAttribute();
    
public:
    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_AutoSpentAttribute* NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FR5BLRecordId& InItemId);
    
};


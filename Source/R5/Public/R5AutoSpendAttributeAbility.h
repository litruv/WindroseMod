#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5AutoSpendAttributeAbility.generated.h"

class UR5AbilityTask_AutoSpentAttribute;

UCLASS(Blueprintable)
class R5_API UR5AutoSpendAttributeAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5AbilityTask_AutoSpentAttribute*> ActiveAttributesTasks;
    
public:
    UR5AutoSpendAttributeAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTaskFinished(const FR5BLRecordId& ItemId);
    
};


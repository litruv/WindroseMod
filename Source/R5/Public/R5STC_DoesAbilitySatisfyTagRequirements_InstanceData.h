#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5STC_DoesAbilitySatisfyTagRequirements_InstanceData.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct R5_API FR5STC_DoesAbilitySatisfyTagRequirements_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> Ability;
    
    FR5STC_DoesAbilitySatisfyTagRequirements_InstanceData();
};


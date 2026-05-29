#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5NoDamageHandleGameplayEventTriggerData.generated.h"

USTRUCT(BlueprintType)
struct FR5NoDamageHandleGameplayEventTriggerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    R5GAS_API FR5NoDamageHandleGameplayEventTriggerData();
};


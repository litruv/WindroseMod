#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5WaitUntilGameplayTagRemovedStateTreeTaskInstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5WaitUntilGameplayTagRemovedStateTreeTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
    FR5WaitUntilGameplayTagRemovedStateTreeTaskInstanceData();
};


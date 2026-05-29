#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AbilitySystemGameplayEventStateTreeTaskInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FR5AbilitySystemGameplayEventStateTreeTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayEventTag;
    
    R5_API FR5AbilitySystemGameplayEventStateTreeTaskInstanceData();
};


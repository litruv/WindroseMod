#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AMTaskData_RemoveTagFromContext.generated.h"

USTRUCT(BlueprintType)
struct R5ACTIONMANAGER_API FR5AMTaskData_RemoveTagFromContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ContextToRemove;
    
    FR5AMTaskData_RemoveTagFromContext();
};


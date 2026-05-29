#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AMTaskData_SendGameplayTagToContextActor.generated.h"

USTRUCT(BlueprintType)
struct R5ACTIONMANAGER_API FR5AMTaskData_SendGameplayTagToContextActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActorContextTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PassableGameplayTag;
    
    FR5AMTaskData_SendGameplayTagToContextActor();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AMTaskData_ChangeObjectActiveState.generated.h"

USTRUCT(BlueprintType)
struct R5ACTIONMANAGER_API FR5AMTaskData_ChangeObjectActiveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActivatedActorContextTag;
    
    FR5AMTaskData_ChangeObjectActiveState();
};


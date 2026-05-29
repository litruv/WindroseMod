#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AMListenerData_InteractionFromInstance.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5AMListenerData_InteractionFromInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InteractableObjectContextTag;
    
    FR5AMListenerData_InteractionFromInstance();
};


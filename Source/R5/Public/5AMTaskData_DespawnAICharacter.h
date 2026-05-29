#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "5AMTaskData_DespawnAICharacter.generated.h"

USTRUCT(BlueprintType)
struct R5_API F5AMTaskData_DespawnAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AICharacterContextTags;
    
    F5AMTaskData_DespawnAICharacter();
};


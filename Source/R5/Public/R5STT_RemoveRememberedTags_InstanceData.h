#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5STT_RemoveRememberedTags_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_RemoveRememberedTags_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToRemove;
    
    FR5STT_RemoveRememberedTags_InstanceData();
};


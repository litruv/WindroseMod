#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5STT_AddReplicatedTag_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_AddReplicatedTag_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
    FR5STT_AddReplicatedTag_InstanceData();
};


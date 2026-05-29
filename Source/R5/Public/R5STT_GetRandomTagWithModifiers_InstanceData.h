#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5ProbabilityData -FallbackName=R5ProbabilityData
#include "R5ProbabilityData.h"
#include "R5STT_GetRandomTagWithModifiers_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STT_GetRandomTagWithModifiers_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ProbabilityData> RandomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChosenTag;
    
    FR5STT_GetRandomTagWithModifiers_InstanceData();
};


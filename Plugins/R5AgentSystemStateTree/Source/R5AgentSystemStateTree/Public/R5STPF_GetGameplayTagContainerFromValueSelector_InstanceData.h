#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_GameplayTagContainerValueSelector -FallbackName=R5AS_GameplayTagContainerValueSelector
#include "R5AS_GameplayTagContainerValueSelector.h"
#include "R5STPF_GetGameplayTagContainerFromValueSelector_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEMSTATETREE_API FR5STPF_GetGameplayTagContainerFromValueSelector_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_GameplayTagContainerValueSelector ValueSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Value;
    
    FR5STPF_GetGameplayTagContainerFromValueSelector_InstanceData();
};


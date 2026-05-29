#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BLInventoryActionsTransitionsOverrides.h"
#include "R5BLAddSequenceData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLAddSequenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ModulesSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLInventoryActionsTransitionsOverrides> ModulesSequenceOverrides;
    
    FR5BLAddSequenceData();
};


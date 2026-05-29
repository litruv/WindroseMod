#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5BLInventoryActionType.h"
#include "R5BLInventoryActionsTransitionsOverrides.h"
#include "R5BLMoveSequenceData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLMoveSequenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLInventoryActionType InventoryActon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ModulesSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLInventoryActionsTransitionsOverrides> ModulesSequenceOverrides;
    
    FR5BLMoveSequenceData();
};


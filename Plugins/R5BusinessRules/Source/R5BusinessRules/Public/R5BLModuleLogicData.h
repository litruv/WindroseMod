#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BLMoveSequenceData.h"
#include "R5BLModuleLogicData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLModuleLogicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ModuleTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLMoveSequenceData> ActionMoveSequences;
    
    FR5BLModuleLogicData();
};


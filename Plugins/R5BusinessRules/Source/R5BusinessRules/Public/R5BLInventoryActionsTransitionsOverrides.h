#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BLInventoryActionsTransitionsOverrides.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLInventoryActionsTransitionsOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OverridesInventoryTrait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ModulesSequence;
    
    FR5BLInventoryActionsTransitionsOverrides();
};


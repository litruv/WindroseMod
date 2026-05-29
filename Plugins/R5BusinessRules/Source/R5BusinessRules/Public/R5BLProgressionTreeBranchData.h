#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BLProgressionNodeData.h"
#include "R5BLProgressionTreeBranchData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLProgressionTreeBranchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5BLProgressionNodeData> Nodes;
    
    FR5BLProgressionTreeBranchData();
};


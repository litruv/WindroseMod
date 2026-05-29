#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BLProgressionNodeData_V0_8_0.h"
#include "R5BLProgressionTreeNode_V0_8_0.generated.h"

class UR5BLPerkParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLProgressionTreeNode_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLProgressionNodeData_V0_8_0 NodeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NodeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLPerkParams> ActivePerk;
    
    FR5BLProgressionTreeNode_V0_8_0();
};


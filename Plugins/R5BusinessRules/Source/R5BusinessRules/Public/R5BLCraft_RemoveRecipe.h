#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
#include "R5BLCraft_RemoveRecipe.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLCraft_RemoveRecipe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordPath CraftPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountRecipesToRemove;
    
    FR5BLCraft_RemoveRecipe();
};


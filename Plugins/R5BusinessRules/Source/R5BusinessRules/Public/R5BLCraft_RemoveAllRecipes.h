#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
#include "R5BLCraft_RemoveAllRecipes.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLCraft_RemoveAllRecipes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordPath CraftPath;
    
    FR5BLCraft_RemoveAllRecipes();
};


#pragma once
#include "CoreMinimal.h"
#include "ER5BLAvailableBBForRecipe.h"
#include "R5BLRecipeBBValueData.h"
#include "R5BLRecipeBBData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLRecipeBBData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLAvailableBBForRecipe AvailableBlackboardSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLRecipeBBValueData> BlackboardValuesToAdd;
    
    FR5BLRecipeBBData();
};


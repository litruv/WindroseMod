#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
#include "ER5BLAvailableBBForRecipe.h"
#include "R5BLRecipeBBEntity.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLRecipeBBEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLAvailableBBForRecipe BlackboardSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordPath BlackboardPath;
    
    FR5BLRecipeBBEntity();
};


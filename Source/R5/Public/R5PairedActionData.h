#pragma once
#include "CoreMinimal.h"
#include "R5PairedActionAbilityAnimData.h"
#include "R5PairedActionAbilityGEData.h"
#include "R5PairedActionAbilityMoveData.h"
#include "R5PairedActionData.generated.h"

USTRUCT(BlueprintType)
struct FR5PairedActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PairedActionAbilityAnimData AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PairedActionAbilityGEData GEData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PairedActionAbilityMoveData MoveData;
    
    R5_API FR5PairedActionData();
};


#pragma once
#include "CoreMinimal.h"
#include "R5BLAccountMetaData_V0_9_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLAccountMetaData_V0_9_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnsweredQuestionnaire;
    
    FR5BLAccountMetaData_V0_9_0();
};


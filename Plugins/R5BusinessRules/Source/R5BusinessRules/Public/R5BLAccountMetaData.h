#pragma once
#include "CoreMinimal.h"
#include "R5BLAccountMetaData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLAccountMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnsweredQuestionnaire;
    
    FR5BLAccountMetaData();
};


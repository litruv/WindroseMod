#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
#include "R5BLProgression_ResetProgression.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLProgression_ResetProgression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordPath EntityProgressionPath;
    
    FR5BLProgression_ResetProgression();
};


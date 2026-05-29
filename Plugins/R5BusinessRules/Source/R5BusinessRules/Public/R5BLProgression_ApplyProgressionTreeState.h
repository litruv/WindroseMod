#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
#include "R5BLProgressionTreeState.h"
#include "R5BLProgression_ApplyProgressionTreeState.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLProgression_ApplyProgressionTreeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordPath ProgressionTreePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLProgressionTreeState State;
    
    FR5BLProgression_ApplyProgressionTreeState();
};


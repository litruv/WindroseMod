#pragma once
#include "CoreMinimal.h"
#include "R5PairedActionTargetMoveData.generated.h"

USTRUCT(BlueprintType)
struct FR5PairedActionTargetMoveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetRotationFromInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalYawRotation;
    
    R5_API FR5PairedActionTargetMoveData();
};


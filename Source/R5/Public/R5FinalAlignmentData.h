#pragma once
#include "CoreMinimal.h"
#include "R5FinalAlignmentData.generated.h"

USTRUCT(BlueprintType)
struct FR5FinalAlignmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDuration;
    
    R5_API FR5FinalAlignmentData();
};


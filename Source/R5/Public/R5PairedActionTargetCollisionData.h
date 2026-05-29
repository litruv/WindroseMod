#pragma once
#include "CoreMinimal.h"
#include "R5PairedActionTargetCollisionData.generated.h"

USTRUCT(BlueprintType)
struct FR5PairedActionTargetCollisionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CapsuleCollisionProfileName;
    
    R5_API FR5PairedActionTargetCollisionData();
};


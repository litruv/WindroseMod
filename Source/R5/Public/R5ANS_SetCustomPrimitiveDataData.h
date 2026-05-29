#pragma once
#include "CoreMinimal.h"
#include "R5ANS_SetCustomPrimitiveDataData.generated.h"

USTRUCT(BlueprintType)
struct FR5ANS_SetCustomPrimitiveDataData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotifyBeginValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotifyEndValue;
    
    R5_API FR5ANS_SetCustomPrimitiveDataData();
};


#pragma once
#include "CoreMinimal.h"
#include "R5RadialSlotHintData.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FR5RadialSlotHintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    R5_API FR5RadialSlotHintData();
};


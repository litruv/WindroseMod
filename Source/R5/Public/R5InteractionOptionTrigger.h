#pragma once
#include "CoreMinimal.h"
#include "R5InteractionOptionTrigger.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct R5_API FR5InteractionOptionTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    FR5InteractionOptionTrigger();
};


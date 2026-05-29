#pragma once
#include "CoreMinimal.h"
#include "R5ShipAudioInputData.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FR5ShipAudioInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ToggleShantyInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* NextShantyInput;
    
    R5_API FR5ShipAudioInputData();
};


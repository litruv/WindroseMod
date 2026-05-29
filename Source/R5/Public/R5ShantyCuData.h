#pragma once
#include "CoreMinimal.h"
#include "R5ShantyCuData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FR5ShantyCuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AutonomousShantySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SimulatedShantySound;
    
    R5_API FR5ShantyCuData();
};


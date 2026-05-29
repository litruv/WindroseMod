#pragma once
#include "CoreMinimal.h"
#include "R5AIShipHealthLevelData.generated.h"

USTRUCT(BlueprintType)
struct FR5AIShipHealthLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OwnRelativeHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetRelativeHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoardingRelativeHealth;
    
    R5_API FR5AIShipHealthLevelData();
};


#pragma once
#include "CoreMinimal.h"
#include "R5LinkSFXData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FR5LinkSFXData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LinkSpawnSFX;
    
    R5_API FR5LinkSFXData();
};


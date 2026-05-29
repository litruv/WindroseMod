#pragma once
#include "CoreMinimal.h"
#include "ConsumeSoundEffectData.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct R5INVENTORY_API FConsumeSoundEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* Sound;
    
    FConsumeSoundEffectData();
};


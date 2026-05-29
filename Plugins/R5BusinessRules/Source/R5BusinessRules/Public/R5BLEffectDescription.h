#pragma once
#include "CoreMinimal.h"
#include "R5BLStatDescriptionCurveTable.h"
#include "R5BLEffectDescription.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLEffectDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EffectDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLStatDescriptionCurveTable> EffectsDescriptionData;
    
    FR5BLEffectDescription();
};


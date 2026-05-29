#pragma once
#include "CoreMinimal.h"
#include "R5CPDEffectDurationModifierData.h"
#include "R5CPDEffectDurationData.generated.h"

USTRUCT(BlueprintType)
struct FR5CPDEffectDurationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5CPDEffectDurationModifierData> DurationModifiers;
    
    R5_API FR5CPDEffectDurationData();
};


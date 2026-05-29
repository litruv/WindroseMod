#pragma once
#include "CoreMinimal.h"
#include "R5GameplayEffectUIDescription.generated.h"

USTRUCT(BlueprintType)
struct R5GAS_API FR5GameplayEffectUIDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> OverridesByLevel;
    
    FR5GameplayEffectUIDescription();
};


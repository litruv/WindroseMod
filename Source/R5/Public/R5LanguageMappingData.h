#pragma once
#include "CoreMinimal.h"
#include "R5LanguageMappingData.generated.h"

USTRUCT(BlueprintType)
struct FR5LanguageMappingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FromLanguageKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ToLanguageKey;
    
    R5_API FR5LanguageMappingData();
};


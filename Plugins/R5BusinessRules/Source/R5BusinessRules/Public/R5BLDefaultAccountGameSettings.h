#pragma once
#include "CoreMinimal.h"
#include "R5BLDefaultAccountGameSettings.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLDefaultAccountGameSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStatsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Language;
    
    FR5BLDefaultAccountGameSettings();
};


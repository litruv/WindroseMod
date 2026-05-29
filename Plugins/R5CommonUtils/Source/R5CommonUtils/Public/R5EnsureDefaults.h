#pragma once
#include "CoreMinimal.h"
#include "R5LogSettingsCounters.h"
#include "R5EnsureDefaults.generated.h"

USTRUCT(BlueprintType)
struct FR5EnsureDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5LogSettingsCounters CountersPerSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5LogSettingsCounters CountersPerSource;
    
    R5COMMONUTILS_API FR5EnsureDefaults();
};


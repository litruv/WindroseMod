#pragma once
#include "CoreMinimal.h"
#include "R5LogSettingsCounters.h"
#include "R5ErrorDefaults.generated.h"

USTRUCT(BlueprintType)
struct FR5ErrorDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5LogSettingsCounters CountersPerSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5LogSettingsCounters CountersPerSource;
    
    R5COMMONUTILS_API FR5ErrorDefaults();
};


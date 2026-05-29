#pragma once
#include "CoreMinimal.h"
#include "R5LogSettingsCounters.generated.h"

USTRUCT(BlueprintType)
struct FR5LogSettingsCounters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumLogMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumScreenMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumMonitorReports;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumDebugBreaks;
    
    R5COMMONUTILS_API FR5LogSettingsCounters();
};


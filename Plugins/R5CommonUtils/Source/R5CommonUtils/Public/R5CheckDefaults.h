#pragma once
#include "CoreMinimal.h"
#include "R5LogSettingsCounters.h"
#include "R5CheckDefaults.generated.h"

USTRUCT(BlueprintType)
struct FR5CheckDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5LogSettingsCounters CountersPerSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5LogSettingsCounters CountersPerSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrintCallstackInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrintCallstackOnClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrintCallstackOnServer;
    
    R5COMMONUTILS_API FR5CheckDefaults();
};


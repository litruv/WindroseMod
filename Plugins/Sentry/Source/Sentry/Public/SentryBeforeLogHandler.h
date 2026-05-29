#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "SentryBeforeLogHandler.generated.h"

class USentryLog;

UCLASS(Blueprintable)
class SENTRY_API USentryBeforeLogHandler : public UObject {
    GENERATED_BODY()
public:
    USentryBeforeLogHandler();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USentryLog* HandleBeforeLog(USentryLog* LogData);
    
};


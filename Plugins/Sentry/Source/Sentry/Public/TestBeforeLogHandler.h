#pragma once
#include "CoreMinimal.h"
#include "SentryBeforeLogHandler.h"
#include "TestBeforeLogHandler.generated.h"

UCLASS(Blueprintable)
class UTestBeforeLogHandler : public USentryBeforeLogHandler {
    GENERATED_BODY()
public:
    UTestBeforeLogHandler();

};


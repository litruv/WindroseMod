#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Sentry -ObjectName=SentryBeforeSendHandler -FallbackName=SentryBeforeSendHandler
#include "SentryBeforeSendHandler.h"
#include "R5DumpCallstackSentryBeforeSendHandler.generated.h"

UCLASS(Blueprintable)
class UR5DumpCallstackSentryBeforeSendHandler : public USentryBeforeSendHandler {
    GENERATED_BODY()
public:
    UR5DumpCallstackSentryBeforeSendHandler();

};


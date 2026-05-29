#pragma once
#include "CoreMinimal.h"
#include "SentryVariant.h"
#include "SentryTransactionOptions.generated.h"

USTRUCT(BlueprintType)
struct SENTRY_API FSentryTransactionOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSentryVariant> CustomSamplingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BindToScope;
    
    FSentryTransactionOptions();
};


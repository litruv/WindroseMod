#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "SentryTraceSampler.generated.h"

class USentrySamplingContext;

UCLASS(Blueprintable)
class SENTRY_API USentryTraceSampler : public UObject {
    GENERATED_BODY()
public:
    USentryTraceSampler();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Sample(USentrySamplingContext* samplingContext, float& samplingValue);
    
};


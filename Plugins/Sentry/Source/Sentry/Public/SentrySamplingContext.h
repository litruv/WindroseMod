#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "SentryVariant.h"
#include "SentrySamplingContext.generated.h"

class USentryTransactionContext;

UCLASS(Blueprintable, HideDropdown)
class SENTRY_API USentrySamplingContext : public UObject {
    GENERATED_BODY()
public:
    USentrySamplingContext();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USentryTransactionContext* GetTransactionContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FSentryVariant> GetCustomSamplingContext() const;
    
};


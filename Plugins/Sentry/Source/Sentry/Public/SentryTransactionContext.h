#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "SentryTransactionContext.generated.h"

UCLASS(Blueprintable, HideDropdown)
class SENTRY_API USentryTransactionContext : public UObject {
    GENERATED_BODY()
public:
    USentryTransactionContext();

    UFUNCTION(BlueprintCallable)
    void Initialize(const FString& Name, const FString& Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOperation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName() const;
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "SentryFeedback.generated.h"

UCLASS(Blueprintable, HideDropdown)
class SENTRY_API USentryFeedback : public UObject {
    GENERATED_BODY()
public:
    USentryFeedback();

    UFUNCTION(BlueprintCallable)
    void SetName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetContactEmail(const FString& Email);
    
    UFUNCTION(BlueprintCallable)
    void SetAssociatedEvent(const FString& EventId);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetContactEmail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAssociatedEvent() const;
    
};


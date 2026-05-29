#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "SentryUser.generated.h"

UCLASS(Blueprintable, HideDropdown)
class SENTRY_API USentryUser : public UObject {
    GENERATED_BODY()
public:
    USentryUser();

    UFUNCTION(BlueprintCallable)
    void SetUsername(const FString& UserName);
    
    UFUNCTION(BlueprintCallable)
    void SetIpAddress(const FString& IpAddress);
    
    UFUNCTION(BlueprintCallable)
    void SetId(const FString& ID);
    
    UFUNCTION(BlueprintCallable)
    void SetEmail(const FString& Email);
    
    UFUNCTION(BlueprintCallable)
    void SetData(const TMap<FString, FString>& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUsername() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetIpAddress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEmail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetData() const;
    
};


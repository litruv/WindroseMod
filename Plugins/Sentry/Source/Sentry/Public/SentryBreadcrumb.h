#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "ESentryLevel.h"
#include "SentryVariant.h"
#include "SentryBreadcrumb.generated.h"

UCLASS(Blueprintable, HideDropdown)
class SENTRY_API USentryBreadcrumb : public UObject {
    GENERATED_BODY()
public:
    USentryBreadcrumb();

    UFUNCTION(BlueprintCallable)
    void SetType(const FString& Type);
    
    UFUNCTION(BlueprintCallable)
    void SetMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void SetLevel(ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    void SetData(const TMap<FString, FSentryVariant>& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetCategory(const FString& Category);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESentryLevel GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FSentryVariant> GetData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCategory() const;
    
};


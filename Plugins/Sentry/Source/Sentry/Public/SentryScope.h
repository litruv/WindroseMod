#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "ESentryLevel.h"
#include "SentryVariant.h"
#include "SentryScope.generated.h"

class USentryAttachment;
class USentryBreadcrumb;

UCLASS(Blueprintable, HideDropdown)
class SENTRY_API USentryScope : public UObject {
    GENERATED_BODY()
public:
    USentryScope();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetTag(const FString& Key, FString& Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetExtra(const FString& Key, FSentryVariant& Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetContext(const FString& Key, TMap<FString, FSentryVariant>& Value) const;
    
    UFUNCTION(BlueprintCallable)
    void SetTags(const TMap<FString, FString>& Tags);
    
    UFUNCTION(BlueprintCallable)
    void SetTag(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetLevel(ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    void SetFingerprint(const TArray<FString>& Fingerprint);
    
    UFUNCTION(BlueprintCallable)
    void SetExtras(const TMap<FString, FSentryVariant>& Extras);
    
    UFUNCTION(BlueprintCallable)
    void SetExtra(const FString& Key, const FSentryVariant& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetContext(const FString& Key, const TMap<FString, FSentryVariant>& Values);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTag(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveExtra(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveContext(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTag(const FString& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESentryLevel GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetFingerprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FSentryVariant> GetExtras() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSentryVariant GetExtra(const FString& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FSentryVariant> GetContext(const FString& Key) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearBreadcrumbs();
    
    UFUNCTION(BlueprintCallable)
    void ClearAttachments();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UFUNCTION(BlueprintCallable)
    void AddBreadcrumb(USentryBreadcrumb* Breadcrumb);
    
    UFUNCTION(BlueprintCallable)
    void AddAttachment(USentryAttachment* Attachment);
    
};


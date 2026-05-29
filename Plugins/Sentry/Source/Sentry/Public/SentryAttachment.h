#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "SentryAttachment.generated.h"

UCLASS(Blueprintable, HideDropdown)
class SENTRY_API USentryAttachment : public UObject {
    GENERATED_BODY()
public:
    USentryAttachment();

    UFUNCTION(BlueprintCallable)
    void InitializeWithPath(const FString& Path, const FString& Filename, const FString& ContentType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeWithData(const TArray<uint8>& Data, const FString& Filename, const FString& ContentType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFilename() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetContentType() const;
    
};


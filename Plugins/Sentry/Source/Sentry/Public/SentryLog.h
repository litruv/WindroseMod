#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "ESentryLevel.h"
#include "SentryLog.generated.h"

UCLASS(Blueprintable, HideDropdown)
class SENTRY_API USentryLog : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESentryLevel Level;
    
public:
    USentryLog();

    UFUNCTION(BlueprintCallable)
    void SetLevel(ESentryLevel NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetBody(const FString& NewBody);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESentryLevel GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBody() const;
    
};


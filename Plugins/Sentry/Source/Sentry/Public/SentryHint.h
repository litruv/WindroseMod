#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "SentryHint.generated.h"

class USentryAttachment;

UCLASS(Blueprintable, HideDropdown)
class SENTRY_API USentryHint : public UObject {
    GENERATED_BODY()
public:
    USentryHint();

    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void AddAttachment(USentryAttachment* Attachment);
    
};


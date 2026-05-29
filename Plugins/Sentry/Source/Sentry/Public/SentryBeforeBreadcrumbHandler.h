#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "SentryBeforeBreadcrumbHandler.generated.h"

class USentryBreadcrumb;
class USentryHint;

UCLASS(Abstract, Blueprintable)
class SENTRY_API USentryBeforeBreadcrumbHandler : public UObject {
    GENERATED_BODY()
public:
    USentryBeforeBreadcrumbHandler();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USentryBreadcrumb* HandleBeforeBreadcrumb(USentryBreadcrumb* Breadcrumb, USentryHint* Hint);
    
};


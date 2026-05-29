#pragma once
#include "CoreMinimal.h"
#include "EmptyResponse.h"
#include "HealthDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FHealthDelegate, const FEmptyResponse&, Response);


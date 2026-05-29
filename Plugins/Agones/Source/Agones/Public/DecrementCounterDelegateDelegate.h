#pragma once
#include "CoreMinimal.h"
#include "EmptyResponse.h"
#include "DecrementCounterDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDecrementCounterDelegate, const FEmptyResponse&, Response);


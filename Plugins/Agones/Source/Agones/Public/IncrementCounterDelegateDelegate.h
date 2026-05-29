#pragma once
#include "CoreMinimal.h"
#include "EmptyResponse.h"
#include "IncrementCounterDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FIncrementCounterDelegate, const FEmptyResponse&, Response);


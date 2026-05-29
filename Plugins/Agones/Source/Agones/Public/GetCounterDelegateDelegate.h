#pragma once
#include "CoreMinimal.h"
#include "CounterResponse.h"
#include "GetCounterDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FGetCounterDelegate, const FCounterResponse&, Response);


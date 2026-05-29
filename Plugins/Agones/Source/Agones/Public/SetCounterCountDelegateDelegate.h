#pragma once
#include "CoreMinimal.h"
#include "EmptyResponse.h"
#include "SetCounterCountDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSetCounterCountDelegate, const FEmptyResponse&, Response);


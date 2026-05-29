#pragma once
#include "CoreMinimal.h"
#include "EmptyResponse.h"
#include "SetCounterCapacityDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSetCounterCapacityDelegate, const FEmptyResponse&, Response);


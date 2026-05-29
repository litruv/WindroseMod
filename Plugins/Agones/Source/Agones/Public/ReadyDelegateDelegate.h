#pragma once
#include "CoreMinimal.h"
#include "EmptyResponse.h"
#include "ReadyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FReadyDelegate, const FEmptyResponse&, Response);


#pragma once
#include "CoreMinimal.h"
#include "EmptyResponse.h"
#include "ShutdownDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FShutdownDelegate, const FEmptyResponse&, Response);


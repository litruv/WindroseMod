#pragma once
#include "CoreMinimal.h"
#include "EmptyResponse.h"
#include "SetPlayerCapacityDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSetPlayerCapacityDelegate, const FEmptyResponse&, Response);


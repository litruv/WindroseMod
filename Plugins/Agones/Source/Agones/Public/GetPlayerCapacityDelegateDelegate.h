#pragma once
#include "CoreMinimal.h"
#include "CountResponse.h"
#include "GetPlayerCapacityDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FGetPlayerCapacityDelegate, const FCountResponse&, Response);


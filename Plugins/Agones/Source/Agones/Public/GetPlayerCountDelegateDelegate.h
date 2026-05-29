#pragma once
#include "CoreMinimal.h"
#include "CountResponse.h"
#include "GetPlayerCountDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FGetPlayerCountDelegate, const FCountResponse&, Response);


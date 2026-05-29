#pragma once
#include "CoreMinimal.h"
#include "EmptyResponse.h"
#include "ReserveDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FReserveDelegate, const FEmptyResponse&, Response);


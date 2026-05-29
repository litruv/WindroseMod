#pragma once
#include "CoreMinimal.h"
#include "ConnectedResponse.h"
#include "IsPlayerConnectedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FIsPlayerConnectedDelegate, const FConnectedResponse&, Response);


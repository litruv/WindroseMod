#pragma once
#include "CoreMinimal.h"
#include "ConnectedResponse.h"
#include "PlayerConnectDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPlayerConnectDelegate, const FConnectedResponse&, Response);


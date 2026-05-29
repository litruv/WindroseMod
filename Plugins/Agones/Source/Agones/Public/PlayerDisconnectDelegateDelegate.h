#pragma once
#include "CoreMinimal.h"
#include "DisconnectResponse.h"
#include "PlayerDisconnectDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPlayerDisconnectDelegate, const FDisconnectResponse&, Response);


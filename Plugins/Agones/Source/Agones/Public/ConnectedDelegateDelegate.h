#pragma once
#include "CoreMinimal.h"
#include "GameServerResponse.h"
#include "ConnectedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConnectedDelegate, const FGameServerResponse&, Response);


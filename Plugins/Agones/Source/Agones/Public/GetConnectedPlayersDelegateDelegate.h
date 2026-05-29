#pragma once
#include "CoreMinimal.h"
#include "ConnectedPlayersResponse.h"
#include "GetConnectedPlayersDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FGetConnectedPlayersDelegate, const FConnectedPlayersResponse&, Response);


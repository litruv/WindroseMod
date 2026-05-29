#pragma once
#include "CoreMinimal.h"
#include "GameServerResponse.h"
#include "GameServerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FGameServerDelegate, const FGameServerResponse&, Response);


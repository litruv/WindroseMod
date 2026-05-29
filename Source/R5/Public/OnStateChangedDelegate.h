#pragma once
#include "CoreMinimal.h"
#include "ER5NewOverlapDamageState.h"
#include "OnStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateChanged, ER5NewOverlapDamageState, NewState);


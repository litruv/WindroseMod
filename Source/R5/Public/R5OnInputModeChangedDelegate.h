#pragma once
#include "CoreMinimal.h"
#include "ER5InputMode.h"
#include "R5OnInputModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnInputModeChanged, ER5InputMode, InputMode);


#pragma once
#include "CoreMinimal.h"
#include "ER5InputType.h"
#include "R5OnInputTypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnInputTypeChanged, ER5InputType, InputType);


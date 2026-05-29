#pragma once
#include "CoreMinimal.h"
#include "R5OnStateChangedDelegate.generated.h"

class UR5GenericTab;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnStateChanged, const UR5GenericTab*, Tab);


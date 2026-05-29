#pragma once
#include "CoreMinimal.h"
#include "R5OnMarkerUpdateDelegate.generated.h"

class UR5MarkerModelBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnMarkerUpdate, UR5MarkerModelBase*, Model);


#pragma once
#include "CoreMinimal.h"
#include "DestroyDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDestroyDelegate, AActor*, Actor);


#pragma once
#include "CoreMinimal.h"
#include "AgonesError.h"
#include "AgonesErrorDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAgonesErrorDelegate, const FAgonesError&, Error);


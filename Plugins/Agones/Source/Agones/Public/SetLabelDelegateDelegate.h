#pragma once
#include "CoreMinimal.h"
#include "EmptyResponse.h"
#include "SetLabelDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSetLabelDelegate, const FEmptyResponse&, Response);


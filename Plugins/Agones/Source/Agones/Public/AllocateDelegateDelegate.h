#pragma once
#include "CoreMinimal.h"
#include "EmptyResponse.h"
#include "AllocateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FAllocateDelegate, const FEmptyResponse&, Response);


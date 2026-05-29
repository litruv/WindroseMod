#pragma once
#include "CoreMinimal.h"
#include "EmptyResponse.h"
#include "SetAnnotationDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FSetAnnotationDelegate, const FEmptyResponse&, Response);


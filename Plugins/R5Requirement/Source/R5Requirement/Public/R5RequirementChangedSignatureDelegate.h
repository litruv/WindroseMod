#pragma once
#include "CoreMinimal.h"
#include "R5RequirementChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FR5RequirementChangedSignature, bool, bIsMet);


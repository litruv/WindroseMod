#pragma once
#include "CoreMinimal.h"
#include "EFSubtitleType.h"
#include "R5SubtitlesClearRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5SubtitlesClearRequest, EFSubtitleType, SubtitleToClear);


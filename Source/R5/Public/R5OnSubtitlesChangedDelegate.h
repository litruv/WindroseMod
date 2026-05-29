#pragma once
#include "CoreMinimal.h"
#include "R5OnSubtitlesChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FR5OnSubtitlesChanged, const FText&, NewHistorySubtitle, const FText&, NewActiveSubtitle);


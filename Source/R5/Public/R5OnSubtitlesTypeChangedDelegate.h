#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLSubtitleType -FallbackName=ER5BLSubtitleType
#include "ER5BLSubtitleType.h"
#include "R5OnSubtitlesTypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnSubtitlesTypeChanged, ER5BLSubtitleType, SubtitleType);


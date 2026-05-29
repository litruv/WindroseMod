#pragma once
#include "CoreMinimal.h"
#include "R5TargetingFilterBase.h"
#include "R5TargetingFilterVisibility.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5TargetingFilterVisibility : public UR5TargetingFilterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UR5TargetingFilterVisibility();

};


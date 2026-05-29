#pragma once
#include "CoreMinimal.h"
#include "R5TargetingFilterBase.h"
#include "R5TargetingFilterDistance.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5TargetingFilterDistance : public UR5TargetingFilterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UR5TargetingFilterDistance();

};


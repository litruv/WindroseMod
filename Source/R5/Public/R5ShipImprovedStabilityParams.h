#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "Templates/SubclassOf.h"
#include "R5ShipImprovedStabilityParams.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ShipImprovedStabilityParams : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> EffectToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StackReceiveInterval;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SpeedLimit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AngleChangingLimit;
    
    UR5ShipImprovedStabilityParams();

};


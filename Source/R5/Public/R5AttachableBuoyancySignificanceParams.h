#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "ER5SignificanceLevel.h"
#include "R5AttachableBuoyancySignificanceParams.generated.h"

class UR5SignificanceParams;

UCLASS(Blueprintable)
class R5_API UR5AttachableBuoyancySignificanceParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel CollisionEnablingSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel PhysicsMovementSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseKinematicWhenNotSignificant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SignificanceParams* SignificanceParams;
    
    UR5AttachableBuoyancySignificanceParams();

};


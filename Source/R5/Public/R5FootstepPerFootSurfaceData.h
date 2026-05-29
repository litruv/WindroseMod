#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "R5FootstepPerFootEffectData.h"
#include "R5FootstepSurfaceData.h"
#include "R5FootstepPerFootSurfaceData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR5FootstepPerFootSurfaceData : public UR5FootstepSurfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FR5FootstepPerFootEffectData> SurfaceToEffectMap;
    
    UR5FootstepPerFootSurfaceData();

};


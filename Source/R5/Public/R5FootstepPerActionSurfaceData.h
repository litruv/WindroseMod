#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "R5FootstepEffectData.h"
#include "R5FootstepSurfaceData.h"
#include "R5FootstepPerActionSurfaceData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR5FootstepPerActionSurfaceData : public UR5FootstepSurfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FR5FootstepEffectData> SurfaceToEffectMap;
    
    UR5FootstepPerActionSurfaceData();

};


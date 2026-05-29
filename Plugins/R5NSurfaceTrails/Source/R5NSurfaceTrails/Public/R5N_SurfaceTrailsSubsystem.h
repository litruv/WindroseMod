#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5N_SurfaceTrailsSubsystem.generated.h"

class UR5N_SurfaceTrailsRenderer;

UCLASS(Blueprintable)
class R5NSURFACETRAILS_API UR5N_SurfaceTrailsSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5N_SurfaceTrailsRenderer* SurfaceTrailsRenderer;
    
public:
    UR5N_SurfaceTrailsSubsystem();

};


#include "R5N_SurfaceTrailsSubsystem.h"
#include "R5N_SurfaceTrailsRenderer.h"

UR5N_SurfaceTrailsSubsystem::UR5N_SurfaceTrailsSubsystem() {
    this->SurfaceTrailsRenderer = CreateDefaultSubobject<UR5N_SurfaceTrailsRenderer>(TEXT("UR5N_SurfaceTrailsRenderer"));
}



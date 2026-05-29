#include "R5DeformingTrail.h"

UR5DeformingTrail::UR5DeformingTrail() {
    this->PointSize = 100.00f;
    this->TrailPointsLifetime = 3.00f;
    this->RenderTarget = NULL;
    this->PreviousFrameRenderTarget = NULL;
    this->MaterialParameterCollection = NULL;
}

float UR5DeformingTrail::GetCaptureRadius() const {
    return 0.0f;
}

void UR5DeformingTrail::AddTrail(const FVector& InPos) {
}

void UR5DeformingTrail::AddControlPoint(const FVector& InControlPos) {
}



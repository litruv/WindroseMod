#include "MercunaSmoothPath.h"

UMercunaSmoothPath::UMercunaSmoothPath() {
}

FVector UMercunaSmoothPath::GetTangent(const float Length) const {
    return FVector{};
}

TArray<FSplinePoint> UMercunaSmoothPath::GetSplinePoints(const FTransform& RelativeTo) const {
    return TArray<FSplinePoint>();
}

FVector UMercunaSmoothPath::GetPosition(const float Length) const {
    return FVector{};
}



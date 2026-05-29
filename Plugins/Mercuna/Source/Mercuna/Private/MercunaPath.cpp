#include "MercunaPath.h"

UMercunaPath::UMercunaPath() {
}

bool UMercunaPath::IsValid() const {
    return false;
}

bool UMercunaPath::IsReady() const {
    return false;
}

bool UMercunaPath::IsPartial() const {
    return false;
}

void UMercunaPath::Invalidate() {
}

FString UMercunaPath::GetStatus() const {
    return TEXT("");
}

FVector UMercunaPath::GetPoint(int32 I) const {
    return FVector{};
}

float UMercunaPath::GetPathLength() const {
    return 0.0f;
}

int32 UMercunaPath::GetNumPoints() const {
    return 0;
}

void UMercunaPath::GetDebugInfo(int32& nodesUsed, bool& bOutOfNodes, float& queryTime) const {
}



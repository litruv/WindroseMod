#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5PointOfInterest -ObjectName=R5POISchemeNode -FallbackName=R5POISchemeNode
#include "R5POISchemeNode.h"
#include "R5POISchemeNode_ContextualSpawnPoint.generated.h"

UCLASS(Blueprintable)
class R5_API UR5POISchemeNode_ContextualSpawnPoint : public UR5POISchemeNode {
    GENERATED_BODY()
public:
    UR5POISchemeNode_ContextualSpawnPoint();

};


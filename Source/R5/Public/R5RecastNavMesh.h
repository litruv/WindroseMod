#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=RecastNavMesh -FallbackName=RecastNavMesh
#include "NavMesh/RecastNavMesh.h"
#include "R5RecastNavMesh.generated.h"

UCLASS(Blueprintable, NoExport)
class AR5RecastNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    AR5RecastNavMesh(const FObjectInitializer& ObjectInitializer);

};


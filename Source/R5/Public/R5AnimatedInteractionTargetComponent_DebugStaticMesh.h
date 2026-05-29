#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
#include "R5AnimatedInteractionTargetComponent_DebugStaticMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FR5AnimatedInteractionTargetComponent_DebugStaticMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    R5_API FR5AnimatedInteractionTargetComponent_DebugStaticMesh();
};


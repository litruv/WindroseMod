#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WalkableSlopeOverride -FallbackName=WalkableSlopeOverride
#include "R5NavigationCustomMeshData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FR5NavigationCustomMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWalkableSlopeOverride WalkableSlopeOverride;
    
    R5_API FR5NavigationCustomMeshData();
};


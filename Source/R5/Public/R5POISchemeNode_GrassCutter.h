#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5PointOfInterest -ObjectName=R5POISchemeNode -FallbackName=R5POISchemeNode
#include "R5POISchemeNode.h"
#include "ER5POIGrassCutterShape.h"
#include "R5POISchemeNode_GrassCutter.generated.h"

UCLASS(Blueprintable)
class R5_API UR5POISchemeNode_GrassCutter : public UR5POISchemeNode {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5POIGrassCutterShape Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxExtent;
    
public:
    UR5POISchemeNode_GrassCutter();

};


#pragma once
#include "CoreMinimal.h"
#include "R5POISchemeNode.h"
#include "R5POISchemeNode_POI.generated.h"

class UR5PointOfInterest;

UCLASS(Blueprintable)
class R5POINTOFINTEREST_API UR5POISchemeNode_POI : public UR5POISchemeNode {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PointOfInterest* POIAsset;
    
public:
    UR5POISchemeNode_POI();

};


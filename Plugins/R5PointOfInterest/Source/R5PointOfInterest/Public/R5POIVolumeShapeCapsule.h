#pragma once
#include "CoreMinimal.h"
#include "R5POIVolumeShape.h"
#include "R5POIVolumeShapeCapsule.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5POINTOFINTEREST_API UR5POIVolumeShapeCapsule : public UR5POIVolumeShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    UR5POIVolumeShapeCapsule();

};


#pragma once
#include "CoreMinimal.h"
#include "R5POIVolumeShape.h"
#include "R5POIVolumeShapeSphere.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5POINTOFINTEREST_API UR5POIVolumeShapeSphere : public UR5POIVolumeShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UR5POIVolumeShapeSphere();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5POIVolumeShape.h"
#include "R5POIVolumeShapeBox.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5POINTOFINTEREST_API UR5POIVolumeShapeBox : public UR5POIVolumeShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Extent;
    
    UR5POIVolumeShapeBox();

};


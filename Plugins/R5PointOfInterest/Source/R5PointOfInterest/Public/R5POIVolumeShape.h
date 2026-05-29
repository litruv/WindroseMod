#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5POIVolumeShape.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class R5POINTOFINTEREST_API UR5POIVolumeShape : public UObject {
    GENERATED_BODY()
public:
    UR5POIVolumeShape();

};


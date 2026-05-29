#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "R5POIVolumePreviewComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5POINTOFINTEREST_API UR5POIVolumePreviewComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UR5POIVolumePreviewComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
#include "R5POIPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5POINTOFINTEREST_API UR5POIPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UR5POIPointComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
#include "R5DigVolumesInvokerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5DigVolumesInvokerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UR5DigVolumesInvokerComponent(const FObjectInitializer& ObjectInitializer);

};


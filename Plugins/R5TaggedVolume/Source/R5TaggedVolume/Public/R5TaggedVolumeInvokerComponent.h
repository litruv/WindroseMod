#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
#include "R5TaggedVolumeInvokerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5TAGGEDVOLUME_API UR5TaggedVolumeInvokerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UR5TaggedVolumeInvokerComponent(const FObjectInitializer& ObjectInitializer);

};


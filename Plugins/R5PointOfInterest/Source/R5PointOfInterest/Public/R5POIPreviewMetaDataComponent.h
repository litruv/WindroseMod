#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5POIPreviewMetaDataComponent.generated.h"

UCLASS(Blueprintable, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5POINTOFINTEREST_API UR5POIPreviewMetaDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UR5POIPreviewMetaDataComponent(const FObjectInitializer& ObjectInitializer);

};


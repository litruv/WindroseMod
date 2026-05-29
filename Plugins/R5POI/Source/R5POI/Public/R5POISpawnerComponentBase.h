#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
#include "R5POISpawnerComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5POI_API UR5POISpawnerComponentBase : public USceneComponent {
    GENERATED_BODY()
public:
    UR5POISpawnerComponentBase(const FObjectInitializer& ObjectInitializer);

};


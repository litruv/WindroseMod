#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
#include "R5NCubicles_HeatSource.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5NCUBICLES_API UR5NCubicles_HeatSource : public USceneComponent {
    GENERATED_BODY()
public:
    UR5NCubicles_HeatSource(const FObjectInitializer& ObjectInitializer);

};


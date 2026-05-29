#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "R5FoliageMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5FoliageMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UR5FoliageMeshComponent(const FObjectInitializer& ObjectInitializer);

};


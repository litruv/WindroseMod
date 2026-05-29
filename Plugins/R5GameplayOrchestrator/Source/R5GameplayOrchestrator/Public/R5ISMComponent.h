#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InstancedStaticMeshComponent -FallbackName=InstancedStaticMeshComponent
#include "Components/InstancedStaticMeshComponent.h"
#include "R5ISMComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5GAMEPLAYORCHESTRATOR_API UR5ISMComponent : public UInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UR5ISMComponent(const FObjectInitializer& ObjectInitializer);

};


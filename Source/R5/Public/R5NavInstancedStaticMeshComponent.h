#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InstancedStaticMeshComponent -FallbackName=InstancedStaticMeshComponent
#include "Components/InstancedStaticMeshComponent.h"
#include "R5NavInstancedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5NavInstancedStaticMeshComponent : public UInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UR5NavInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};


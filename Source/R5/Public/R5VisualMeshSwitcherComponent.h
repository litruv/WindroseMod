#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5VisualMeshSwitcherMeshes.h"
#include "R5VisualMeshSwitcherComponent.generated.h"

class UR5VisualMeshSwitcherParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5VisualMeshSwitcherComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5VisualMeshSwitcherParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5VisualMeshSwitcherMeshes> SpawnedMeshes;
    
public:
    UR5VisualMeshSwitcherComponent(const FObjectInitializer& ObjectInitializer);

};


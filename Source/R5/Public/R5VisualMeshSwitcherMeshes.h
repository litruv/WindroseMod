#pragma once
#include "CoreMinimal.h"
#include "R5VisualMeshSwitcherMesh.h"
#include "R5VisualMeshSwitcherMeshes.generated.h"

USTRUCT(BlueprintType)
struct FR5VisualMeshSwitcherMeshes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5VisualMeshSwitcherMesh> Meshes;
    
    R5_API FR5VisualMeshSwitcherMeshes();
};


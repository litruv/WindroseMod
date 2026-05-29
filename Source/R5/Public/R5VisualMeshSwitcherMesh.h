#pragma once
#include "CoreMinimal.h"
#include "R5VisualMeshSwitcherMeshData.h"
#include "R5VisualMeshSwitcherMesh.generated.h"

USTRUCT(BlueprintType)
struct FR5VisualMeshSwitcherMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5VisualMeshSwitcherMeshData Data;
    
    R5_API FR5VisualMeshSwitcherMesh();
};


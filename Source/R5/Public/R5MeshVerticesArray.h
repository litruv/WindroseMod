#pragma once
#include "CoreMinimal.h"
#include "R5MeshVertexStruct.h"
#include "R5MeshVerticesArray.generated.h"

USTRUCT(BlueprintType)
struct FR5MeshVerticesArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5MeshVertexStruct> Vertices;
    
    R5_API FR5MeshVerticesArray();
};


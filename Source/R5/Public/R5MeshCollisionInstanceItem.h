#pragma once
#include "CoreMinimal.h"
#include "R5MeshCollisionInstanceItem.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FR5MeshCollisionInstanceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    R5_API FR5MeshCollisionInstanceItem();
};


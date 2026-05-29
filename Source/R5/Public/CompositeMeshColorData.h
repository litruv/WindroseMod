#pragma once
#include "CoreMinimal.h"
#include "ER5MeshColorIndexType.h"
#include "CompositeMeshColorData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FCompositeMeshColorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5MeshColorIndexType, int32> ColorIndexesMap;
    
    FCompositeMeshColorData();
};


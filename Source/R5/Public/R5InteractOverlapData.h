#pragma once
#include "CoreMinimal.h"
#include "R5ShapeData.h"
#include "R5InteractOverlapData.generated.h"

USTRUCT(BlueprintType)
struct FR5InteractOverlapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ShapeData> NewShapeData;
    
    R5_API FR5InteractOverlapData();
};


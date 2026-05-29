#pragma once
#include "CoreMinimal.h"
#include "R5CompositeMeshGroupForBodySex.generated.h"

class UR5CompositeMeshGroup;

USTRUCT(BlueprintType)
struct R5_API FR5CompositeMeshGroupForBodySex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5CompositeMeshGroup*> CompositeMeshesParams;
    
    FR5CompositeMeshGroupForBodySex();
};


#pragma once
#include "CoreMinimal.h"
#include "R5MeshFootstepData.generated.h"

USTRUCT(BlueprintType)
struct FR5MeshFootstepData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FootstepIndex;
    
    R5_API FR5MeshFootstepData();
};


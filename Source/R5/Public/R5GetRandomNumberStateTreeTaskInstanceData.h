#pragma once
#include "CoreMinimal.h"
#include "R5GetRandomNumberStateTreeTaskInstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5GetRandomNumberStateTreeTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomNumber;
    
    FR5GetRandomNumberStateTreeTaskInstanceData();
};


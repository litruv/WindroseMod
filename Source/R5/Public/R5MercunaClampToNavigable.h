#pragma once
#include "CoreMinimal.h"
#include "R5MercunaClampToNavigable.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5MercunaClampToNavigable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightRange;
    
    FR5MercunaClampToNavigable();
};


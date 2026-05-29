#pragma once
#include "CoreMinimal.h"
#include "R5CollisionApproximationTreeElement.h"
#include "R5CollisionApproximation.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5CollisionApproximation {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5CollisionApproximationTreeElement> ElementsTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBuilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElementRadius;
    
public:
    FR5CollisionApproximation();
};


#pragma once
#include "CoreMinimal.h"
#include "R5AIStateTreeStateData.generated.h"

class UStateTree;

USTRUCT(BlueprintType)
struct FR5AIStateTreeStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStateTree* StateTree;
    
    R5_API FR5AIStateTreeStateData();
};


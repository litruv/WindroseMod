#pragma once
#include "CoreMinimal.h"
#include "R5AIStateTreeActionAfterStateChanged.generated.h"

USTRUCT(BlueprintType)
struct FR5AIStateTreeActionAfterStateChanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearFocus;
    
    R5_API FR5AIStateTreeActionAfterStateChanged();
};


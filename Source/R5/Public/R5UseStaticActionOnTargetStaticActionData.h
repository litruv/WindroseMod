#pragma once
#include "CoreMinimal.h"
#include "R5UseStaticActionOnTargetStaticActionData.generated.h"

class UR5StaticAction;

USTRUCT(BlueprintType)
struct FR5UseStaticActionOnTargetStaticActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5StaticAction*> StaticActions;
    
    R5_API FR5UseStaticActionOnTargetStaticActionData();
};


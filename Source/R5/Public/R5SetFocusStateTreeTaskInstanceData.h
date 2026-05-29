#pragma once
#include "CoreMinimal.h"
#include "R5SetFocusStateTreeTaskInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5SetFocusStateTreeTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FocusActor;
    
    FR5SetFocusStateTreeTaskInstanceData();
};


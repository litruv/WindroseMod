#pragma once
#include "CoreMinimal.h"
#include "R5ChangeVisibilityStateTreeTaskInstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5ChangeVisibilityStateTreeTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeAttachedActors;
    
    FR5ChangeVisibilityStateTreeTaskInstanceData();
};


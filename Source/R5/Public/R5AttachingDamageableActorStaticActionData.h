#pragma once
#include "CoreMinimal.h"
#include "R5AttachingDamageableActorStaticActionData.generated.h"

class UR5StaticAction;

USTRUCT(BlueprintType)
struct FR5AttachingDamageableActorStaticActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5StaticAction* StaticAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseThisLikeInstigator;
    
    R5_API FR5AttachingDamageableActorStaticActionData();
};


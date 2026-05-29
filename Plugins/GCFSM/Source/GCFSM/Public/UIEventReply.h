#pragma once
#include "CoreMinimal.h"
#include "UIEventReply.generated.h"

USTRUCT(BlueprintType)
struct FUIEventReply {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHandled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumed;
    
    GCFSM_API FUIEventReply();
};


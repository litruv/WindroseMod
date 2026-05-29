#pragma once
#include "CoreMinimal.h"
#include "R5InteractionTarget.h"
#include "R5InteractionTargetBaseImpl.generated.h"

UINTERFACE(MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UR5InteractionTargetBaseImpl : public UR5InteractionTarget {
    GENERATED_BODY()
};

class IR5InteractionTargetBaseImpl : public IR5InteractionTarget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetInteractionTargetTitle(const FText& NewTitle) PURE_VIRTUAL(SetInteractionTargetTitle,);
    
};


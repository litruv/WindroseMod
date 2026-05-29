#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "R5InteractionTarget.generated.h"

class AActor;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UR5InteractionTarget : public UInterface {
    GENERATED_BODY()
};

class IR5InteractionTarget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual AActor* GetInteractionTargetAvatar() const PURE_VIRTUAL(GetInteractionTargetAvatar, return NULL;);
    
};


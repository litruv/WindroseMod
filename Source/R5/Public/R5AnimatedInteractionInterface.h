#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "R5AnimatedInteractionInterface.generated.h"

class AActor;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UR5AnimatedInteractionInterface : public UInterface {
    GENERATED_BODY()
};

class IR5AnimatedInteractionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual AActor* GetOwnerActor() const PURE_VIRTUAL(GetOwnerActor, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual FString GetInteractionName() const PURE_VIRTUAL(GetInteractionName, return TEXT(""););
    
};


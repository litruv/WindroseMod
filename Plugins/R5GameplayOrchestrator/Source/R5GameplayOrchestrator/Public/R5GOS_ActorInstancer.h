#pragma once
#include "CoreMinimal.h"
#include "R5GameplayOrchestratorSubsystem.h"
#include "R5GOS_ActorInstancer.generated.h"

class AActor;

UCLASS(Blueprintable, Config=Engine)
class R5GAMEPLAYORCHESTRATOR_API UR5GOS_ActorInstancer : public UR5GameplayOrchestratorSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxComponentsInCombinedActor;
    
public:
    UR5GOS_ActorInstancer();

private:
    UFUNCTION(BlueprintCallable)
    void OnSpawnedActorDestroyed(AActor* Actor);
    
};


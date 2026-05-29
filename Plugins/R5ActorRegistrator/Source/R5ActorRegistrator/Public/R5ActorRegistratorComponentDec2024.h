#pragma once
#include "CoreMinimal.h"
#include "R5ActorRegistratorComponent.h"
#include "R5ActorRegistratorComponentDec2024.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5ACTORREGISTRATOR_API UR5ActorRegistratorComponentDec2024 : public UR5ActorRegistratorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterOnClient;
    
    UR5ActorRegistratorComponentDec2024(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnActorDeath(AActor* Actor);
    
};


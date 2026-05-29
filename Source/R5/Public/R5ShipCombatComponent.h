#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5ShipCombatComponent.generated.h"

class AController;
class APawn;
class UR5ShipCombatComponentParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipCombatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipCombatComponentParams* Params;
    
    UR5ShipCombatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SingleShotActionCompleted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShotAction();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOwnerPawnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
    UFUNCTION(BlueprintCallable)
    void OnAliveStatusChanged(bool bAlive);
    
};


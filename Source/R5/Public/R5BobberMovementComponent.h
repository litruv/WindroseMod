#pragma once
#include "CoreMinimal.h"
#include "ER5BobberMovementState.h"
#include "R5BaseProjectileMovementComponent.h"
#include "R5BobberMovementComponent.generated.h"

class UR5BobberMovementParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BobberMovementComponent : public UR5BaseProjectileMovementComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BobberMovementParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    ER5BobberMovementState State;
    
public:
    UR5BobberMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
};


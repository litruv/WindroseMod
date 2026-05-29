#pragma once
#include "CoreMinimal.h"
#include "R5MovementComponent.h"
#include "R5MovementFlyComponent.generated.h"

class UInputAction;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5MovementFlyComponent : public UR5MovementComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float WantedFlySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* FlyAction;
    
public:
    UR5MovementFlyComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSetWantedFlySpeed(float Value);
    
};


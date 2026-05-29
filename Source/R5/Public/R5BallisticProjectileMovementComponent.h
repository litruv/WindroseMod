#pragma once
#include "CoreMinimal.h"
#include "R5BallisticProjectileMovementData.h"
#include "R5BaseProjectileMovementComponent.h"
#include "R5BallisticProjectileMovementComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BallisticProjectileMovementComponent : public UR5BaseProjectileMovementComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FR5BallisticProjectileMovementData BallisticProjectileMovementData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* FlyTrajectory;
    
public:
    UR5BallisticProjectileMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};


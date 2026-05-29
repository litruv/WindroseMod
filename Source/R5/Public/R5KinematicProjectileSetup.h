#pragma once
#include "CoreMinimal.h"
#include "R5ProjectileSpawningSetup.h"
#include "Templates/SubclassOf.h"
#include "R5KinematicProjectileSetup.generated.h"

class AR5BallisticProjectile;

UCLASS(Blueprintable)
class R5_API UR5KinematicProjectileSetup : public UR5ProjectileSpawningSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AR5BallisticProjectile> ProjectileClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ProjectileInitialVelocity;
    
    UR5KinematicProjectileSetup();

};


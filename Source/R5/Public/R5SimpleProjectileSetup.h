#pragma once
#include "CoreMinimal.h"
#include "R5ProjectileSpawningSetup.h"
#include "Templates/SubclassOf.h"
#include "R5SimpleProjectileSetup.generated.h"

class AR5BallisticProjectile;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5SimpleProjectileSetup : public UR5ProjectileSpawningSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AR5BallisticProjectile> ProjectileClass;
    
    UR5SimpleProjectileSetup();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent
#include "GameFramework/ProjectileMovementComponent.h"
#include "R5LootMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class R5_API UR5LootMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopMovementIfNotMovingWithImpactsSeconds;
    
    UR5LootMovementComponent(const FObjectInitializer& ObjectInitializer);

};


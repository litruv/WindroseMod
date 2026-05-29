#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "Components/CapsuleComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "R5ProjectileCollision.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ProjectileCollision : public UCapsuleComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSweepMovement, const TArray<FHitResult>&, HitResults);
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinDeltaToApplyMovement;
    
public:
    UR5ProjectileCollision(const FObjectInitializer& ObjectInitializer);

};


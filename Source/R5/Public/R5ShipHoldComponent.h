#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5ShipHoldComponent.generated.h"

class UR5ShipHoldParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipHoldComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasShipHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipHoldParams* HoldParams;
    
public:
    UR5ShipHoldComponent(const FObjectInitializer& ObjectInitializer);

};


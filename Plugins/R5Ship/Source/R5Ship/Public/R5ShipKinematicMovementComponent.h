#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MovementComponent -FallbackName=MovementComponent
#include "GameFramework/MovementComponent.h"
#include "R5ShipKinematicMovementComponent.generated.h"

class UR5ShipKinematicMovementParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5SHIP_API UR5ShipKinematicMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ShipKinematicMovementParams> Params;
    
public:
    UR5ShipKinematicMovementComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "Components/SphereComponent.h"
#include "R5ShipStabilizerComponent.generated.h"

class UR5ShipStabilizerSettings;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipStabilizerComponent : public USphereComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipStabilizerSettings* Settings;
    
public:
    UR5ShipStabilizerComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "R5InstancedBoxCollisionComponent.generated.h"

class UBodySetup;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UR5InstancedBoxCollisionComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
public:
    UR5InstancedBoxCollisionComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PhysicalAnimationComponent -FallbackName=PhysicalAnimationComponent
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "R5PhysicalAnimationComponent.generated.h"

class UR5PhysicalAnimationComponentParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5PhysicalAnimationComponent : public UPhysicalAnimationComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PhysicalAnimationComponentParams* Params;
    
public:
    UR5PhysicalAnimationComponent(const FObjectInitializer& ObjectInitializer);

};


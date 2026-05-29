#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "Components/SphereComponent.h"
#include "R5TerraformSkippableComponentInterface.h"
#include "R5TerraformSkippableSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5TerraformSkippableSphereComponent : public USphereComponent, public IR5TerraformSkippableComponentInterface {
    GENERATED_BODY()
public:
    UR5TerraformSkippableSphereComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


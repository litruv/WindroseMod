#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "Components/BoxComponent.h"
#include "R5TerraformSkippableComponentInterface.h"
#include "R5TerraformSkippableBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5TerraformSkippableBoxComponent : public UBoxComponent, public IR5TerraformSkippableComponentInterface {
    GENERATED_BODY()
public:
    UR5TerraformSkippableBoxComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};


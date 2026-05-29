#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "Components/CapsuleComponent.h"
#include "R5CapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5CapsuleComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UR5CapsuleComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLightComponent -FallbackName=PointLightComponent
#include "Components/PointLightComponent.h"
#include "R5BalancedPointLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5POINTLIGHTBALANCER_API UR5BalancedPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UR5BalancedPointLightComponent(const FObjectInitializer& ObjectInitializer);

};


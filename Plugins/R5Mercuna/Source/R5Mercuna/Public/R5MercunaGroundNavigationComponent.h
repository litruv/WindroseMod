#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Mercuna -ObjectName=MercunaGroundNavigationComponent -FallbackName=MercunaGroundNavigationComponent
#include "MercunaGroundNavigationComponent.h"
#include "R5MercunaGroundNavigationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5MERCUNA_API UR5MercunaGroundNavigationComponent : public UMercunaGroundNavigationComponent {
    GENERATED_BODY()
public:
    UR5MercunaGroundNavigationComponent(const FObjectInitializer& ObjectInitializer);

};


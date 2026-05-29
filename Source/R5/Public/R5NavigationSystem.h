#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationSystemV1 -FallbackName=NavigationSystemV1
#include "NavigationSystem.h"
#include "R5NavigationSystem.generated.h"

UCLASS(Blueprintable, NonTransient)
class UR5NavigationSystem : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
    UR5NavigationSystem();

};


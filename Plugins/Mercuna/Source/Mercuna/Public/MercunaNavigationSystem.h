#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationSystemBase -FallbackName=NavigationSystemBase
#include "AI/NavigationSystemBase.h"
#include "MercunaNavigationSystem.generated.h"

UCLASS(Blueprintable, NonTransient)
class UMercunaNavigationSystem : public UNavigationSystemBase {
    GENERATED_BODY()
public:
    UMercunaNavigationSystem();

};


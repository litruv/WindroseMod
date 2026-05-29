#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameFeatures -ObjectName=DefaultGameFeaturesProjectPolicies -FallbackName=DefaultGameFeaturesProjectPolicies
#include "GameFeaturesProjectPolicies.h"
#include "R5GameFeaturesProjectPolicies.generated.h"

UCLASS(Blueprintable)
class R5_API UR5GameFeaturesProjectPolicies : public UDefaultGameFeaturesProjectPolicies {
    GENERATED_BODY()
public:
    UR5GameFeaturesProjectPolicies();

};


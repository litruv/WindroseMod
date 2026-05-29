#pragma once
#include "CoreMinimal.h"
#include "R5BLIslandTransitions.generated.h"

class UR5BLCommonIsland;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLIslandTransitions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLCommonIsland> CurrentIsland;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5BLCommonIsland>> AvailableLocations;
    
    FR5BLIslandTransitions();
};


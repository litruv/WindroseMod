#pragma once
#include "CoreMinimal.h"
#include "R5AggregatedInventoryModules.generated.h"

class UR5BLInventoryModuleView;

USTRUCT(BlueprintType)
struct FR5AggregatedInventoryModules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5BLInventoryModuleView*> Modules;
    
    R5_API FR5AggregatedInventoryModules();
};


#pragma once
#include "CoreMinimal.h"
#include "R5BuildingUIGroup.generated.h"

class IR5BuildingItemInterface;
class UR5BuildingItemInterface;

USTRUCT(BlueprintType)
struct FR5BuildingUIGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5BuildingItemInterface>> Items;
    
    R5_API FR5BuildingUIGroup();
};


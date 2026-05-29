#pragma once
#include "CoreMinimal.h"
#include "R5CraftInventoriesData.generated.h"

USTRUCT(BlueprintType)
struct FR5CraftInventoriesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SourceInventoriesGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 OutputInventoriesGroup;
    
    R5_API FR5CraftInventoriesData();
};


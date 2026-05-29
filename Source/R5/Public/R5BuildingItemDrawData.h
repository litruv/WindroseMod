#pragma once
#include "CoreMinimal.h"
#include "R5BuildingItemDrawData.generated.h"

USTRUCT(BlueprintType)
struct FR5BuildingItemDrawData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockedByRecipe;
    
    R5_API FR5BuildingItemDrawData();
};


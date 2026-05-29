#pragma once
#include "CoreMinimal.h"
#include "R5BLRecipeUILootTableData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLRecipeUILootTableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RandomDescription;
    
    FR5BLRecipeUILootTableData();
};


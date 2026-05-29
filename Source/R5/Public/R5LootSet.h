#pragma once
#include "CoreMinimal.h"
#include "R5LootData.h"
#include "R5LootSet.generated.h"

USTRUCT(BlueprintType)
struct FR5LootSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5LootData> Items;
    
    R5_API FR5LootSet();
};


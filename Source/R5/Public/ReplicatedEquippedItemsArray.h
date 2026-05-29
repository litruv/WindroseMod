#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "Net/Serialization/FastArraySerializer.h"
#include "ReplicatedEquippedItem.h"
#include "ReplicatedEquippedItemsArray.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedEquippedItemsArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedEquippedItem> ReplicatedEquippedItems;
    
public:
    R5_API FReplicatedEquippedItemsArray();
};


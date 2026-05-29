#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "Net/Serialization/FastArraySerializer.h"
#include "R5ShipPublicStateItem.h"
#include "R5ShipPublicStateArray.generated.h"

USTRUCT(BlueprintType)
struct FR5ShipPublicStateArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ShipPublicStateItem> Items;
    
    R5_API FR5ShipPublicStateArray();
};


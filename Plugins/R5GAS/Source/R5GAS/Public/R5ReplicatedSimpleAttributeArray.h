#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "Net/Serialization/FastArraySerializer.h"
#include "R5ReplicatedSimpleAttribute.h"
#include "R5ReplicatedSimpleAttributeArray.generated.h"

USTRUCT(BlueprintType)
struct R5GAS_API FR5ReplicatedSimpleAttributeArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ReplicatedSimpleAttribute> ReplicatedSimpleAttributes;
    
    FR5ReplicatedSimpleAttributeArray();
};


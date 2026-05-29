#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "Net/Serialization/FastArraySerializer.h"
#include "R5ReplicatedMarkerStatusEffect.h"
#include "R5ReplicatedMarkerStatusEffectArray.generated.h"

USTRUCT(BlueprintType)
struct R5GAS_API FR5ReplicatedMarkerStatusEffectArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ReplicatedMarkerStatusEffect> ReplicatedMarkerStatusEffects;
    
public:
    FR5ReplicatedMarkerStatusEffectArray();
};


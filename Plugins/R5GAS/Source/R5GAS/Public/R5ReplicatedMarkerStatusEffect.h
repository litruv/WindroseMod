#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ActiveGameplayEffectHandle -FallbackName=ActiveGameplayEffectHandle
#include "ActiveGameplayEffectHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "Net/Serialization/FastArraySerializer.h"
#include "R5ReplicatedMarkerStatusEffect.generated.h"

class UR5MarkerStatusEffectParams;

USTRUCT(BlueprintType)
struct R5GAS_API FR5ReplicatedMarkerStatusEffect : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle GEHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MarkerStatusEffectParams* MarkerStatusEffectParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    FR5ReplicatedMarkerStatusEffect();
};


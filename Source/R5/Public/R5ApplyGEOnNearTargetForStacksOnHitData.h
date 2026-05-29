#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectQuery -FallbackName=GameplayEffectQuery
#include "GameplayEffect.h"
#include "Templates/SubclassOf.h"
#include "R5ApplyGEOnNearTargetForStacksOnHitData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5ApplyGEOnNearTargetForStacksOnHitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectQuery FindStacksQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ApplyOnNearTargetGEClass;
    
    R5_API FR5ApplyGEOnNearTargetForStacksOnHitData();
};


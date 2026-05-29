#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
#include "Templates/SubclassOf.h"
#include "R5GrantsGameplayEffectForTargetIntervalToGE.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5GrantsGameplayEffectForTargetIntervalToGE {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval TargetsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> ApplyGEClasses;
    
    R5_API FR5GrantsGameplayEffectForTargetIntervalToGE();
};


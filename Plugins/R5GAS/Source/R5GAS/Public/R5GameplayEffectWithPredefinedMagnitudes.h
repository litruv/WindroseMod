#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "R5GameplayEffectWithPredefinedMagnitudes.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct R5GAS_API FR5GameplayEffectWithPredefinedMagnitudes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> SetByCallerTagMagnitudes;
    
    FR5GameplayEffectWithPredefinedMagnitudes();
};


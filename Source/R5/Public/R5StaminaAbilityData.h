#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5StaminaAbilityData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5StaminaAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ZeroStaminaOngoingGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> OnZeroStaminaGE;
    
    R5_API FR5StaminaAbilityData();
};


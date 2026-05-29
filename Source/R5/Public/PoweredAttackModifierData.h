#pragma once
#include "CoreMinimal.h"
#include "PoweredAttackModifierData.generated.h"

USTRUCT(BlueprintType)
struct FPoweredAttackModifierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageModifer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaCostModifer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaBlockCostModifer;
    
    R5_API FPoweredAttackModifierData();
};


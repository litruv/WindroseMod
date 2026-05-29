#pragma once
#include "CoreMinimal.h"
#include "PoweredAttackModifierData.h"
#include "R5MeleeWeaponAttackData.h"
#include "Templates/SubclassOf.h"
#include "R5SectionSpecData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct R5_API FR5SectionSpecData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5MeleeWeaponAttackData WeaponAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoweredAttackModifierData PoweredAttackModifierData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockPenetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerfectBlockPenetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanMultipleDamagePerSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> AttackCostOverrideGE;
    
    FR5SectionSpecData();
};


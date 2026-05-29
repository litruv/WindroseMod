#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5RangeWeaponRecoilAbilityTechData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5RangeWeaponRecoilAbilityTechData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> OngoingGE;
    
    R5_API FR5RangeWeaponRecoilAbilityTechData();
};


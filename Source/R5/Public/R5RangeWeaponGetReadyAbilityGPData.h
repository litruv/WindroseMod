#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=Optional_Float -FallbackName=Optional_Float
#include "Optional_Float.h"
#include "R5RangeWeaponGetReadyAbilityGPData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5RangeWeaponGetReadyAbilityGPData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToOpenShootInputWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToActivateReadyToShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptional_Float TimeToRemoveDisableMelee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToEndAbility;
    
    FR5RangeWeaponGetReadyAbilityGPData();
};


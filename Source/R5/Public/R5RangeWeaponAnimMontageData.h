#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5DependOnSimpleAttributeFloat -FallbackName=R5DependOnSimpleAttributeFloat
#include "R5DependOnSimpleAttributeFloat.h"
#include "R5RangeWeaponActiveReloadStateData.h"
#include "R5RangeWeaponInstanceAnimMontageData.h"
#include "R5RangeWeaponAnimMontageData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5RangeWeaponAnimMontageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5RangeWeaponInstanceAnimMontageData> WeaponTagToActionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ReloadStateChangeEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5RangeWeaponActiveReloadStateData> ReloadStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DependOnSimpleAttributeFloat PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpToSectionOnCancelReload;
    
    FR5RangeWeaponAnimMontageData();
};


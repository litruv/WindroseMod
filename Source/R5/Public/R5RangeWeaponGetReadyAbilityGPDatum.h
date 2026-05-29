#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5RangeWeaponGetReadyAbilityDrawnTagToGPData.h"
#include "R5RangeWeaponGetReadyAbilityGPData.h"
#include "R5RangeWeaponGetReadyAbilityGPDatum.generated.h"

class UInputMappingContext;

USTRUCT(BlueprintType)
struct R5_API FR5RangeWeaponGetReadyAbilityGPDatum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5RangeWeaponGetReadyAbilityDrawnTagToGPData> DrawnWeaponTagsToGPDatum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5RangeWeaponGetReadyAbilityGPData DefaultTimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* AimingIMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AimingIMCPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SwitchCameraPresetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSaveReadyToShootAfterShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableTargetLock;
    
    FR5RangeWeaponGetReadyAbilityGPDatum();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5DependOnSimpleAttributeFloat -FallbackName=R5DependOnSimpleAttributeFloat
#include "R5DependOnSimpleAttributeFloat.h"
#include "Templates/SubclassOf.h"
#include "R5TemporalHealthTakeDamageData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5TemporalHealthTakeDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery OnTakeDamageTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DependOnSimpleAttributeFloat TemporalHealthToMaxHealthRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DependOnSimpleAttributeFloat DamageToTemporalHealthConversionRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSaveCurrentTemporalHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DependOnSimpleAttributeFloat SaveCurrentTemporalHealthRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DependOnSimpleAttributeFloat TimeToStartReduceTemporalHealthGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRestartReduceTemporalHealthTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ReduceTemporalHealthGEClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SetTemporalHealthGEClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SetTemporalHealthMagnitudeTag;
    
    R5_API FR5TemporalHealthTakeDamageData();
};


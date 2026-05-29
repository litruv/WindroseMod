#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5DependOnSimpleAttributeFloat -FallbackName=R5DependOnSimpleAttributeFloat
#include "R5DependOnSimpleAttributeFloat.h"
#include "R5TemporalHealthConditionCheckData.h"
#include "Templates/SubclassOf.h"
#include "R5TemporalHealthDealDamageData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5TemporalHealthDealDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5TemporalHealthConditionCheckData> OnDealtDamageCheckDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DependOnSimpleAttributeFloat DealDamageToRestoreHealthRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRestartReduceTemporalHealthTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> RestoreHealthGEClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RestoreHealthMagnitudeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ConsumeTemporalHealthGEClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ConsumeTemporalHealthMagnitudeTag;
    
    R5_API FR5TemporalHealthDealDamageData();
};


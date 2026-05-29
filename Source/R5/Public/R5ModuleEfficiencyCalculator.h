#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5ModuleEfficiencyCalculator.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ModuleEfficiencyCalculator : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InfluencingGameplayTags;
    
public:
    UR5ModuleEfficiencyCalculator();

    UFUNCTION(BlueprintCallable)
    void OnModuleHealthChanged(const FGameplayTag& ModuleTag, float AvgHealth);
    
};


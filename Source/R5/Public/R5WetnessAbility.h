#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5WetnessAbility.generated.h"

class UR5NWeatherPreset;
class UR5WetnessAbilityParams;

UCLASS(Blueprintable)
class R5_API UR5WetnessAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5WetnessAbilityParams* Params;
    
public:
    UR5WetnessAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnWetnessTagNewOrRemoved(FGameplayTag UpdatedWetnessTag, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnWeatherChanged(UR5NWeatherPreset* WeatherPreset);
    
    UFUNCTION(BlueprintCallable)
    void OnStateTransition();
    
    UFUNCTION(BlueprintCallable)
    void OnDrynessTagNewOrRemoved(FGameplayTag UpdatedDrynessTag, int32 Count);
    
};


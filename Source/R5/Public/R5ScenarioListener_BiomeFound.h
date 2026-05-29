#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeListener -FallbackName=R5ScenarioGraphNodeListener
#include "R5ScenarioGraphNodeListener.h"
#include "R5ScenarioListener_BiomeFound.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_BiomeFound : public UR5ScenarioGraphNodeListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BiomeTag;
    
    UR5ScenarioListener_BiomeFound();

private:
    UFUNCTION(BlueprintCallable)
    void CheckBiome(const FGameplayTag& NewBiomeTag);
    
};


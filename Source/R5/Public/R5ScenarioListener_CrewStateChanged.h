#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ScenarioListener_CrewListener.h"
#include "R5ScenarioListener_CrewStateChanged.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_CrewStateChanged : public UR5ScenarioListener_CrewListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PrevStateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentStateTag;
    
    UR5ScenarioListener_CrewStateChanged();

private:
    UFUNCTION(BlueprintCallable)
    void OnStateChange(const FGameplayTag& InPrevStateTag, const FGameplayTag& InCurrentStateTag);
    
};


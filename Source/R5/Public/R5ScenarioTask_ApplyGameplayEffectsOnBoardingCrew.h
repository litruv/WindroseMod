#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "EBoardingCrewMemberType.h"
#include "R5GameplayEffectWithLevel.h"
#include "R5ScenarioTask_ApplyGameplayEffectsOnBoardingCrew.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_ApplyGameplayEffectsOnBoardingCrew : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBoardingCrewMemberType> BoardingCrewMemberType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CrewMemberTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5GameplayEffectWithLevel> GameplayEffects;
    
    UR5ScenarioTask_ApplyGameplayEffectsOnBoardingCrew();

};


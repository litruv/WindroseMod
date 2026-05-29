#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioContextData -FallbackName=R5ScenarioContextData
#include "R5ScenarioContextData.h"
#include "R5ScenarioContextData_CrewPoint.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5ScenarioContextData_CrewPoint : public UR5ScenarioContextData {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CrewmemberTypes;
    
public:
    UR5ScenarioContextData_CrewPoint();

};


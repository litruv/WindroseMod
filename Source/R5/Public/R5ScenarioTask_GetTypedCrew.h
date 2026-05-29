#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ScenarioTask_CrewTask.h"
#include "R5ScenarioTask_GetTypedCrew.generated.h"

class AR5AICharacter;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_GetTypedCrew : public UR5ScenarioTask_CrewTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CrewmemberType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AR5AICharacter*> Characters;
    
    UR5ScenarioTask_GetTypedCrew();

};


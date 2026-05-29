#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=ER5ScenarioBlackboardType -FallbackName=ER5ScenarioBlackboardType
#include "ER5ScenarioBlackboardType.h"
#include "EBoardingCrewMemberType.h"
#include "R5ScenarioTracker_BoardingPassengerCountBase.h"
#include "R5ScenarioTracker_BoardingCrewCountOnDefender.generated.h"

class UR5ScenarioNode;
class UR5ScenarioTracker_BoardingCrewCountOnDefender;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTracker_BoardingCrewCountOnDefender : public UR5ScenarioTracker_BoardingPassengerCountBase {
    GENERATED_BODY()
public:
    UR5ScenarioTracker_BoardingCrewCountOnDefender();

    UFUNCTION(BlueprintCallable)
    static UR5ScenarioTracker_BoardingCrewCountOnDefender* CreateTracker(ER5ScenarioBlackboardType InBlackboardType, UR5ScenarioNode* Owner, bool SaveToPersistent, TEnumAsByte<EBoardingCrewMemberType> InCrewmemberType, FGameplayTag InBlackboardTagCount);
    
};


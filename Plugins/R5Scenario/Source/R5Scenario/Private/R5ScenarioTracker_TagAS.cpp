#include "R5ScenarioTracker_TagAS.h"

UR5ScenarioTracker_TagAS::UR5ScenarioTracker_TagAS() {
    this->Description = TEXT("Copies selected Tags from Ability System Component with their counts to Blackboard (Int Value in Blackboard).\nUSELESS if Executer Actor hasn't Ability System Component!");
}

UR5ScenarioTracker_TagAS* UR5ScenarioTracker_TagAS::CreateTracker(ER5ScenarioBlackboardType Blackboard, bool SaveToPersistent, UR5ScenarioNode* Owner, FGameplayTagContainer Tags) {
    return NULL;
}



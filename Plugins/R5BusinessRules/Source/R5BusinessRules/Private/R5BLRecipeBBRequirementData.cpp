#include "R5BLRecipeBBRequirementData.h"

FR5BLRecipeBBRequirementData::FR5BLRecipeBBRequirementData() {
    this->Amount = 0;
    this->ComparisonType = ER5BLScenarioMathComparison::Less;
    this->AvailableBlackboardSource = ER5BLAvailableBBForRecipe::World;
}


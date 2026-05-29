#include "R5Requirement.h"

UR5Requirement::UR5Requirement() {
}

FText UR5Requirement::GetRequirementDescription() const {
    return FText::GetEmpty();
}

TArray<UR5Requirement*> UR5Requirement::GetChildrenRequirements() const {
    return TArray<UR5Requirement*>();
}

bool UR5Requirement::CheckRequirementIsMet(const FR5RequirementContext& Context) const {
    return false;
}

bool UR5Requirement::CheckAllRequirements(const TArray<UR5Requirement*>& Requirements, const FR5RequirementContext& Context) {
    return false;
}



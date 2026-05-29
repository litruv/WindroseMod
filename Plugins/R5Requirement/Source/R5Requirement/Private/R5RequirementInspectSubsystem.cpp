#include "R5RequirementInspectSubsystem.h"

UR5RequirementInspectSubsystem::UR5RequirementInspectSubsystem() {
}

void UR5RequirementInspectSubsystem::RemoveInspector(const FR5RequirementInspectorHandle& Handle) {
}

FR5RequirementInspectorHandle UR5RequirementInspectSubsystem::CreateInspector(bool bInspectChildren, const UR5Requirement* Requirement, const FR5RequirementContext& Context, const FR5RequirementChangedSignature& Callback) {
    return FR5RequirementInspectorHandle{};
}



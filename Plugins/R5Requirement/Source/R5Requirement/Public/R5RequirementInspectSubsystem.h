#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5RequirementChangedSignatureDelegate.h"
#include "R5RequirementContext.h"
#include "R5RequirementInspectorHandle.h"
#include "R5RequirementInspectSubsystem.generated.h"

class UR5Requirement;

UCLASS(Blueprintable)
class R5REQUIREMENT_API UR5RequirementInspectSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UR5RequirementInspectSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveInspector(const FR5RequirementInspectorHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    FR5RequirementInspectorHandle CreateInspector(bool bInspectChildren, const UR5Requirement* Requirement, const FR5RequirementContext& Context, const FR5RequirementChangedSignature& Callback);
    
};


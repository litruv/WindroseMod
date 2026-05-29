#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5DebugHUD -ObjectName=R5DebugHUDExtension -FallbackName=R5DebugHUDExtension
#include "R5DebugHUDExtension.h"
#include "R5AS_DebugHUDExtension_RelevantAgents.generated.h"

UCLASS(Blueprintable)
class R5AGENTSYSTEM_API UR5AS_DebugHUDExtension_RelevantAgents : public UR5DebugHUDExtension {
    GENERATED_BODY()
public:
    UR5AS_DebugHUDExtension_RelevantAgents();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5AS_AgentCollector_Base.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class R5AGENTSYSTEM_API UR5AS_AgentCollector_Base : public UObject {
    GENERATED_BODY()
public:
    UR5AS_AgentCollector_Base();

};


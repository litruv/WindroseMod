#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5AwarenessSystem.generated.h"

class UR5AS_AwarenessComponent;

UCLASS(Blueprintable)
class R5AGENTSYSTEM_API UR5AwarenessSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5AS_AwarenessComponent*> AgentsWithAggro;
    
public:
    UR5AwarenessSystem();

};


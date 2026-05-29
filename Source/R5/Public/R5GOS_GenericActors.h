#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GameplayOrchestrator -ObjectName=R5GameplayOrchestratorSubsystem -FallbackName=R5GameplayOrchestratorSubsystem
#include "R5GameplayOrchestratorSubsystem.h"
#include "R5GOS_GenericActors.generated.h"

UCLASS(Blueprintable, Config=Engine)
class R5_API UR5GOS_GenericActors : public UR5GameplayOrchestratorSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInstancesPerCollection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TouchUpdateTimeLimitPerFrame;
    
public:
    UR5GOS_GenericActors();

};


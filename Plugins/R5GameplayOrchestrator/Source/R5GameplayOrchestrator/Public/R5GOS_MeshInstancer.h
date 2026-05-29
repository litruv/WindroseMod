#pragma once
#include "CoreMinimal.h"
#include "R5GameplayOrchestratorSubsystem.h"
#include "R5GOS_MeshInstancer.generated.h"

UCLASS(Blueprintable, Config=Engine)
class R5GAMEPLAYORCHESTRATOR_API UR5GOS_MeshInstancer : public UR5GameplayOrchestratorSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInstancesPerISM;
    
public:
    UR5GOS_MeshInstancer();

};


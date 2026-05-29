#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5GameplayOrchestratorSubsystem.generated.h"

UCLASS(Abstract, Blueprintable, DefaultConfig, Config=R5GameplayOrchestrator)
class R5GAMEPLAYORCHESTRATOR_API UR5GameplayOrchestratorSubsystem : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double ChunkSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlockSizeInChunks;
    
public:
    UR5GameplayOrchestratorSubsystem();

};


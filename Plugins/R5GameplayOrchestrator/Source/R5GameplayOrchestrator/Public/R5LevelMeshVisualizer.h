#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5LevelMeshVisualizer.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=R5GameplayOrchestrator)
class R5GAMEPLAYORCHESTRATOR_API UR5LevelMeshVisualizer : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChunkSize;
    
public:
    UR5LevelMeshVisualizer();

};


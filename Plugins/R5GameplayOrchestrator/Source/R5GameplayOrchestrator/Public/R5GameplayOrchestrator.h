#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5GameplayOrchestrator_TickFunction.h"
#include "Templates/SubclassOf.h"
#include "R5GameplayOrchestrator.generated.h"

class UR5GameplayOrchestratorSubsystem;

UCLASS(Blueprintable, DefaultConfig, Config=R5GameplayOrchestrator)
class R5GAMEPLAYORCHESTRATOR_API UR5GameplayOrchestrator : public UWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChunksProcessingTimeLimitPerFrame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlocksProcessingTimeLimitPerFrame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChunksIntenseProcessingTimeLimitPerFrame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlocksIntenseProcessingTimeLimitPerFrame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAsyncAssetsPreloading;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UR5GameplayOrchestratorSubsystem>> OrchestratedSubsystems;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntenseProcessingRequestTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5GameplayOrchestratorSubsystem*> Subsystems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UR5GameplayOrchestratorSubsystem*> SubsystemsByClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5GameplayOrchestrator_TickFunction TickFunction;
    
public:
    UR5GameplayOrchestrator();

};


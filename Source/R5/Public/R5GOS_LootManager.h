#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GameplayOrchestrator -ObjectName=R5GameplayOrchestratorSubsystem -FallbackName=R5GameplayOrchestratorSubsystem
#include "R5GameplayOrchestratorSubsystem.h"
#include "R5GOS_LootManager.generated.h"

class UObject;
class UR5GOS_LootManager;

UCLASS(Blueprintable, Config=Engine)
class R5_API UR5GOS_LootManager : public UR5GameplayOrchestratorSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnLootTickLimitPerFrame;
    
public:
    UR5GOS_LootManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UR5GOS_LootManager* Get(const UObject* WorldContextObject);
    
};

